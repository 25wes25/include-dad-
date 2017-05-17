/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *Tabs;
    QWidget *Canvas;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSplitter *CanvasInfoSplitter;
    QSplitter *ModSplitter;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *shapeIdLabel;
    QLabel *penColorLabel;
    QLabel *penWidthLabel;
    QLabel *penStyleLabel;
    QLabel *penCapStyleLabel;
    QLabel *PenJoinLabel;
    QLabel *BrushColorLabel;
    QLabel *brushStyleLabel;
    QWidget *widget2;
    QVBoxLayout *InputLayout;
    QLineEdit *shapeIdEdit;
    QComboBox *penColorEdit;
    QSlider *penWidthEdit;
    QComboBox *penStyleEdit;
    QComboBox *PenCapEdit;
    QComboBox *PenJoinEdit;
    QComboBox *brushColorEdit;
    QComboBox *brushStyleEdit;
    QTableWidget *layerTable;
    QGraphicsView *graphicsView;
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
        Dialog->resize(1053, 715);
        Dialog->setLayoutDirection(Qt::LeftToRight);
        Tabs = new QTabWidget(Dialog);
        Tabs->setObjectName(QStringLiteral("Tabs"));
        Tabs->setGeometry(QRect(0, 10, 1041, 728));
        Canvas = new QWidget();
        Canvas->setObjectName(QStringLiteral("Canvas"));
        widget = new QWidget(Canvas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 20, 1021, 651));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CanvasInfoSplitter = new QSplitter(widget);
        CanvasInfoSplitter->setObjectName(QStringLiteral("CanvasInfoSplitter"));
        CanvasInfoSplitter->setOrientation(Qt::Vertical);
        ModSplitter = new QSplitter(CanvasInfoSplitter);
        ModSplitter->setObjectName(QStringLiteral("ModSplitter"));
        ModSplitter->setOrientation(Qt::Horizontal);
        widget1 = new QWidget(ModSplitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        shapeIdLabel = new QLabel(widget1);
        shapeIdLabel->setObjectName(QStringLiteral("shapeIdLabel"));
        shapeIdLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(shapeIdLabel);

        penColorLabel = new QLabel(widget1);
        penColorLabel->setObjectName(QStringLiteral("penColorLabel"));
        penColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(penColorLabel);

        penWidthLabel = new QLabel(widget1);
        penWidthLabel->setObjectName(QStringLiteral("penWidthLabel"));
        penWidthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(penWidthLabel);

        penStyleLabel = new QLabel(widget1);
        penStyleLabel->setObjectName(QStringLiteral("penStyleLabel"));
        penStyleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(penStyleLabel);

        penCapStyleLabel = new QLabel(widget1);
        penCapStyleLabel->setObjectName(QStringLiteral("penCapStyleLabel"));
        penCapStyleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(penCapStyleLabel);

        PenJoinLabel = new QLabel(widget1);
        PenJoinLabel->setObjectName(QStringLiteral("PenJoinLabel"));
        PenJoinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(PenJoinLabel);

        BrushColorLabel = new QLabel(widget1);
        BrushColorLabel->setObjectName(QStringLiteral("BrushColorLabel"));
        BrushColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(BrushColorLabel);

        brushStyleLabel = new QLabel(widget1);
        brushStyleLabel->setObjectName(QStringLiteral("brushStyleLabel"));
        brushStyleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(brushStyleLabel);

        ModSplitter->addWidget(widget1);
        widget2 = new QWidget(ModSplitter);
        widget2->setObjectName(QStringLiteral("widget2"));
        InputLayout = new QVBoxLayout(widget2);
        InputLayout->setSpacing(6);
        InputLayout->setContentsMargins(11, 11, 11, 11);
        InputLayout->setObjectName(QStringLiteral("InputLayout"));
        InputLayout->setContentsMargins(0, 0, 0, 0);
        shapeIdEdit = new QLineEdit(widget2);
        shapeIdEdit->setObjectName(QStringLiteral("shapeIdEdit"));
        shapeIdEdit->setLayoutDirection(Qt::LeftToRight);
        shapeIdEdit->setMaxLength(3);
        shapeIdEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        InputLayout->addWidget(shapeIdEdit);

        penColorEdit = new QComboBox(widget2);
        penColorEdit->setObjectName(QStringLiteral("penColorEdit"));

        InputLayout->addWidget(penColorEdit);

        penWidthEdit = new QSlider(widget2);
        penWidthEdit->setObjectName(QStringLiteral("penWidthEdit"));
        penWidthEdit->setMinimumSize(QSize(81, 21));
        penWidthEdit->setMinimum(0);
        penWidthEdit->setMaximum(20);
        penWidthEdit->setOrientation(Qt::Horizontal);
        penWidthEdit->setInvertedAppearance(false);
        penWidthEdit->setInvertedControls(false);
        penWidthEdit->setTickPosition(QSlider::TicksBelow);
        penWidthEdit->setTickInterval(5);

        InputLayout->addWidget(penWidthEdit);

        penStyleEdit = new QComboBox(widget2);
        penStyleEdit->setObjectName(QStringLiteral("penStyleEdit"));

        InputLayout->addWidget(penStyleEdit);

        PenCapEdit = new QComboBox(widget2);
        PenCapEdit->setObjectName(QStringLiteral("PenCapEdit"));

        InputLayout->addWidget(PenCapEdit);

        PenJoinEdit = new QComboBox(widget2);
        PenJoinEdit->setObjectName(QStringLiteral("PenJoinEdit"));

        InputLayout->addWidget(PenJoinEdit);

        brushColorEdit = new QComboBox(widget2);
        brushColorEdit->setObjectName(QStringLiteral("brushColorEdit"));

        InputLayout->addWidget(brushColorEdit);

        brushStyleEdit = new QComboBox(widget2);
        brushStyleEdit->setObjectName(QStringLiteral("brushStyleEdit"));

        InputLayout->addWidget(brushStyleEdit);

        ModSplitter->addWidget(widget2);
        CanvasInfoSplitter->addWidget(ModSplitter);
        layerTable = new QTableWidget(CanvasInfoSplitter);
        if (layerTable->columnCount() < 2)
            layerTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        layerTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        layerTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        layerTable->setObjectName(QStringLiteral("layerTable"));
        layerTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        layerTable->setAutoScrollMargin(16);
        layerTable->setColumnCount(2);
        CanvasInfoSplitter->addWidget(layerTable);

        horizontalLayout->addWidget(CanvasInfoSplitter);

        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout->addWidget(graphicsView);

        Tabs->addTab(Canvas, QString());
        Table = new QWidget();
        Table->setObjectName(QStringLiteral("Table"));
        tableWidget = new QTableWidget(Table);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 931, 581));
        Tabs->addTab(Table, QString());
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
        Tabs->addTab(About, QString());

        retranslateUi(Dialog);

        Tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        shapeIdLabel->setText(QApplication::translate("Dialog", "Shape ID:", Q_NULLPTR));
        penColorLabel->setText(QApplication::translate("Dialog", "Pen Color:", Q_NULLPTR));
        penWidthLabel->setText(QApplication::translate("Dialog", "Pen Width", Q_NULLPTR));
        penStyleLabel->setText(QApplication::translate("Dialog", "Pen Style:", Q_NULLPTR));
        penCapStyleLabel->setText(QApplication::translate("Dialog", "Pen Cap Style:", Q_NULLPTR));
        PenJoinLabel->setText(QApplication::translate("Dialog", "Pen Join Style:", Q_NULLPTR));
        BrushColorLabel->setText(QApplication::translate("Dialog", "Brush Color:", Q_NULLPTR));
        brushStyleLabel->setText(QApplication::translate("Dialog", "Brush Style:", Q_NULLPTR));
        shapeIdEdit->setText(QString());
        penColorEdit->clear();
        penColorEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Black", Q_NULLPTR)
         << QApplication::translate("Dialog", "White", Q_NULLPTR)
         << QApplication::translate("Dialog", "Gray", Q_NULLPTR)
         << QApplication::translate("Dialog", "Red", Q_NULLPTR)
         << QApplication::translate("Dialog", "Blue", Q_NULLPTR)
         << QApplication::translate("Dialog", "Green", Q_NULLPTR)
         << QApplication::translate("Dialog", "Yellow", Q_NULLPTR)
         << QApplication::translate("Dialog", "Cyan", Q_NULLPTR)
         << QApplication::translate("Dialog", "Magenta", Q_NULLPTR)
        );
        penStyleEdit->clear();
        penStyleEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "No Pen", Q_NULLPTR)
         << QApplication::translate("Dialog", "Solid", Q_NULLPTR)
         << QApplication::translate("Dialog", "Dashed", Q_NULLPTR)
         << QApplication::translate("Dialog", "Dotted", Q_NULLPTR)
         << QApplication::translate("Dialog", "Dash-Dotted", Q_NULLPTR)
         << QApplication::translate("Dialog", "Dash-Dot-Dotted", Q_NULLPTR)
        );
        PenCapEdit->clear();
        PenCapEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Flat", Q_NULLPTR)
         << QApplication::translate("Dialog", "Square", Q_NULLPTR)
         << QApplication::translate("Dialog", "Round", Q_NULLPTR)
        );
        PenJoinEdit->clear();
        PenJoinEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Miter", Q_NULLPTR)
         << QApplication::translate("Dialog", "Bevel", Q_NULLPTR)
         << QApplication::translate("Dialog", "Round", Q_NULLPTR)
        );
        brushColorEdit->clear();
        brushColorEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Black", Q_NULLPTR)
         << QApplication::translate("Dialog", "White", Q_NULLPTR)
         << QApplication::translate("Dialog", "Gray", Q_NULLPTR)
         << QApplication::translate("Dialog", "Red", Q_NULLPTR)
         << QApplication::translate("Dialog", "Green", Q_NULLPTR)
         << QApplication::translate("Dialog", "Blue", Q_NULLPTR)
         << QApplication::translate("Dialog", "Yellow", Q_NULLPTR)
         << QApplication::translate("Dialog", "Cyan", Q_NULLPTR)
         << QApplication::translate("Dialog", "Magenta", Q_NULLPTR)
        );
        brushStyleEdit->clear();
        brushStyleEdit->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "No Brush", Q_NULLPTR)
         << QApplication::translate("Dialog", "Solid", Q_NULLPTR)
         << QApplication::translate("Dialog", "Horizontal", Q_NULLPTR)
         << QApplication::translate("Dialog", "Vertical", Q_NULLPTR)
        );
        QTableWidgetItem *___qtablewidgetitem = layerTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog", "\"eye\"", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = layerTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog", "ID", Q_NULLPTR));
        Tabs->setTabText(Tabs->indexOf(Canvas), QApplication::translate("Dialog", "Canvas", Q_NULLPTR));
        Tabs->setTabText(Tabs->indexOf(Table), QApplication::translate("Dialog", "Table", Q_NULLPTR));
        contactUsLabel->setText(QApplication::translate("Dialog", "Contact us", Q_NULLPTR));
        mainenancePlanLabel->setText(QApplication::translate("Dialog", "Maintenance Plan", Q_NULLPTR));
        testimonialsLabel->setText(QApplication::translate("Dialog", "Testimonials", Q_NULLPTR));
        Tabs->setTabText(Tabs->indexOf(About), QApplication::translate("Dialog", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
