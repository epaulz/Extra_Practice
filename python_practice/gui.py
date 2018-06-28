import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *

class Window(QMainWindow):
  def __init__(self):
    super(Window, self).__init__()
    self.setGeometry(50,50,500,500)
    self.setWindowTitle("Grade Calc")
    #self.setWindowIcon(QIcon(''))
    
    #main menu
    extractAction = QAction("&Exit", self)
    extractAction.setShortcut("Ctrl+Q")
    extractAction.setStatusTip('Leave the App')
    extractAction.triggered.connect(self.close_application)

    self.statusBar()

    mainMenu = self.menuBar()
    fileMenu = mainMenu.addMenu('&File')
    fileMenu.addAction(extractAction)
    
    self.home()

  def home(self):
    btn = QPushButton("Quit", self)
    btn.clicked.connect(self.close_application)
    btn.resize(btn.sizeHint())
    btn.move(0,0)
    self.show()    

  def close_application(self):
    print("closing the program")
    sys.exit()  

def main():
  app = QApplication(sys.argv)
  GUI = Window()
  sys.exit(app.exec_())

main()
