#ifndef USERS_H
#define USERS_H

#include <QVector>
#include "Vector.h"

//enum to declare what the user is allowed to
/**
 * @brief The status enum - status of what the user is allowed to do
 */
enum status{INVALID, ADMIN, GUEST};

//individual user struct to be inputted into vector
/**
 * @brief The singleUser struct - user information held in a struct
 */
struct singleUser {
    QString userName;
    QString password;
    status userStatus;
};

/**
 * @brief The UserList class - holds a vector of all the users that
 * are registered within our program; has public methods to manipulate
 * and access all of the said users inside of the vector
 */
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
