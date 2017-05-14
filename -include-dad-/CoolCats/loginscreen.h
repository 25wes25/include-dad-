#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QMainWindow>
#include "users.h"
#include "maininterface.h"

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = 0);
    void startMovie(QMovie &gif);
    ~LoginScreen();

private slots:
    void on_loginButton_clicked();

private:
    Ui::LoginScreen *ui;
    //Dialog painter;
    MainInterface interface;
    UserList userList;

};

#endif // LOGINSCREEN_H
