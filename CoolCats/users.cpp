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

    accVec.push_back(newUser);
    //so will compile must change
    return true;
}

status UserList::isUser(QString name, QString password)
{
    bool found = false;
    status userType;
    int i;
    for (i = 0; i < accVec.size() && !found; i++)
    {
        found = name == accVec[i].userName && password == accVec[i].password;
    }
    if (found)
    {
        userType = accVec[i].userStatus;
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

    for (int i = 0; i < accVec.size() && !found; i++)
    {
        found = name == accVec[i].userName;
    }

    return found;
}
