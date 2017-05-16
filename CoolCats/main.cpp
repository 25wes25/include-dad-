//#include "loginscreen.h"
#include "newnew.h"
#include <QMovie>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //object of type newnew(loginwindow)
    newnew w;
    //movie function to play gif animation
    QMovie weeabu(":/Images/fallingleaves.gif");
    w.startMovie(weeabu);
    //show window
    w.show();



    return a.exec();
}
