#include <QtGui>
#include <QApplication>
#include "gamegui.h"

int main(int argc, char *argv[])
{
   
   QApplication app(argc,argv);

   gamegui game;
   game.resize(300, 300);
   game.setWindowIcon(QIcon("/home/lib3770/projects/group4/side.png"));
   game.setWindowTitle("CPSC 3770-Group Project");
   game.setStyleSheet("font-size: 24px;"
		       "background-color: white;"); 


   game.show();


   return app.exec(); 
}
