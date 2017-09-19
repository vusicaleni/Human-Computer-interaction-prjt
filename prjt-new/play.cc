#include<QtGui>
#include<QTabWidget>
#include<QVBoxLayout>
#include "play.h"
#include <QMessageBox>


play::play(QWidget *parent)
   : QDialog(parent)
{


   // combobox attachments 
   QVBoxLayout *top = new QVBoxLayout;
   QHBoxLayout *tlayout = new QHBoxLayout;
   QHBoxLayout *blayout = new QHBoxLayout;
   QHBoxLayout *side = new QHBoxLayout; 
   QHBoxLayout *btns = new QHBoxLayout;

   
   QFont font("Times", 28);
   QString directory = "/home/lib3770/projects/group4/";
   // creat labels for the combo boxes 
   label1 = new QLabel("Server");
   label1-> setFont(font);
   label2 = new QLabel("Rank match");
   label2 -> setFont(font);
   label3 = new QLabel("friends list");
   label3 -> setFont(font);

   // combo box to display server choices 
   sel = new QComboBox;
   sel -> addItem("North America");
   sel -> addItem("Asia");
   sel -> addItem("South America");
   sel -> addItem("Europe");
   sel ->setFont(font);
   // combo box to display match choices 
   sel2 = new QComboBox;
   sel2 -> addItem("Unranked");
   sel2 -> addItem("Ranked");
   sel2 ->setFont(font);
   // combo box to display match 
   frnd = new QComboBox;
   frnd -> addItem("Friend-1"); 
   frnd -> addItem("Friend-2");
   frnd ->addItem("Friend-3");
   frnd -> setFont(font);
   
   // creating buttons and setting the defualt fonts 
   connectButton = new QPushButton("Connect to game");

   connectButton -> setFont(font);

   cancelButton = new QPushButton("Cancel");
   cancelButton -> setFont(font);

   specButton = new QPushButton("Spectate");
 
   specButton -> setFont(font);

   // connecting bottons to the right slots 
   connect(connectButton, SIGNAL(clicked()), this, SLOT(connectClicked())); 
   connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
   connect(specButton, SIGNAL(clicked()), this, SLOT(specClicked()));

 

   
   // adding images to correct labels
   QLabel *map = new QLabel("<img src=" + directory + "map.png>");
   tlayout->addWidget(map);
   QLabel *rank = new QLabel("<img src=" + directory + "rank.png>");
   blayout->addWidget(rank);
   QLabel *team = new QLabel("<img src=" + directory + "team.png>");
   side->addWidget(team);

   // sever and matches layout on widget
   tlayout -> addWidget(label1);
   blayout -> addWidget(label2);
   tlayout -> addWidget(sel);
   blayout -> addWidget(sel2);

   side -> addWidget(label3);
   side -> addWidget(frnd);
   
   // adding the cancel button and connect button
   btns -> addWidget(connectButton);
   btns -> addWidget(specButton);
   btns -> addWidget(cancelButton);
  

   top -> addLayout(tlayout);
   top -> addLayout(blayout);
   top -> addLayout(side);;
   top -> addLayout(btns);
   setLayout(top);
   
   setWindowTitle("player");

   
}


void play::connectClicked()
{
   //QString directory = "/home/lib3770/projects/group4/";
   // message box timeout after 5 seconds;
   QMessageBox *mb = new QMessageBox(this);
   QMessageBox *mb2 = new QMessageBox(this);
   mb->setWindowTitle("Find a match");
   mb->setText("Can't find Any Match!");
   mb->show();
      
      
   mb2->setWindowTitle("Find a match");
   mb2->setText("Searching for Match....");
   mb2->show();
   QTimer().singleShot(3000, mb2, SLOT(close()) );
 
 
}

void play::specClicked()
{

   QMessageBox::warning(this, tr("Warning"), tr("CURRENTLY NO GAME TO WATCH"));

}

