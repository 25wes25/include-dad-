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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *Logo;
    QVBoxLayout *verticalLayout;
    QLabel *name_Label;
    QLineEdit *userNameEdit;
    QLabel *pass_Label;
    QLineEdit *passwordEdit;
    QVBoxLayout *ButtonLayout;
    QPushButton *pushButton;
    QPushButton *loginButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QStringLiteral("LoginScreen"));
        LoginScreen->setEnabled(true);
        LoginScreen->resize(800, 500);
        LoginScreen->setMinimumSize(QSize(800, 500));
        LoginScreen->setMaximumSize(QSize(3840, 2160));
        centralwidget = new QWidget(LoginScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setMinimumSize(QSize(800, 450));
        centralwidget->setMaximumSize(QSize(3840, 1800));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(50, 15, 50, 15);
        Logo = new QLabel(centralwidget);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setMinimumSize(QSize(400, 100));
        Logo->setMaximumSize(QSize(600, 100));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/Images/2D Graphic Label.png")));
        Logo->setScaledContents(true);
        Logo->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Logo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(25, 25, 25, 50);
        name_Label = new QLabel(centralwidget);
        name_Label->setObjectName(QStringLiteral("name_Label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name_Label->sizePolicy().hasHeightForWidth());
        name_Label->setSizePolicy(sizePolicy);
        name_Label->setMinimumSize(QSize(100, 20));
        name_Label->setMaximumSize(QSize(100, 20));

        verticalLayout->addWidget(name_Label);

        userNameEdit = new QLineEdit(centralwidget);
        userNameEdit->setObjectName(QStringLiteral("userNameEdit"));
        sizePolicy.setHeightForWidth(userNameEdit->sizePolicy().hasHeightForWidth());
        userNameEdit->setSizePolicy(sizePolicy);
        userNameEdit->setMinimumSize(QSize(500, 20));
        userNameEdit->setMaximumSize(QSize(1000, 20));

        verticalLayout->addWidget(userNameEdit);

        pass_Label = new QLabel(centralwidget);
        pass_Label->setObjectName(QStringLiteral("pass_Label"));
        sizePolicy.setHeightForWidth(pass_Label->sizePolicy().hasHeightForWidth());
        pass_Label->setSizePolicy(sizePolicy);
        pass_Label->setMinimumSize(QSize(100, 20));
        pass_Label->setMaximumSize(QSize(100, 20));

        verticalLayout->addWidget(pass_Label);

        passwordEdit = new QLineEdit(centralwidget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        sizePolicy.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy);
        passwordEdit->setMinimumSize(QSize(500, 20));
        passwordEdit->setMaximumSize(QSize(1000, 20));

        verticalLayout->addWidget(passwordEdit);


        verticalLayout_2->addLayout(verticalLayout);

        ButtonLayout = new QVBoxLayout();
        ButtonLayout->setSpacing(0);
        ButtonLayout->setObjectName(QStringLiteral("ButtonLayout"));
        ButtonLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        ButtonLayout->setContentsMargins(550, 10, 50, 100);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        ButtonLayout->addWidget(pushButton);

        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);

        ButtonLayout->addWidget(loginButton);


        verticalLayout_2->addLayout(ButtonLayout);

        LoginScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginScreen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        LoginScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginScreen);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginScreen->setStatusBar(statusbar);

        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QMainWindow *LoginScreen)
    {
        LoginScreen->setWindowTitle(QApplication::translate("LoginScreen", "BS Paint", 0));
        Logo->setText(QString());
        name_Label->setText(QApplication::translate("LoginScreen", "UserName:", 0));
        pass_Label->setText(QApplication::translate("LoginScreen", "Password:", 0));
        pushButton->setText(QApplication::translate("LoginScreen", "Create User", 0));
        loginButton->setText(QApplication::translate("LoginScreen", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
