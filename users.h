#ifndef USERS_H
#define USERS_H

#include <QVector>
#include <QDir>
#include <QTextStream>
#include <QFile>
#include <QDebug>
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
    ~UserList();
    bool addUser(QString name, QString password, status type);
    status isUser(QString name, QString password);
    bool isNameTaken(QString name);
    QString getName();
    void clear();
    bool isAdmin();
    void operator=(UserList object);
    void Save();
    void Load();

private:
    //vector full of struct->accounts
    Vector<singleUser> accVec;
    QString savePath;
};



#endif // USERS_H
