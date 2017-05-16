/********************************************************************************
** Form generated from reading UI file 'newnew.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWNEW_H
#define UI_NEWNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newnew
{
public:
    QLabel *label;
    QLineEdit *nameEdit;
    QLineEdit *passwordEdit;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *createButton;
    QPushButton *loginButton;
    QPushButton *pushButton_3;
    QLabel *falling;

    void setupUi(QDialog *newnew)
    {
        if (newnew->objectName().isEmpty())
            newnew->setObjectName(QStringLiteral("newnew"));
        newnew->resize(593, 430);
        newnew->setMaximumSize(QSize(593, 430));
        label = new QLabel(newnew);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 511, 91));
        QFont font;
        font.setPointSize(4);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/2D Graphic Label.png")));
        label->setScaledContents(true);
        nameEdit = new QLineEdit(newnew);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(60, 150, 461, 20));
        passwordEdit = new QLineEdit(newnew);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(60, 191, 461, 20));
        label_2 = new QLabel(newnew);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 130, 101, 20));
        label_3 = new QLabel(newnew);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 169, 151, 31));
        createButton = new QPushButton(newnew);
        createButton->setObjectName(QStringLiteral("createButton"));
        createButton->setGeometry(QRect(440, 220, 75, 23));
        loginButton = new QPushButton(newnew);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(360, 220, 75, 23));
        pushButton_3 = new QPushButton(newnew);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 400, 75, 23));
        falling = new QLabel(newnew);
        falling->setObjectName(QStringLiteral("falling"));
        falling->setGeometry(QRect(-4, -1, 621, 421));
        falling->setPixmap(QPixmap(QString::fromUtf8(":/Images/fallingleaves.gif")));
        falling->setScaledContents(true);
        falling->raise();
        label->raise();
        label_3->raise();
        loginButton->raise();
        nameEdit->raise();
        pushButton_3->raise();
        passwordEdit->raise();
        label_2->raise();
        createButton->raise();

        retranslateUi(newnew);
        QObject::connect(nameEdit, SIGNAL(returnPressed()), loginButton, SLOT(click()));
        QObject::connect(passwordEdit, SIGNAL(returnPressed()), loginButton, SLOT(click()));

        QMetaObject::connectSlotsByName(newnew);
    } // setupUi

    void retranslateUi(QDialog *newnew)
    {
        newnew->setWindowTitle(QApplication::translate("newnew", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("newnew", "Username:", Q_NULLPTR));
        label_3->setText(QApplication::translate("newnew", "Password:", Q_NULLPTR));
        createButton->setText(QApplication::translate("newnew", "Create User", Q_NULLPTR));
        loginButton->setText(QApplication::translate("newnew", "Login", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("newnew", "Help!", Q_NULLPTR));
        falling->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class newnew: public Ui_newnew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWNEW_H
