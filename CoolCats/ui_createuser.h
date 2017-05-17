/********************************************************************************
** Form generated from reading UI file 'createuser.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QLineEdit *createPassEdit;
    QLineEdit *createNameEdit;
    QLineEdit *adminCode;
    QComboBox *adminGuestCombo;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *createButton;
    QLabel *label_4;
    QLabel *ERRORADMINCODE;

    void setupUi(QDialog *createUser)
    {
        if (createUser->objectName().isEmpty())
            createUser->setObjectName(QStringLiteral("createUser"));
        createUser->resize(403, 298);
        label_2 = new QLabel(createUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 135, 111, 21));
        label = new QLabel(createUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 86, 91, 20));
        createPassEdit = new QLineEdit(createUser);
        createPassEdit->setObjectName(QStringLiteral("createPassEdit"));
        createPassEdit->setGeometry(QRect(50, 160, 301, 20));
        createNameEdit = new QLineEdit(createUser);
        createNameEdit->setObjectName(QStringLiteral("createNameEdit"));
        createNameEdit->setGeometry(QRect(50, 110, 301, 20));
        adminCode = new QLineEdit(createUser);
        adminCode->setObjectName(QStringLiteral("adminCode"));
        adminCode->setEnabled(false);
        adminCode->setGeometry(QRect(190, 195, 161, 20));
        adminGuestCombo = new QComboBox(createUser);
        adminGuestCombo->setObjectName(QStringLiteral("adminGuestCombo"));
        adminGuestCombo->setGeometry(QRect(110, 195, 69, 22));
        label_3 = new QLabel(createUser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 189, 51, 31));
        pushButton = new QPushButton(createUser);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 225, 75, 23));
        createButton = new QPushButton(createUser);
        createButton->setObjectName(QStringLiteral("createButton"));
        createButton->setGeometry(QRect(200, 225, 75, 23));
        label_4 = new QLabel(createUser);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 35, 301, 51));
        QFont font;
        font.setFamily(QStringLiteral("Plantagenet Cherokee"));
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        ERRORADMINCODE = new QLabel(createUser);
        ERRORADMINCODE->setObjectName(QStringLiteral("ERRORADMINCODE"));
        ERRORADMINCODE->setGeometry(QRect(200, 250, 191, 21));

        retranslateUi(createUser);

        QMetaObject::connectSlotsByName(createUser);
    } // setupUi

    void retranslateUi(QDialog *createUser)
    {
        createUser->setWindowTitle(QApplication::translate("createUser", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("createUser", "Desired Password:", Q_NULLPTR));
        label->setText(QApplication::translate("createUser", "Desired Username:", Q_NULLPTR));
        adminGuestCombo->clear();
        adminGuestCombo->insertItems(0, QStringList()
         << QApplication::translate("createUser", "Guest", Q_NULLPTR)
         << QApplication::translate("createUser", "Admin", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("createUser", "User type:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("createUser", "Exit", Q_NULLPTR));
        createButton->setText(QApplication::translate("createUser", "Create User", Q_NULLPTR));
        label_4->setText(QApplication::translate("createUser", "Create User", Q_NULLPTR));
        ERRORADMINCODE->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class createUser: public Ui_createUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSER_H
