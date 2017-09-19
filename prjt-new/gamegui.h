#ifndef GAMEGUI_H
#define GAMEGUI_H

#include <QMainWindow>
#include "play.h"
#include "news.h"
#include "options.h"

class play;
class options;
class QLabel;
class QPushButton;

class gamegui: public QMainWindow
{
   Q_OBJECT

   public:

     gamegui();

   private slots:

     void player();
     void Gnews();
     void pref();
     
  private:

     // objects to connet the windows to the main menu
     play *dialog_play;
     news *dialog_news;
     options *dialog_opt;
     // pressing buttons causes new windows to display
     QPushButton *newsb;
     QPushButton *playb;
     QPushButton *optb;
     QPushButton *quitb;
     
};

#endif
