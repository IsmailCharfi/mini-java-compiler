from PyQt5.QtGui import QTextDocument, QFont, QColor, QTextCursor, QTextCharFormat
from PyQt5.QtWidgets import QApplication, QMainWindow, QDockWidget, QTextEdit, QWidget, QVBoxLayout, QMenu, QAction, \
    QTreeView, QLabel, QFileDialog, QMessageBox, QShortcut, QHBoxLayout, QSizePolicy
from PyQt5.QtCore import QAbstractItemModel, QModelIndex, Qt, QDir
import sys
import os
import subprocess
from java_highlighter import JavaHighlighter


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Mini Java")
        self.selected_file = None
        self.opened_project = "."

        # create the main text editor widget
        self.text_edit = QTextEdit(self)
        self.line_numbers = QTextEdit(self)
        self.line_numbers.setReadOnly(True)
        self.line_numbers.setFixedWidth(30)
        self.line_numbers.setSizePolicy(QSizePolicy.Fixed, QSizePolicy.Expanding)
        self.text_edit_layout = QHBoxLayout()
        self.text_edit_layout.addWidget(self.line_numbers, 1)
        self.text_edit_layout.addWidget(self.text_edit)
        widget = QWidget()
        widget.setLayout(self.text_edit_layout)
        font = QFont("Monospace", 10)
        doc = QTextDocument()
        doc.setDefaultFont(font)
        lines_doc = QTextDocument()
        lines_doc.setDefaultFont(font)
        self.text_edit.setDocument(doc)
        self.line_numbers.setDocument(lines_doc)
        self.text_edit.textChanged.connect(self.update_line_numbers)
        self.highlighter = JavaHighlighter(self.text_edit.document())
        self.selected_file = None
        self.text_edit_dock = QDockWidget(self)
        self.text_edit_dock.setWidget(widget)
        self.text_editor_title = QLabel(self)
        self.text_editor_title.setText("new File")
        self.text_edit_dock.setTitleBarWidget(self.text_editor_title)
        self.setCentralWidget(self.text_edit_dock)
        self.update_line_numbers()

        self.file_explorer = QTreeView(self)
        self.file_explorer_dock = QDockWidget(self)
        self.file_explorer_dock.setWidget(self.file_explorer)
        self.file_explorer_dock.setTitleBarWidget(QWidget())
        self.addDockWidget(Qt.LeftDockWidgetArea, self.file_explorer_dock)

        self.file_model = FileSystemTreeModel(self, self.opened_project)
        self.file_explorer.setModel(self.file_model)
        self.file_explorer.doubleClicked.connect(self.file_double_clicked)
        self.file_explorer.header().hide()

        # create the mini terminal widget
        self.mini_terminal = QTextEdit(self)
        self.mini_terminal.setReadOnly(True)
        self.mini_terminal.setFont(QFont("Monospace", 12))
        self.mini_terminal_widget = QWidget(self)
        self.mini_terminal_layout = QVBoxLayout(self.mini_terminal_widget)
        self.mini_terminal_layout.addWidget(self.mini_terminal)
        self.mini_terminal_widget.setLayout(self.mini_terminal_layout)
        self.mini_terminal_dock = QDockWidget(self)
        self.mini_terminal_dock.setWidget(self.mini_terminal_widget)
        self.mini_terminal_dock.setAllowedAreas(Qt.BottomDockWidgetArea)
        self.mini_terminal_dock.setTitleBarWidget(QWidget())
        self.addDockWidget(Qt.BottomDockWidgetArea, self.mini_terminal_dock)

        # create the menu bar
        menu_bar = self.menuBar()
        # create the run menu
        file_menu = QMenu("File", self)
        menu_bar.addMenu(file_menu)

        new_action = QAction("New File", self)
        new_action.triggered.connect(self.create_new_file)
        file_menu.addAction(new_action)

        open_action = QAction("Open", self)
        open_action.triggered.connect(self.open_project)
        file_menu.addAction(open_action)

        save_action = QAction("Save", self)
        save_action.triggered.connect(self.save_file)
        file_menu.addAction(save_action)

        run_menu = QMenu("Run", self)
        menu_bar.addMenu(run_menu)

        compile_action = QAction("Compile", self)
        compile_action.triggered.connect(self.compile)
        run_menu.addAction(compile_action)

        self.save_shortcut = QShortcut('Ctrl+S', self)
        self.save_shortcut.activated.connect(self.save_file)

        self.compile_shortcut = QShortcut('Ctrl+R', self)
        self.compile_shortcut.activated.connect(self.compile)

        # show the window
        self.setGeometry(100, 100, 800, 600)
        self.show()

    def file_double_clicked(self, index: QModelIndex):
        if index.internalPointer().file_info.isFile():
            selected_file = index.internalPointer().file_info.filePath()
            with open(selected_file, "r") as f:
                if index.internalPointer().file_info.isExecutable():
                    warning = QMessageBox()
                    warning.setIcon(QMessageBox.Warning)
                    warning.setText("Can't open executable file")
                    warning.setWindowTitle("Warning")
                    warning.exec_()
                else:
                    self.selected_file = selected_file
                    self.text_editor_title.setText(index.internalPointer().name())
                    self.text_edit.setPlainText(f.read())

    def compile(self):
        self.mini_terminal.setPlainText("Compiling...\n")
        temp = "~~~~temp~~~~.txt"
        file_path = self.selected_file if self.selected_file else temp
        if not self.selected_file:
            with open(file_path, "w") as f:
                f.write(self.text_edit.toPlainText())

        result = subprocess.run(f"./compiler.exe {file_path}", stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        error = result.stderr.decode('utf-8')
        success = result.stdout.decode('utf-8')

        self.mini_terminal.setPlainText(error if error else success)
        cursor = self.mini_terminal.textCursor()
        color = QColor('red' if error else "green")
        cursor.select(QTextCursor.Document)
        cursor.setCharFormat(QTextCharFormat())
        format_ = QTextCharFormat()
        format_.setForeground(color)
        cursor.mergeCharFormat(format_)

    def create_new_file(self):
        self.text_editor_title.setText("new File")
        self.text_edit.setText("")
        self.selected_file = None

    def open_project(self):
        project_path = QFileDialog.getExistingDirectory(self, "Open Project", ".", QFileDialog.ShowDirsOnly)
        if project_path:
            self.opened_project = project_path
            self.file_model = FileSystemTreeModel(self, self.opened_project)
            self.file_explorer.setModel(self.file_model)

    def save_file(self):
        if self.selected_file:
            with open(self.selected_file, "w") as f:
                f.write(self.text_edit.toPlainText())
        else:
            self.save_file_as()

    def save_file_as(self):
        file_path, _ = QFileDialog.getSaveFileName(self, "Save File", "", "Text Files (*.txt);;All Files (*)")
        if file_path:
            with open(file_path, "w") as f:
                f.write(self.text_edit.toPlainText())
                self.selected_file = file_path
                self.text_editor_title.setText(os.path.basename(file_path))
                self.file_model = FileSystemTreeModel(self, self.opened_project)
                self.file_explorer.setModel(self.file_model)

    def update_line_numbers(self):
        line_numbers = '1 \n'
        input_lines = self.text_edit.toPlainText().split('\n')
        for i in range(2, len(input_lines)+1):
            line_numbers += str(i) + '\n'

        self.line_numbers.setText(line_numbers)


class FileSystemTreeModel(QAbstractItemModel):
    def __init__(self, parent=None, path="."):
        super().__init__(parent)
        self.path = path
        self.rootItem = FileSystemTreeItem('', None, None)
        self.createTreeRecursively(self.path, self.rootItem)

    def createTreeRecursively(self, path, parent):
        entries = QDir(path).entryInfoList(QDir.AllEntries | QDir.NoDotAndDotDot)

        for entry in entries:
            if entry.isDir():
                item = FileSystemTreeItem(entry.fileName(), parent, entry)
                self.createTreeRecursively(entry.filePath(), item)
            else:
                FileSystemTreeItem(entry.fileName(), parent, entry)

    def index(self, row, column, parent=QModelIndex()):
        if not parent.isValid():
            parent_item = self.rootItem
        else:
            parent_item = parent.internalPointer()

        if row >= parent_item.childCount():
            return QModelIndex()

        child_item = parent_item.child(row)
        if child_item:
            return self.createIndex(row, column, child_item)
        else:
            return QModelIndex()

    def parent(self, index):
        if not index.isValid():
            return QModelIndex()

        child_item = index.internalPointer()
        parent_item = child_item.parent()

        if parent_item == self.rootItem:
            return QModelIndex()

        return self.createIndex(parent_item.row(), 0, parent_item)

    def rowCount(self, parent=QModelIndex()):
        if not parent.isValid():
            parent_item = self.rootItem
        else:
            parent_item = parent.internalPointer()

        return parent_item.childCount()

    def columnCount(self, parent=QModelIndex()):
        return 1

    def data(self, index, role=Qt.DisplayRole):
        if not index.isValid():
            return None

        item = index.internalPointer()

        if role == Qt.DisplayRole:
            return item.name()

        return None


class FileSystemTreeItem:
    def __init__(self, name, parent, file_info):
        self.file_info = file_info
        self.name_ = name
        self.parent_ = parent
        self.children_ = []

        if parent:
            parent.addChild(self)

    def addChild(self, child):
        self.children_.append(child)

    def child(self, row):
        return self.children_[row]

    def childCount(self):
        return len(self.children_)

    def parent(self):
        return self.parent_

    def row(self):
        if self.parent_:
            return self.parent_.children_.index(self)

        return 0

    def name(self):
        return self.name_


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    sys.exit(app.exec_())
