/********************************************************************************
** Form generated from reading UI file 'contact.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACT_H
#define UI_CONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Contact
{
public:
    QLabel *ContactUsImage;

    void setupUi(QDialog *Contact)
    {
        if (Contact->objectName().isEmpty())
            Contact->setObjectName(QStringLiteral("Contact"));
        Contact->resize(720, 480);
        ContactUsImage = new QLabel(Contact);
        ContactUsImage->setObjectName(QStringLiteral("ContactUsImage"));
        ContactUsImage->setGeometry(QRect(-10, 20, 671, 451));

        retranslateUi(Contact);

        QMetaObject::connectSlotsByName(Contact);
    } // setupUi

    void retranslateUi(QDialog *Contact)
    {
        Contact->setWindowTitle(QApplication::translate("Contact", "Dialog", Q_NULLPTR));
        ContactUsImage->setText(QApplication::translate("Contact", "<html><head/><body><p><img src=\":/Images/CantactUs.png\"/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Contact: public Ui_Contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
