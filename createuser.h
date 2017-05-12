#ifndef CREATEUSER_H
#define CREATEUSER_H

#include <QDialog>
#include "Vector.h"
#include "users.h"

namespace Ui {
class createUser;
}

class createUser : public QDialog
{
    Q_OBJECT

public:
    explicit createUser(QWidget *parent = 0);
    ~createUser();
    bool isUser(string name, string password);
    void setList(UserList* object);

private slots:
    void on_pushButton_clicked();

    void on_createButton_clicked();

    void on_adminGuestCombo_currentIndexChanged(const QString &arg1);

private:
    Ui::createUser *ui;
    UserList* accounts;
    QString adminGUID = "12345";
};

#endif // CREATEUSER_H
