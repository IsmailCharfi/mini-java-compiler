from PyQt5.QtWidgets import QApplication, QMainWindow, QDockWidget, QTextEdit, QWidget, QVBoxLayout, QMenu, QAction, \
    QTreeView
from PyQt5.QtCore import Qt
from file_system_model import FileSystemTreeModel
from text_editor import TextEditor
import sys


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Mini Java")

        # create the main text editor widget
        self.text_edit = TextEditor(self)
        self.setCentralWidget(self.text_edit)

        # create the file explorer dock widget
        self.file_explorer = QTreeView(self)
        file_explorer_dock = QDockWidget(self)
        file_explorer_dock.setWidget(self.file_explorer)
        self.addDockWidget(Qt.LeftDockWidgetArea, file_explorer_dock)

        self.file_model = FileSystemTreeModel(self, self.on_file_clicked)
        self.file_explorer.setModel(self.file_model)
        self.file_explorer.header().hide()

        # create the mini terminal widget
        self.mini_terminal = QTextEdit(self)
        self.mini_terminal.setReadOnly(True)
        mini_terminal_widget = QWidget(self)
        mini_terminal_layout = QVBoxLayout(mini_terminal_widget)
        mini_terminal_layout.addWidget(self.mini_terminal)
        mini_terminal_widget.setLayout(mini_terminal_layout)
        mini_terminal_dock = QDockWidget(self)
        mini_terminal_dock.setWidget(mini_terminal_widget)
        mini_terminal_dock.setAllowedAreas(Qt.BottomDockWidgetArea)
        self.addDockWidget(Qt.BottomDockWidgetArea, mini_terminal_dock)

        # create the menu bar
        menu_bar = self.menuBar()
        # create the run menu
        run_menu = QMenu("Run", self)
        menu_bar.addMenu(run_menu)

        compile_action = QAction("Compile", self)
        compile_action.triggered.connect(self.compile)
        run_menu.addAction(compile_action)

        # show the window
        self.setGeometry(100, 100, 800, 600)
        self.show()

    def on_file_clicked(self):
        pass

    def compile(self):
        self.mini_terminal.setPlainText("Compiling...\n")
        # simulate compiling


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    sys.exit(app.exec_())
