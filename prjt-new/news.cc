#include<QtGui>
#include<QTabWidget>
#include<QVBoxLayout>
#include "news.h"
#include <QMessageBox>


news::news(QWidget *parent)
   : QDialog(parent)
{
   // set font
   QFont font("Times", 28);
   // create thes the labels with hyper links 
   label1 = new QLabel;
   label1-> setFont(font);
   label1->setText("<a href=\"http://www.dota2.com/winter2016/\">Game News</a>");
   label1->setTextFormat(Qt::RichText);
   label1->setTextInteractionFlags(Qt::TextBrowserInteraction);
   label1->setOpenExternalLinks(true);


   label2 = new QLabel;
   label2-> setFont(font);
   label2->setText("<a href=\"http://www.dota2.com/springcleaning/\">Current Updates</a>");
   label2->setTextFormat(Qt::RichText);
   label2->setTextInteractionFlags(Qt::TextBrowserInteraction);
   label2->setOpenExternalLinks(true);

   label3 = new QLabel;
   label3-> setFont(font);
   label3->setText("<a href=\"http://www.playdota.com/forums//\">Player Forums</a>");
   label3->setTextFormat(Qt::RichText);
   label3->setTextInteractionFlags(Qt::TextBrowserInteraction);
   label3->setOpenExternalLinks(true);
   // sets the images to correct labels 
   QString directory = "/home/lib3770/projects/group4/";
   QLabel *Backnew = new QLabel("<img src=" + directory + "news.png>");
   QLabel *Backupdate = new QLabel("<img src=" + directory + "update.png>");
   QLabel *Backforum = new QLabel("<img src=" + directory + "forums.png>");
   // label locations created 
   QVBoxLayout *top = new QVBoxLayout;
   QHBoxLayout *tlayout = new QHBoxLayout;
   QHBoxLayout *blayout = new QHBoxLayout;

   // sets the labels in correct locations 
   tlayout -> addWidget(label1);
   tlayout -> addWidget(label2);
   tlayout -> addWidget(label3);
   blayout -> addWidget(Backnew);
   blayout -> addWidget(Backupdate);
   blayout -> addWidget(Backforum);

  
 

   top -> addLayout(blayout);
   top -> addLayout(tlayout);
   setLayout(top);

  
   setWindowTitle("News");

   
}
