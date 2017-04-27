#ifndef USERS_H
#define USERS_H

#include <QVector>

//enum to declare what the user is allowed to
enum status{ADMIN, GUEST};

//individual user struct to be inputted into vector
struct singleUser {
    QString userName;
    QString password;
    status userStatus;
};

class UserList
{
    //holding all the users
    QVector<singleUser> users;
public:
    UserList();
    bool isUser(QString name, QString password);
    bool isNameTaken(QString name);
    QString getName();
    bool isAdmin();
};

#endif // USERS_H
