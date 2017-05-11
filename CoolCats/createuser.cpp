#include "createuser.h"
#include "ui_createuser.h"
#include "loginscreen.h"

createUser::createUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createUser)
{
    ui->setupUi(this);
}

createUser::~createUser()
{
    delete ui;
}

void createUser::on_pushButton_clicked()
{
    //close this window
    this->close();
    //re-open the previous window
    LoginScreen w;
    w.show();
}

void createUser::on_comboBox_currentIndexChanged(const QString &arg1)
{

}
