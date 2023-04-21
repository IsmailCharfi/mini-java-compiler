from PyQt5.QtCore import QAbstractItemModel, QModelIndex, Qt, QDir


class FileSystemTreeModel(QAbstractItemModel):
    def __init__(self, parent=None, on_file_clicked=None):
        super().__init__(parent)
        self.rootItem = FileSystemTreeItem('', None)
        self.createTreeRecursively(".", self.rootItem)
        self.on_file_clicked = on_file_clicked

    def createTreeRecursively(self, path, parent):
        # Recursively create the tree structure for the given path
        entries = QDir(path).entryInfoList(QDir.AllEntries | QDir.NoDotAndDotDot)

        for entry in entries:
            if entry.isDir():
                item = FileSystemTreeItem(entry.fileName(), parent)
                self.createTreeRecursively(entry.filePath(), item)
            else:
                FileSystemTreeItem(entry.fileName(), parent)

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
    def __init__(self, name, parent):
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
