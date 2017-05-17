#ifndef NEWNEW_H
#define NEWNEW_H

#include <QDialog>
#include "users.h"
#include "maininterface.h"
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
    void onUserSent(const singleUser &);

    void on_loginButton_clicked();

    void on_createButton_clicked();

    void on_userswitch_toggled(bool checked);

    void on_userCombo_currentIndexChanged(const QString &arg1);

private:
    Ui::newnew *ui;
    MainInterface interface;
    UserList userObject;
    //admin code to create an admin user
    QString adminGUID = "12345";
};

#endif // NEWNEW_H
