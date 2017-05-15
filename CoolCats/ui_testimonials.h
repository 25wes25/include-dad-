/********************************************************************************
** Form generated from reading UI file 'testimonials.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Testimonials
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;

    void setupUi(QDialog *Testimonials)
    {
        if (Testimonials->objectName().isEmpty())
            Testimonials->setObjectName(QStringLiteral("Testimonials"));
        Testimonials->resize(720, 480);
        textBrowser = new QTextBrowser(Testimonials);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 9, 220, 251));
        textBrowser_2 = new QTextBrowser(Testimonials);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(490, 270, 220, 200));
        textBrowser_3 = new QTextBrowser(Testimonials);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 270, 220, 200));
        textBrowser_4 = new QTextBrowser(Testimonials);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(490, 9, 220, 251));
        textBrowser_5 = new QTextBrowser(Testimonials);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(245, 220, 230, 250));
        textBrowser_6 = new QTextBrowser(Testimonials);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(245, 9, 230, 201));

        retranslateUi(Testimonials);

        QMetaObject::connectSlotsByName(Testimonials);
    } // setupUi

    void retranslateUi(QDialog *Testimonials)
    {
        Testimonials->setWindowTitle(QApplication::translate("Testimonials", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Testimonials: public Ui_Testimonials {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTIMONIALS_H
