from PyQt5.QtCore import QRegExp
from PyQt5.QtGui import QTextCharFormat, QBrush, QColor, QFont, QSyntaxHighlighter


class JavaHighlighter(QSyntaxHighlighter):
    def __init__(self, parent=None):
        super(JavaHighlighter, self).__init__(parent)
        self.keyword_format = QTextCharFormat()
        self.keyword_format.setForeground(QBrush(QColor(0, 0, 255)))  # blue
        self.keyword_format.setFontWeight(QFont.Bold)
        self.keyword_list = ["abstract", "assert", "boolean", "break", "byte",
                             "case", "catch", "char", "class", "const",
                             "continue", "default", "do", "double", "else",
                             "enum", "extends", "final", "finally", "float",
                             "for", "if", "implements", "import", "instanceof",
                             "int", "interface", "long", "native", "new",
                             "package", "private", "protected", "public",
                             "return", "short", "static", "strictfp", "super",
                             "switch", "synchronized", "this", "throw",
                             "throws", "transient", "try", "void", "volatile",
                             "while"]

        self.comment_format = QTextCharFormat()
        self.comment_format.setForeground(QBrush(QColor(128, 128, 128)))  # gray
        self.comment_format.setFontItalic(True)

        self.semicolon_format = QTextCharFormat()
        self.semicolon_format.setForeground(QColor('red'))
        self.semicolon_format.setFontWeight(QFont.Bold)

        self.special_format = QTextCharFormat()
        self.special_format.setForeground(QBrush(QColor(0, 128, 0)))  # green

        self.rules = []
        self.rules.append((QRegExp("\\b(" + "|".join(self.keyword_list) + ")\\b"),
                           self.keyword_format))
        self.rules.append((QRegExp("//[^\n]*"), self.comment_format))
        self.rules.append((QRegExp("/\\*[^*]*\\*+(?:[^/*][^*]*\\*+)*/"), self.comment_format))
        self.rules.append((QRegExp("[{}()\\[\\]]"), self.special_format))
        self.rules.append((QRegExp(";"), self.semicolon_format))

    def highlightBlock(self, text):
        for pattern, format in self.rules:
            expression = QRegExp(pattern)
            index = expression.indexIn(text)
            while index >= 0:
                length = expression.matchedLength()
                self.setFormat(index, length, format)
                index = expression.indexIn(text, index + length)
