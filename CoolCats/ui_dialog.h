/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *Canvas;
    QGraphicsView *graphicsView;
    QLineEdit *shapeIdEdit;
    QLabel *shapeIdLabel;
    QComboBox *penColorEdit;
    QComboBox *penStyleEdit;
    QSlider *penWidthEdit;
    QLabel *penColorLabel;
    QLabel *penWidthLabel;
    QLabel *penStyleLabel;
    QLabel *penCapStyleLabel;
    QComboBox *PenCapEdit;
    QLabel *PenJoinLabel;
    QComboBox *PenJoinEdit;
    QLabel *BrushColorLabel;
    QComboBox *brushColorEdit;
    QLabel *brushStyleLabel;
    QComboBox *brushStyleEdit;
    QTableWidget *layerTable;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *Table;
    QTableWidget *tableWidget;
    QWidget *About;
    QLabel *contactUsLabel;
    QLabel *mainenancePlanLabel;
    QLabel *testimonialsLabel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1241, 709);
        Dialog->setLayoutDirection(Qt::LeftToRight);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 1241, 691));
        Canvas = new QWidget();
        Canvas->setObjectName(QStringLiteral("Canvas"));
        graphicsView = new QGraphicsView(Canvas);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(180, 10, 901, 641));
        shapeIdEdit = new QLineEdit(Canvas);
        shapeIdEdit->setObjectName(QStringLiteral("shapeIdEdit"));
        shapeIdEdit->setGeometry(QRect(80, 50, 81, 21));
        shapeIdEdit->setLayoutDirection(Qt::LeftToRight);
        shapeIdEdit->setMaxLength(3);
        shapeIdEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        shapeIdLabel = new QLabel(Canvas);
        shapeIdLabel->setObjectName(QStringLiteral("shapeIdLabel"));
        shapeIdLabel->setGeometry(QRect(0, 50, 71, 21));
        shapeIdLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        penColorEdit = new QComboBox(Canvas);
        penColorEdit->setObjectName(QStringLiteral("penColorEdit"));
        penColorEdit->setGeometry(QRect(80, 81, 81, 21));
        penStyleEdit = new QComboBox(Canvas);
        penStyleEdit->setObjectName(QStringLiteral("penStyleEdit"));
        penStyleEdit->setGeometry(QRect(80, 141, 81, 21));
        penWidthEdit = new QSlider(Canvas);
        penWidthEdit->setObjectName(QStringLiteral("penWidthEdit"));
        penWidthEdit->setGeometry(QRect(80, 110, 81, 21));
        penWidthEdit->setMinimumSize(QSize(81, 21));
        penWidthEdit->setMinimum(0);
        penWidthEdit->setMaximum(20);
        penWidthEdit->setOrientation(Qt::Horizontal);
        penWidthEdit->setInvertedAppearance(false);
        penWidthEdit->setInvertedControls(false);
        penWidthEdit->setTickPosition(QSlider::TicksBelow);
        penWidthEdit->setTickInterval(5);
        penColorLabel = new QLabel(Canvas);
        penColorLabel->setObjectName(QStringLiteral("penColorLabel"));
        penColorLabel->setGeometry(QRect(0, 77, 71, 20));
        penColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        penWidthLabel = new QLabel(Canvas);
        penWidthLabel->setObjectName(QStringLiteral("penWidthLabel"));
        penWidthLabel->setGeometry(QRect(0, 110, 71, 21));
        penWidthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        penStyleLabel = new QLabel(Canvas);
        penStyleLabel->setObjectName(QStringLiteral("penStyleLabel"));
        penStyleLabel->setGeometry(QRect(0, 140, 71, 21));
        penStyleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        penCapStyleLabel = new QLabel(Canvas);
        penCapStyleLabel->setObjectName(QStringLiteral("penCapStyleLabel"));
        penCapStyleLabel->setGeometry(QRect(0, 170, 71, 21));
        penCapStyleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PenCapEdit = new QComboBox(Canvas);
        PenCapEdit->setObjectName(QStringLiteral("PenCapEdit"));
        PenCapEdit->setGeometry(QRect(80, 171, 81, 21));
        PenJoinLabel = new QLabel(Canvas);
        PenJoinLabel->setObjectName(QStringLiteral("PenJoinLabel"));
        PenJoinLabel->setGeometry(QRect(0, 200, 71, 21));
        PenJoinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PenJoinEdit = new QComboBox(Canvas);
        PenJoinEdit->setObjectName(QStringLiteral("PenJoinEdit"));
        PenJoinEdit->setGeometry(QRect(80, 201, 81, 21));
        BrushColorLabel = new QLabel(Canvas);
        BrushColorLabel->setObjectName(QStringLiteral("BrushColorLabel"));
        BrushColorLabel->setGeometry(QRect(0, 230, 71, 21));
        BrushColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        brushColorEdit = new QComboBox(Canvas);
        brushColorEdit->setObjectName(QStringLiteral("brushColorEdit"));
        brushColorEdit->setGeometry(QRect(80, 231, 81, 21));
        brushStyleLabel = new QLabel(Canvas);
        brushStyleLabel->setObjectName(QStringLiteral("brushStyleLabel"));
        brushStyleLabel->setGeometry(QRect(0, 260, 71, 21));
        brushStyleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        brushStyleEdit = new QComboBox(Canvas);
        brushStyleEdit->setObjectName(QStringLiteral("brushStyleEdit"));
        brushStyleEdit->setGeometry(QRect(80, 261, 81, 21));
        layerTable = new QTableWidget(Canvas);
        if (layerTable->columnCount() < 2)
            layerTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        layerTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        layerTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        layerTable->setObjectName(QStringLiteral("layerTable"));
        layerTable->setGeometry(QRect(1090, 70, 141, 341));
        layerTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        layerTable->setAutoScrollMargin(16);
        layerTable->setColumnCount(2);
        label = new QLabel(Canvas);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1090, 45, 141, 21));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Canvas);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1130, 630, 75, 23));
        tabWidget->addTab(Canvas, QString());
        Table = new QWidget();
        Table->setObjectName(QStringLiteral("Table"));
        tableWidget = new QTableWidget(Table);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 931, 581));
        tabWidget->addTab(Table, QString());
        About = new QWidget();
        About->setObjectName(QStringLiteral("About"));
        About->setEnabled(true);
        contactUsLabel = new QLabel(About);
        contactUsLabel->setObjectName(QStringLiteral("contactUsLabel"));
        contactUsLabel->setGeometry(QRect(810, 130, 211, 16));
        mainenancePlanLabel = new QLabel(About);
        mainenancePlanLabel->setObjectName(QStringLiteral("mainenancePlanLabel"));
        mainenancePlanLabel->setGeometry(QRect(230, 150, 181, 16));
        testimonialsLabel = new QLabel(About);
        testimonialsLabel->setObjectName(QStringLiteral("testimonialsLabel"));
        testimonialsLabel->setGeometry(QRect(520, 330, 201, 16));
        tabWidget->addTab(About, QString());

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        shapeIdEdit->setText(QString());
        shapeIdLabel->setText(QApplication::translate("Dialog", "Shape ID:", 0));
        penColorEdit->clear();
        penColorEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Black", 0)
         << QApplication::translate("Dialog", "White", 0)
         << QApplication::translate("Dialog", "Gray", 0)
         << QApplication::translate("Dialog", "Red", 0)
         << QApplication::translate("Dialog", "Blue", 0)
         << QApplication::translate("Dialog", "Green", 0)
         << QApplication::translate("Dialog", "Yellow", 0)
         << QApplication::translate("Dialog", "Cyan", 0)
         << QApplication::translate("Dialog", "Magenta", 0)
        );
        penStyleEdit->clear();
        penStyleEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "No Pen", 0)
         << QApplication::translate("Dialog", "Solid", 0)
         << QApplication::translate("Dialog", "Dashed", 0)
         << QApplication::translate("Dialog", "Dotted", 0)
         << QApplication::translate("Dialog", "Dash-Dotted", 0)
         << QApplication::translate("Dialog", "Dash-Dot-Dotted", 0)
        );
        penColorLabel->setText(QApplication::translate("Dialog", "Pen Color:", 0));
        penWidthLabel->setText(QApplication::translate("Dialog", "Pen Width", 0));
        penStyleLabel->setText(QApplication::translate("Dialog", "Pen Style:", 0));
        penCapStyleLabel->setText(QApplication::translate("Dialog", "Pen Cap Style:", 0));
        PenCapEdit->clear();
        PenCapEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Flat", 0)
         << QApplication::translate("Dialog", "Square", 0)
         << QApplication::translate("Dialog", "Round", 0)
        );
        PenJoinLabel->setText(QApplication::translate("Dialog", "Pen Join Style:", 0));
        PenJoinEdit->clear();
        PenJoinEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Miter", 0)
         << QApplication::translate("Dialog", "Bevel", 0)
         << QApplication::translate("Dialog", "Round", 0)
        );
        BrushColorLabel->setText(QApplication::translate("Dialog", "Brush Color:", 0));
        brushColorEdit->clear();
        brushColorEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Black", 0)
         << QApplication::translate("Dialog", "White", 0)
         << QApplication::translate("Dialog", "Gray", 0)
         << QApplication::translate("Dialog", "Red", 0)
         << QApplication::translate("Dialog", "Green", 0)
         << QApplication::translate("Dialog", "Blue", 0)
         << QApplication::translate("Dialog", "Yellow", 0)
         << QApplication::translate("Dialog", "Cyan", 0)
         << QApplication::translate("Dialog", "Magenta", 0)
        );
        brushStyleLabel->setText(QApplication::translate("Dialog", "Brush Style:", 0));
        brushStyleEdit->clear();
        brushStyleEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "No Brush", 0)
         << QApplication::translate("Dialog", "Solid", 0)
         << QApplication::translate("Dialog", "Horizontal", 0)
         << QApplication::translate("Dialog", "Vertical", 0)
        );
        QTableWidgetItem *___qtablewidgetitem = layerTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog", "\"eye\"", 0));
        QTableWidgetItem *___qtablewidgetitem1 = layerTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog", "ID", 0));
        label->setText(QApplication::translate("Dialog", "Layers", 0));
        pushButton->setText(QApplication::translate("Dialog", "Help", 0));
        tabWidget->setTabText(tabWidget->indexOf(Canvas), QApplication::translate("Dialog", "Canvas", 0));
        tabWidget->setTabText(tabWidget->indexOf(Table), QApplication::translate("Dialog", "Table", 0));
        contactUsLabel->setText(QApplication::translate("Dialog", "Contact us", 0));
        mainenancePlanLabel->setText(QApplication::translate("Dialog", "Maintenance Plan", 0));
        testimonialsLabel->setText(QApplication::translate("Dialog", "Testimonials", 0));
        tabWidget->setTabText(tabWidget->indexOf(About), QApplication::translate("Dialog", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
