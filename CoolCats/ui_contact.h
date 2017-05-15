/********************************************************************************
** Form generated from reading UI file 'contact.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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

QT_BEGIN_NAMESPACE

class Ui_Contact
{
public:

    void setupUi(QDialog *Contact)
    {
        if (Contact->objectName().isEmpty())
            Contact->setObjectName(QStringLiteral("Contact"));
        Contact->resize(720, 480);

        retranslateUi(Contact);

        QMetaObject::connectSlotsByName(Contact);
    } // setupUi

    void retranslateUi(QDialog *Contact)
    {
        Contact->setWindowTitle(QApplication::translate("Contact", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Contact: public Ui_Contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
