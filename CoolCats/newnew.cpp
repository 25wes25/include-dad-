#include "newnew.h"
#include "ui_newnew.h"
#include "createuser.h"
#include "users.h"
#include <QMovie>
#include <QLabel>

newnew::newnew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newnew)
{
    ui->setupUi(this);
    //createWindow.setList(userObject);
}

void newnew::startMovie(QMovie &gif)
{
    ui->falling->setMovie(&gif);
    QLabel *gifLayer = new QLabel;
    gif.start();
}
newnew::~newnew()
{
    delete ui;
}

void newnew::on_loginButton_clicked()
{
    QString username;
    QString password;
    //converts the input into the above variables for cleanliness
    username = ui->nameEdit->text();
    password = ui->passwordEdit->text();
    //first will check non-user
    //close first window
    //this->close();
    //show dialog window
    //interface.show();
    if(createWindow.isUser(username, password) != 0)
    {
        //close first window
        this->close();
        //show dialog window
       interface.show();
    }
}

void newnew::on_createButton_clicked()
{
    createWindow.show();
}
