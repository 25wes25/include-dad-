#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QMainWindow>

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = 0);
    ~LoginScreen();

private:
    Ui::LoginScreen *ui;
};

#endif // LOGINSCREEN_H
