#ifndef USERS_H
#define USERS_H

#include <QVector>

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
    //holding all the users
    QVector<singleUser> users;
public:
    UserList();
    bool addUser(QString name, QString password, status type);
    status isUser(QString name, QString password);
    bool isNameTaken(QString name);
    QString getName();
    void clear();
    bool isAdmin();
};

#endif // USERS_H
