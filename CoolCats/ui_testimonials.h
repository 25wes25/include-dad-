/********************************************************************************
** Form generated from reading UI file 'testimonials.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTIMONIALS_H
#define UI_TESTIMONIALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Testimonials
{
public:

    void setupUi(QDialog *Testimonials)
    {
        if (Testimonials->objectName().isEmpty())
            Testimonials->setObjectName(QStringLiteral("Testimonials"));
        Testimonials->resize(720, 480);

        retranslateUi(Testimonials);

        QMetaObject::connectSlotsByName(Testimonials);
    } // setupUi

    void retranslateUi(QDialog *Testimonials)
    {
        Testimonials->setWindowTitle(QApplication::translate("Testimonials", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Testimonials: public Ui_Testimonials {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTIMONIALS_H
