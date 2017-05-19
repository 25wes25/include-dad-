#include "newnew.h"
#include "ui_newnew.h"

#include "users.h"
#include <QMovie>
#include <QLabel>

newnew::newnew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newnew)
{
    ui->setupUi(this);
    //userObject.addUser("coolcat", "12345", ADMIN);
   // connect(interface,SIGNAL(Logout()),this,SLOT(onLogout()));
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

void newnew::onUserSent(const singleUser &userData)
{
    userObject.addUser(userData.userName,userData.password,userData.userStatus);
}

void newnew::on_loginButton_clicked()
{
    if(userObject.isUser(ui->nameEdit->text(), ui->passwordEdit->text()) != INVALID)
    {
        //close first window
        this->close();
        //show dialog window
       interface.setuserLevel(ADMIN/*userObject.isUser(ui->nameEdit->text(), ui->passwordEdit->text())*/);
       interface.show();
    }
}

void newnew::on_createButton_clicked()
{
    singleUser createUser;
    QString desiredUsername = ui->nameEdit->text();
    //set the above variables to the input line edits
    if(userObject.isNameTaken(desiredUsername) == false)
    {
        createUser.userName = ui->nameEdit->text();
        createUser.password = ui->passwordEdit->text();
        //if statement to determine what this user type will be
        if(ui->userCombo->itemText(ui->userCombo->currentIndex()) == "Guest")
        {
            createUser.userStatus = GUEST;
            //adds the user as a Guest
            userObject.addUser(createUser.userName,createUser.password,createUser.userStatus);
            //set test to who added
            ui->ERRORADMINCODE->setText("Added "+createUser.userName+" as Guest");
            ui->nameEdit->clear();
            ui->passwordEdit->clear();
        }
        else
        {
            if(ui->adminCode->text() == adminGUID)
            {
                createUser.userStatus = ADMIN;
                //adds the user to the vector as an admin
                userObject.addUser(createUser.userName,createUser.password,createUser.userStatus);
                //set test to who added
                ui->ERRORADMINCODE->setText("Added "+createUser.userName+" as Admin");
                ui->nameEdit->clear();
                ui->passwordEdit->clear();
            }
            else
            {
                ui->ERRORADMINCODE->setText("INVALID ADMIN CODE");
            }
        }
    }
    else
    {
        ui->ERRORADMINCODE->setText("NAME ALREADY TAKEN!");
    }
}

void newnew::on_userswitch_toggled(bool checked)
{
    if(checked == true)
    {
        ui->userCombo->setEnabled(true);
        ui->createButton->setEnabled(true);
        ui->label_2->setText("Desired Username: ");
        ui->label_3->setText("Desired Password: ");
    }
    else
    {
        ui->userCombo->setEnabled(false);
        ui->createButton->setEnabled(false);
        ui->label_2->setText("Username: ");
        ui->label_3->setText("Password: ");
        ui->codeLabel->setText(" ");
        ui->ERRORADMINCODE->setText(" ");
    }
}

void newnew::on_userCombo_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Guest")
    {
        ui->adminCode->setEnabled(false);
        ui->codeLabel->setText(" ");
    }
    else
    {
        ui->adminCode->setEnabled(true);
        ui->codeLabel->setText("Please Enter an Admin Code");
    }
}
void newnew::onLogout()
{
    this->open();
}
