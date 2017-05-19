/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QLabel *image;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *previous;
    QPushButton *next;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QStringLiteral("Help"));
        Help->resize(1080, 720);
        image = new QLabel(Help);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(100, 70, 891, 611));
        layoutWidget = new QWidget(Help);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(900, 690, 168, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        previous = new QPushButton(layoutWidget);
        previous->setObjectName(QStringLiteral("previous"));
        previous->setEnabled(false);

        horizontalLayout->addWidget(previous);

        next = new QPushButton(layoutWidget);
        next->setObjectName(QStringLiteral("next"));

        horizontalLayout->addWidget(next);


        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Dialog", Q_NULLPTR));
        image->setText(QApplication::translate("Help", "<html><head/><body><p><img src=\":/Images/Help_Login.jpg\"/></p></body></html>", Q_NULLPTR));
        previous->setText(QApplication::translate("Help", "Previous", Q_NULLPTR));
        next->setText(QApplication::translate("Help", "Next", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
