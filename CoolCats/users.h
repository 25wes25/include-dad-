#ifndef USERS_H
#define USERS_H

#include <QVector>
#include "Vector.h"

//enum to declare what the user is allowed to
enum status{INVALID, ADMIN, GUEST};

//individual user struct to be inputted into vector
struct singleUser {
    QString userName;
    QString password;
    status userStatus;
};

class UserList
{

public:
    UserList();
    bool addUser(QString name, QString password, status type);
    status isUser(QString name, QString password);
    bool isNameTaken(QString name);
    QString getName();
    void clear();
    bool isAdmin();
    void operator=(UserList object);

private:
    //vector full of struct->accounts
    Vector<singleUser> accVec;
};

#endif // USERS_H
