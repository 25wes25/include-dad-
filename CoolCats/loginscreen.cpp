#include "loginscreen.h"
#include "ui_loginscreen.h"
#include <QMovie>
#include <QLabel>

LoginScreen::LoginScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
}

void LoginScreen::startMovie(QMovie &gif)
{
//    ui->label_4->setMovie(&gif);
//    //QLabel *gifLayer = new QLabel;
//    gif.start();
}

LoginScreen::~LoginScreen()
{
    delete ui;
}

void LoginScreen::on_loginButton_clicked()
{
    QString username;
    QString password;
    //converts the input into the above variables for cleanliness
    username = ui->userNameEdit->text();
    password = ui->passwordEdit->text();
    //first will check non-user
    //close first window
    this->close();
    //show dialog window
   interface.show();
    if(userList.isUser(username, password) != 0)
    {
        //close first window
        this->close();
        //show dialog window
       interface.show();
    }

}
