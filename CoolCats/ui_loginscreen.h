/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QLineEdit *userNameEdit;
    QPushButton *pushButton;
    QPushButton *loginButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QStringLiteral("LoginScreen"));
        LoginScreen->setEnabled(true);
        LoginScreen->resize(500, 433);
        LoginScreen->setMinimumSize(QSize(500, 433));
        LoginScreen->setMaximumSize(QSize(500, 433));
        centralwidget = new QWidget(LoginScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(50, 60, 50, 60);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(400, 100));
        label_3->setMaximumSize(QSize(600, 100));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Images/2D Graphic Label.png")));
        label_3->setScaledContents(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        passwordEdit = new QLineEdit(centralwidget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));

        gridLayout->addWidget(passwordEdit, 4, 0, 1, 1);

        userNameEdit = new QLineEdit(centralwidget);
        userNameEdit->setObjectName(QStringLiteral("userNameEdit"));

        gridLayout->addWidget(userNameEdit, 2, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 5, 0, 1, 1);

        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        gridLayout->addWidget(loginButton, 6, 0, 1, 1);

        LoginScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginScreen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 21));
        LoginScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginScreen);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginScreen->setStatusBar(statusbar);

        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QMainWindow *LoginScreen)
    {
        LoginScreen->setWindowTitle(QApplication::translate("LoginScreen", "MainWindow", 0));
        label_3->setText(QString());
        label->setText(QApplication::translate("LoginScreen", "UserName:", 0));
        label_2->setText(QApplication::translate("LoginScreen", "Password:", 0));
        pushButton->setText(QApplication::translate("LoginScreen", "Create User", 0));
        loginButton->setText(QApplication::translate("LoginScreen", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
