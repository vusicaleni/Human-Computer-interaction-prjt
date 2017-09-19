#ifndef NEWS_H
#define NEWS_H

#include<QTabWidget>
#include<QWidget>
#include<QDialog>

// Qt foward declaration
class QpushButton;
class QLabel;
class QComboBox;
class QSpinBox;



class news : public QDialog
{

   Q_OBJECT
      public:
   // constructor 
   news(QWidget *parent = 0);
   void rest();  
   
  private:
   // objects to create the labels for the news times
   QLabel *label1;
   QLabel *label2;
   QLabel *label3;


};

#endif
