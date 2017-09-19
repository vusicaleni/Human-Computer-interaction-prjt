#ifndef PLAY_H
#define PLAY_H

#include<QTabWidget>
#include<QWidget>
#include<QDialog>

// Qt foward declaration
class QpushButton;
class QLabel;
class QComboBox;
class QSpinBox;



class play : public QDialog
{

   Q_OBJECT
      public:
   // player constructor 
   play(QWidget *parent = 0);
   void rest();

  signals:

   private slots:
   // provides feedback for user and their selection
   void connectClicked();
   void specClicked();
  
   
  private:
   // object pointers to create the labels, comobox boxs 
   QWidget *obj;
   QLabel *label1;
   QLabel *label2;
   QLabel *label3;
   QComboBox *sel;
   QComboBox *sel2;
   QComboBox *frnd;
   QSpinBox *qty;
   QPushButton *connectButton;
   QPushButton *cancelButton;
   QPushButton *specButton;

   QMovie *movie;
   QLabel *disp;

};

#endif
