#include "users.h"

QString StatusToString(status Status)
{
    switch (Status)
    {
    case INVALID: return "Invalid";
        break;
    case ADMIN: return "Admin";
        break;
    case GUEST: return "Guest";
        break;
    }
}

status StringToStatus(QString Status)
{
    if (Status == "Admin")
    {
        return ADMIN;
    }
    else if (Status == "Guest")
    {
        return GUEST;
    }
    else
    {
        return INVALID;
    }
}

UserList::UserList()
{
    QDir SavePath = QDir::currentPath();

    while (SavePath.dirName() != "-include-dad-" && SavePath.cdUp());
    if(!SavePath.cd("Saves"))
    {
        SavePath.mkdir("Saves");
        SavePath.cd("Saves");
    }
    savePath = SavePath.path();
    Load();
    //qDebug() << accVec[0].userName;
}

UserList::~UserList()
{
    Save();
}

void UserList::clear()
{
    // users.clear();
}

void UserList::operator=(UserList object)
{
    accVec = object.accVec;
}

void UserList::Save()
{
    QFile outFile(savePath + "/Users.txt");
    outFile.remove();
    outFile.open(QIODevice::WriteOnly);
    QTextStream output(&outFile);

    for (int i = 0; i < accVec.size(); i++)
    {
        output << accVec[i].userName << endl;
        output << accVec[i].password << endl;
        output << StatusToString(accVec[i].userStatus) << endl;
        output << endl;
    }
}

void UserList::Load()
{
    QFile inFile(savePath + "/Users.txt");
    inFile.open(QIODevice::ReadOnly);
    QTextStream input(&inFile);

    singleUser tempUser;
    accVec.clear();

    while (!input.atEnd())
    {
        tempUser.userName = input.readLine();
        tempUser.password = input.readLine();
        tempUser.userStatus = StringToStatus(input.readLine());
        input.readLine();
        accVec.push_back(tempUser);
    }
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
