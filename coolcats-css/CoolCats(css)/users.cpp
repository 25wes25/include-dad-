#include "users.h"

UserList::UserList()
{

}

void UserList::clear()
{
    // users.clear();
}

void UserList::operator=(UserList object)
{
    accVec = object.accVec;
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
    int i = 0;
    while(found == false && i < accVec.size())
    {
        if(accVec[i].userName == name && accVec[i].password == password)
        {
            found = true;
        }
        i++;
    }
    if (found)
    {
        userType = accVec[--i].userStatus;
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
