/********************************************************************************
** Form generated from reading UI file 'createuser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSER_H
#define UI_CREATEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_createUser
{
public:
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *createUser)
    {
        if (createUser->objectName().isEmpty())
            createUser->setObjectName(QStringLiteral("createUser"));
        createUser->resize(409, 312);
        label_2 = new QLabel(createUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 160, 111, 21));
        label = new QLabel(createUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 111, 91, 20));
        lineEdit_2 = new QLineEdit(createUser);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 185, 301, 20));
        lineEdit = new QLineEdit(createUser);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 135, 301, 20));
        lineEdit_3 = new QLineEdit(createUser);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 220, 161, 20));
        comboBox = new QComboBox(createUser);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 220, 69, 22));
        label_3 = new QLabel(createUser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 214, 51, 31));
        pushButton = new QPushButton(createUser);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 250, 75, 23));
        pushButton_2 = new QPushButton(createUser);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 250, 75, 23));

        retranslateUi(createUser);

        QMetaObject::connectSlotsByName(createUser);
    } // setupUi

    void retranslateUi(QDialog *createUser)
    {
        createUser->setWindowTitle(QApplication::translate("createUser", "Dialog", 0));
        label_2->setText(QApplication::translate("createUser", "Desired Password:", 0));
        label->setText(QApplication::translate("createUser", "Desired Username:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("createUser", "Guest", 0)
         << QApplication::translate("createUser", "Admin", 0)
        );
        label_3->setText(QApplication::translate("createUser", "User type:", 0));
        pushButton->setText(QApplication::translate("createUser", "Exit", 0));
        pushButton_2->setText(QApplication::translate("createUser", "Create User", 0));
    } // retranslateUi

};

namespace Ui {
    class createUser: public Ui_createUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSER_H
