#ifndef NEWNEW_H
#define NEWNEW_H

#include <QDialog>
#include "users.h"
#include "maininterface.h"
#include "createuser.h"
namespace Ui {
class newnew;
}

class newnew : public QDialog
{
    Q_OBJECT

public:
    explicit newnew(QWidget *parent = 0);
    void startMovie(QMovie &gif);
    ~newnew();

private slots:

    void on_loginButton_clicked();

    void on_createButton_clicked();

private:
    Ui::newnew *ui;
    MainInterface interface;
    UserList userObject;
    createUser createWindow;
};

#endif // NEWNEW_H
