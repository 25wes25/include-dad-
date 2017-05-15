/********************************************************************************
** Form generated from reading UI file 'maintenancenotes.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCENOTES_H
#define UI_MAINTENANCENOTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MaintenanceNotes
{
public:

    void setupUi(QDialog *MaintenanceNotes)
    {
        if (MaintenanceNotes->objectName().isEmpty())
            MaintenanceNotes->setObjectName(QStringLiteral("MaintenanceNotes"));
        MaintenanceNotes->resize(720, 480);

        retranslateUi(MaintenanceNotes);

        QMetaObject::connectSlotsByName(MaintenanceNotes);
    } // setupUi

    void retranslateUi(QDialog *MaintenanceNotes)
    {
        MaintenanceNotes->setWindowTitle(QApplication::translate("MaintenanceNotes", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MaintenanceNotes: public Ui_MaintenanceNotes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCENOTES_H
