#include<QtGui>
#include<QTabWidget>
#include<QVBoxLayout>
#include <QMessageBox>
#include<QPixmap>
#include<QPalette>
#include<QComboBox>

#include "options.h"


options::options(QWidget *parent)
   : QDialog(parent)
{
   // resize the window 
   resize(300, 300);
   // defeault font
   QFont font("Times", 28);
   // set the labels for widgets
   label1 = new QLabel("Sound Level");
   label1-> setFont(font);
   
   label2 = new QLabel("SFX level");
   label2 -> setFont(font);
   label3 = new QLabel("Mouse Speed");
   label3 -> setFont(font);

   // creating the horizontal silders 
   sel = new QSlider(Qt::Horizontal);
   sel -> setRange(0,100);
   sel ->setFont(font);
  
   sel2 = new QSlider(Qt::Horizontal);
   sel -> setRange(0,100);
   sel ->setFont(font); 

   frnd = new QSlider(Qt::Horizontal);
   frnd -> setRange(0,100);
   frnd ->setFont(font);

   // Commbo box options
   
   label4 = new QLabel("Resloution");
   label4-> setFont(font);
   label5 = new QLabel("Window Size");
   label5 -> setFont(font);
   label6 = new QLabel("Character Quality    ");
   label6 -> setFont(font);
   label7 = new QLabel("  Effect Quality");
   label7-> setFont(font);
   label8 = new QLabel("  Enviornment ");
   label8 -> setFont(font);

   // Combo Box Options
   
   res  = new QComboBox;
   res -> addItem("1920 * 1080");
   res -> addItem("1600 * 900 ");
   res -> addItem(" 1366 * 760");
   res -> addItem("1024 * 600");
   res ->setFont(font);
 
   window = new QComboBox;
   window -> addItem("Full Screen");
   window -> addItem("Window Screen");
   window ->setFont(font);

   charq = new QComboBox;
   charq -> addItem("High Quality"); 
   charq -> addItem("Medium Quality");
   charq -> addItem("Low Quality");
   charq ->setFont(font);
   
   effectq = new QComboBox;
   effectq -> addItem("High Quality");
   effectq -> addItem("Medium Quality");
   effectq -> addItem("Low Quality");
   effectq -> setFont(font);
 
   envirq = new QComboBox;
   envirq -> addItem("Detailed");
   envirq -> addItem("Regular");
   envirq -> addItem("Basic");
   envirq ->setFont(font);


   
   // creatign button for information feed back
   connectButton = new QPushButton("Save");
   connectButton -> setFont(font);
   cancelButton = new QPushButton("Exit");
   cancelButton -> setFont(font);

   // connect the buttons to slots 
   connect(connectButton, SIGNAL(clicked()), this, SLOT(connectClicked())); 
   connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
   // sets the image to correct label
   QString directory = "/home/lib3770/projects/group4/";
   QLabel *Backpic = new QLabel("<img src=" + directory + "the.jpg>");
  
   QHBoxLayout *im = new QHBoxLayout;
   im -> addWidget(Backpic);
 
   QVBoxLayout *top = new QVBoxLayout;

  
   // layout pointers
   QHBoxLayout *clayout = new QHBoxLayout;
   QHBoxLayout *cclayout = new QHBoxLayout;
   
   
   QHBoxLayout *tlayout = new QHBoxLayout;
   QHBoxLayout *blayout = new QHBoxLayout;
   QHBoxLayout *side = new QHBoxLayout; 
   QHBoxLayout *btns = new QHBoxLayout;
    
   // bind layouts Horizontal
   clayout -> addWidget(label4);
   cclayout -> addWidget(res);
   clayout -> addWidget(label5);
   cclayout -> addWidget(window);
   clayout -> addWidget(label6);
   cclayout -> addWidget(charq);
   clayout -> addWidget(label7);
   cclayout -> addWidget(effectq);
   clayout -> addWidget(label8);
   cclayout -> addWidget(envirq);
   
   
   // bind layouts Horizontal
   tlayout -> addWidget(label1);
   
   blayout -> addWidget(label2);
   tlayout -> addWidget(sel);
   blayout -> addWidget(sel2);
   
   side -> addWidget(label3);
   side -> addWidget(frnd);
   
   // basic buttons
   btns -> addWidget(connectButton);
   btns -> addWidget(cancelButton);

   // adding top layouts
   top -> addLayout(im);
   top -> addLayout(clayout);
   top -> addLayout(cclayout);
   
   top -> addLayout(tlayout);
   
   top -> addLayout(blayout);
   top -> addLayout(side);;
   top -> addLayout(btns);
   setLayout(top);
   
   
   setWindowTitle("options");
   
   
}


void options::connectClicked()
{

   QMessageBox::information(this, tr("    "), tr("changes complete"));
   
}
