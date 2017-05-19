#include "newnew.h"
#include <QMovie>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    newnew w;

    QMovie weeabu(":/Images/fallingleaves.gif");
    w.startMovie(weeabu);

    w.show();



    return a.exec();
}
