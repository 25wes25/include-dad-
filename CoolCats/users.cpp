#include "users.h"

UserList::UserList()
{

}

void UserList::clear()
{
   // users.clear();
}

bool UserList::addUser(QString name, QString password, status type)
{
    singleUser newUser;
    newUser.userName = name;
    newUser.password = password;
    newUser.userStatus = type;

    users.push_back(newUser);
}

status UserList::isUser(QString name, QString password)
{
    bool found = false;
    status userType;
    int i;
    for (i = 0; i < users.size() && !found; i++)
    {
        found = name == users[i].userName && password == users[i].password;
    }
    if (found)
    {
        userType = users[i].userStatus;
    }
    else
    {
        userType = INVALID;
    }

    return userType;
}

bool UserList::isNameTaken(QString name)
{
    bool found = false;

    for (int i = 0; i < users.size() && !found; i++)
    {
        found = name == users[i].userName;
    }

    return found;
}
