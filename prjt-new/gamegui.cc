#include<QtGui>
#include "gamegui.h"
#include "play.h"
#include "news.h"
#include "options.h"

gamegui :: gamegui()
{

   // creating the layouts for the main menu
   QVBoxLayout *top = new QVBoxLayout;
   QHBoxLayout *disp = new QHBoxLayout;
   QHBoxLayout *btns = new QHBoxLayout;
   // setting fonts and and image to be displayed
   QFont font("Arial", 28);
   QString directory = "/home/lib3770/projects/group4/";
   QWidget *centralWidget = new QWidget;
   setCentralWidget(centralWidget); 


   // creating the buttons titles 
   newsb = new QPushButton("News");
   newsb -> setFont(font); 
   playb = new QPushButton("Play");
   playb -> setFont(font);
   optb = new QPushButton("Options");
   optb -> setFont(font);
   
   quitb = new QPushButton("Quit"); 
   quitb -> setFont(font);
   QLabel *Backpic = new QLabel("<img src=" + directory + "game.png>");
   disp->addWidget(Backpic);
   
   // connecting buttons to the appropriate slots
   connect(playb, SIGNAL(clicked()), this, SLOT(player()));
   connect(newsb, SIGNAL(clicked()), this, SLOT(Gnews()));
   connect(optb, SIGNAL(clicked()), this, SLOT(pref()));
   connect(quitb, SIGNAL(clicked()), this, SLOT(close())); 

   // adding the widgets for the different buttons to be clicked for
   // players, news options menu 
   btns -> addWidget(newsb);
   btns -> addWidget(playb);
   btns -> addWidget(optb);
   btns -> addWidget(quitb);
   top -> addLayout(disp);
   top -> addLayout(btns);
   centralWidget->setLayout(top);  
   dialog_play = 0;
   dialog_news = 0;
   dialog_opt = 0;

}

// functions used to show the windows if buttons pressed 
void gamegui::player()
{
   if(!dialog_play)
   {
      dialog_play = new play(this);
   }
      dialog_play -> show();
      dialog_play -> activateWindow();
}

void gamegui::Gnews()
{
   if(!dialog_news)
   {
      dialog_news = new news(this);
   }
      dialog_news -> show();
      dialog_news -> activateWindow();
}
void gamegui::pref()
{
   if(!dialog_opt)
   {
      dialog_opt = new options(this);
   }
   dialog_opt -> show();
   dialog_opt -> activateWindow();


}
