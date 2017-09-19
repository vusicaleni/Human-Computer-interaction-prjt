#ifndef OPTIONS_H
#define OPTIONS_H

#include<QTabWidget>
#include<QWidget>
#include<QDialog>
#include<QSlider>

// Qt foward declaration
class QpushButton;
class QLabel;
class QComboBox;
class QSpinBox;



class options : public QDialog
{

   Q_OBJECT
      public:
   options(QWidget *parent = 0);
   void rest();

  signals:
   void menuSend(const QString &);

   private slots:
   
   void connectClicked();

   
   
  private:
 
   //QWidget *obj;
   // labels for sliders 
   QLabel *label1;
   QLabel *label2;
   QLabel *label3;

   //slider options 
   QSlider *sel;
   QSlider *sel2;
   QSlider *frnd;

   // labels for combobox
   QLabel *label4;
   QLabel *label5;
   QLabel *label6;
   QLabel *label7;
   QLabel *label8;
 
   
   // combobox options
   QComboBox *res;
   QComboBox *window;
   QComboBox *charq;
   QComboBox *effectq;
   QComboBox *envirq;
   
   // creating buttons 
   QPushButton *connectButton;
   QPushButton *cancelButton;
 


};

#endif
