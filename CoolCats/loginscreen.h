#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QMainWindow>
#include "dialog.h"

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = 0);
    ~LoginScreen();

private slots:
    void on_loginButton_clicked();

private:
    Ui::LoginScreen *ui;
    Ui::Dialog *painter;

};

#endif // LOGINSCREEN_H
