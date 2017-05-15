/********************************************************************************
** Form generated from reading UI file 'maininterface.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAININTERFACE_H
#define UI_MAININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainInterface
{
public:
    QAction *actionMaintenance_Notes;
    QAction *actionTestimonials;
    QAction *actionContact_Us;
    QAction *actionTBD;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionNew;
    QAction *actionLoad;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *Tabs;
    QWidget *Canvas;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSplitter *CanvasInfoSplitter;
    QSplitter *InputSplitter;
    QWidget *layoutWidget_2;
    QVBoxLayout *LabelLayout;
    QLabel *ShapeTypeLabel;
    QLabel *shapeIdLabel;
    QLabel *penColorLabel;
    QLabel *penWidthLabel;
    QLabel *penStyleLabel;
    QLabel *penCapStyleLabel;
    QLabel *PenJoinLabel;
    QLabel *BrushColorLabel;
    QLabel *brushStyleLabel;
    QWidget *layoutWidget_3;
    QVBoxLayout *InputLayout;
    QComboBox *ShapeTypeEdit;
    QLineEdit *shapeIdEdit;
    QComboBox *penColorEdit;
    QSlider *penWidthEdit;
    QComboBox *penStyleEdit;
    QComboBox *PenCapEdit;
    QComboBox *PenJoinEdit;
    QComboBox *brushColorEdit;
    QComboBox *brushStyleEdit;
    QTableWidget *layerTable;
    QWidget *layoutWidget_4;
    QHBoxLayout *Adddelete_3;
    QPushButton *AddObject_4;
    QPushButton *DeleteObj;
    QWidget *Table;
    QTableWidget *tableWidget;
    QPushButton *button_SortID;
    QPushButton *button_SortArea;
    QPushButton *button_SortPerimeter;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainInterface)
    {
        if (MainInterface->objectName().isEmpty())
            MainInterface->setObjectName(QStringLiteral("MainInterface"));
        MainInterface->resize(1300, 700);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainInterface->sizePolicy().hasHeightForWidth());
        MainInterface->setSizePolicy(sizePolicy);
        MainInterface->setMinimumSize(QSize(1300, 700));
        MainInterface->setMaximumSize(QSize(8000, 2000));
        actionMaintenance_Notes = new QAction(MainInterface);
        actionMaintenance_Notes->setObjectName(QStringLiteral("actionMaintenance_Notes"));
        actionTestimonials = new QAction(MainInterface);
        actionTestimonials->setObjectName(QStringLiteral("actionTestimonials"));
        actionContact_Us = new QAction(MainInterface);
        actionContact_Us->setObjectName(QStringLiteral("actionContact_Us"));
        actionTBD = new QAction(MainInterface);
        actionTBD->setObjectName(QStringLiteral("actionTBD"));
        actionSave = new QAction(MainInterface);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(MainInterface);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionOpen = new QAction(MainInterface);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(MainInterface);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionNew = new QAction(MainInterface);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionLoad = new QAction(MainInterface);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        centralwidget = new QWidget(MainInterface);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Tabs = new QTabWidget(centralwidget);
        Tabs->setObjectName(QStringLiteral("Tabs"));
        Canvas = new QWidget();
        Canvas->setObjectName(QStringLiteral("Canvas"));
        sizePolicy.setHeightForWidth(Canvas->sizePolicy().hasHeightForWidth());
        Canvas->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(Canvas);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(25);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 100, -1);
        CanvasInfoSplitter = new QSplitter(Canvas);
        CanvasInfoSplitter->setObjectName(QStringLiteral("CanvasInfoSplitter"));
        CanvasInfoSplitter->setOrientation(Qt::Vertical);
        InputSplitter = new QSplitter(CanvasInfoSplitter);
        InputSplitter->setObjectName(QStringLiteral("InputSplitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(InputSplitter->sizePolicy().hasHeightForWidth());
        InputSplitter->setSizePolicy(sizePolicy1);
        InputSplitter->setMaximumSize(QSize(16777215, 16777215));
        InputSplitter->setOrientation(Qt::Horizontal);
        InputSplitter->setOpaqueResize(false);
        InputSplitter->setChildrenCollapsible(false);
        layoutWidget_2 = new QWidget(InputSplitter);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        LabelLayout = new QVBoxLayout(layoutWidget_2);
        LabelLayout->setSpacing(0);
        LabelLayout->setObjectName(QStringLiteral("LabelLayout"));
        LabelLayout->setContentsMargins(0, 30, 0, 30);
        ShapeTypeLabel = new QLabel(layoutWidget_2);
        ShapeTypeLabel->setObjectName(QStringLiteral("ShapeTypeLabel"));
        sizePolicy1.setHeightForWidth(ShapeTypeLabel->sizePolicy().hasHeightForWidth());
        ShapeTypeLabel->setSizePolicy(sizePolicy1);

        LabelLayout->addWidget(ShapeTypeLabel);

        shapeIdLabel = new QLabel(layoutWidget_2);
        shapeIdLabel->setObjectName(QStringLiteral("shapeIdLabel"));
        sizePolicy1.setHeightForWidth(shapeIdLabel->sizePolicy().hasHeightForWidth());
        shapeIdLabel->setSizePolicy(sizePolicy1);
        shapeIdLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LabelLayout->addWidget(shapeIdLabel);

        penColorLabel = new QLabel(layoutWidget_2);
        penColorLabel->setObjectName(QStringLiteral("penColorLabel"));
        sizePolicy1.setHeightForWidth(penColorLabel->sizePolicy().hasHeightForWidth());
        penColorLabel->setSizePolicy(sizePolicy1);
        penColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LabelLayout->addWidget(penColorLabel);

        penWidthLabel = new QLabel(layoutWidget_2);
        penWidthLabel->setObjectName(QStringLiteral("penWidthLabel"));
        sizePolicy1.setHeightForWidth(penWidthLabel->sizePolicy().hasHeightForWidth());
        penWidthLabel->setSizePolicy(sizePolicy1);
        penWidthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LabelLayout->addWidget(penWidthLabel);

        penStyleLabel = new QLabel(layoutWidget_2);
        penStyleLabel->setObjectName(QStringLiteral("penStyleLabel"));
        sizePolicy1.setHeightForWidth(penStyleLabel->sizePolicy().hasHeightForWidth());
        penStyleLabel->setSizePolicy(sizePolicy1);
        penStyleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LabelLayout->addWidget(penStyleLabel);

        penCapStyleLabel = new QLabel(layoutWidget_2);
        penCapStyleLabel->setObjectName(QStringLiteral("penCapStyleLabel"));
        sizePolicy1.setHeightForWidth(penCapStyleLabel->sizePolicy().hasHeightForWidth());
        penCapStyleLabel->setSizePolicy(sizePolicy1);
        penCapStyleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LabelLayout->addWidget(penCapStyleLabel);

        PenJoinLabel = new QLabel(layoutWidget_2);
        PenJoinLabel->setObjectName(QStringLiteral("PenJoinLabel"));
        sizePolicy1.setHeightForWidth(PenJoinLabel->sizePolicy().hasHeightForWidth());
        PenJoinLabel->setSizePolicy(sizePolicy1);
        PenJoinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LabelLayout->addWidget(PenJoinLabel);

        BrushColorLabel = new QLabel(layoutWidget_2);
        BrushColorLabel->setObjectName(QStringLiteral("BrushColorLabel"));
        sizePolicy1.setHeightForWidth(BrushColorLabel->sizePolicy().hasHeightForWidth());
        BrushColorLabel->setSizePolicy(sizePolicy1);
        BrushColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LabelLayout->addWidget(BrushColorLabel);

        brushStyleLabel = new QLabel(layoutWidget_2);
        brushStyleLabel->setObjectName(QStringLiteral("brushStyleLabel"));
        sizePolicy1.setHeightForWidth(brushStyleLabel->sizePolicy().hasHeightForWidth());
        brushStyleLabel->setSizePolicy(sizePolicy1);
        brushStyleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LabelLayout->addWidget(brushStyleLabel);

        InputSplitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(InputSplitter);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        InputLayout = new QVBoxLayout(layoutWidget_3);
        InputLayout->setSpacing(0);
        InputLayout->setObjectName(QStringLiteral("InputLayout"));
        InputLayout->setContentsMargins(0, 30, 0, 30);
        ShapeTypeEdit = new QComboBox(layoutWidget_3);
        ShapeTypeEdit->setObjectName(QStringLiteral("ShapeTypeEdit"));

        InputLayout->addWidget(ShapeTypeEdit);

        shapeIdEdit = new QLineEdit(layoutWidget_3);
        shapeIdEdit->setObjectName(QStringLiteral("shapeIdEdit"));
        sizePolicy1.setHeightForWidth(shapeIdEdit->sizePolicy().hasHeightForWidth());
        shapeIdEdit->setSizePolicy(sizePolicy1);
        shapeIdEdit->setLayoutDirection(Qt::LeftToRight);
        shapeIdEdit->setMaxLength(3);
        shapeIdEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        InputLayout->addWidget(shapeIdEdit);

        penColorEdit = new QComboBox(layoutWidget_3);
        penColorEdit->setObjectName(QStringLiteral("penColorEdit"));
        sizePolicy1.setHeightForWidth(penColorEdit->sizePolicy().hasHeightForWidth());
        penColorEdit->setSizePolicy(sizePolicy1);

        InputLayout->addWidget(penColorEdit);

        penWidthEdit = new QSlider(layoutWidget_3);
        penWidthEdit->setObjectName(QStringLiteral("penWidthEdit"));
        sizePolicy1.setHeightForWidth(penWidthEdit->sizePolicy().hasHeightForWidth());
        penWidthEdit->setSizePolicy(sizePolicy1);
        penWidthEdit->setMinimumSize(QSize(81, 21));
        penWidthEdit->setMinimum(0);
        penWidthEdit->setMaximum(20);
        penWidthEdit->setOrientation(Qt::Horizontal);
        penWidthEdit->setInvertedAppearance(false);
        penWidthEdit->setInvertedControls(false);
        penWidthEdit->setTickPosition(QSlider::TicksBelow);
        penWidthEdit->setTickInterval(5);

        InputLayout->addWidget(penWidthEdit);

        penStyleEdit = new QComboBox(layoutWidget_3);
        penStyleEdit->setObjectName(QStringLiteral("penStyleEdit"));
        sizePolicy1.setHeightForWidth(penStyleEdit->sizePolicy().hasHeightForWidth());
        penStyleEdit->setSizePolicy(sizePolicy1);

        InputLayout->addWidget(penStyleEdit);

        PenCapEdit = new QComboBox(layoutWidget_3);
        PenCapEdit->setObjectName(QStringLiteral("PenCapEdit"));
        sizePolicy1.setHeightForWidth(PenCapEdit->sizePolicy().hasHeightForWidth());
        PenCapEdit->setSizePolicy(sizePolicy1);

        InputLayout->addWidget(PenCapEdit);

        PenJoinEdit = new QComboBox(layoutWidget_3);
        PenJoinEdit->setObjectName(QStringLiteral("PenJoinEdit"));
        sizePolicy1.setHeightForWidth(PenJoinEdit->sizePolicy().hasHeightForWidth());
        PenJoinEdit->setSizePolicy(sizePolicy1);

        InputLayout->addWidget(PenJoinEdit);

        brushColorEdit = new QComboBox(layoutWidget_3);
        brushColorEdit->setObjectName(QStringLiteral("brushColorEdit"));
        sizePolicy1.setHeightForWidth(brushColorEdit->sizePolicy().hasHeightForWidth());
        brushColorEdit->setSizePolicy(sizePolicy1);

        InputLayout->addWidget(brushColorEdit);

        brushStyleEdit = new QComboBox(layoutWidget_3);
        brushStyleEdit->setObjectName(QStringLiteral("brushStyleEdit"));
        sizePolicy1.setHeightForWidth(brushStyleEdit->sizePolicy().hasHeightForWidth());
        brushStyleEdit->setSizePolicy(sizePolicy1);

        InputLayout->addWidget(brushStyleEdit);

        InputSplitter->addWidget(layoutWidget_3);
        CanvasInfoSplitter->addWidget(InputSplitter);
        layerTable = new QTableWidget(CanvasInfoSplitter);
        if (layerTable->columnCount() < 2)
            layerTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        layerTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        layerTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        layerTable->setObjectName(QStringLiteral("layerTable"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(layerTable->sizePolicy().hasHeightForWidth());
        layerTable->setSizePolicy(sizePolicy2);
        layerTable->setMinimumSize(QSize(202, 300));
        layerTable->setMaximumSize(QSize(202, 500));
        layerTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        layerTable->setAutoScrollMargin(16);
        layerTable->setColumnCount(2);
        CanvasInfoSplitter->addWidget(layerTable);
        layoutWidget_4 = new QWidget(CanvasInfoSplitter);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        Adddelete_3 = new QHBoxLayout(layoutWidget_4);
        Adddelete_3->setObjectName(QStringLiteral("Adddelete_3"));
        Adddelete_3->setContentsMargins(0, 0, 0, 0);
        AddObject_4 = new QPushButton(layoutWidget_4);
        AddObject_4->setObjectName(QStringLiteral("AddObject_4"));

        Adddelete_3->addWidget(AddObject_4);

        DeleteObj = new QPushButton(layoutWidget_4);
        DeleteObj->setObjectName(QStringLiteral("DeleteObj"));

        Adddelete_3->addWidget(DeleteObj);

        CanvasInfoSplitter->addWidget(layoutWidget_4);

        horizontalLayout->addWidget(CanvasInfoSplitter);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        Tabs->addTab(Canvas, QString());
        Table = new QWidget();
        Table->setObjectName(QStringLiteral("Table"));
        tableWidget = new QTableWidget(Table);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem12);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 1101, 581));
        button_SortID = new QPushButton(Table);
        button_SortID->setObjectName(QStringLiteral("button_SortID"));
        button_SortID->setGeometry(QRect(1120, 70, 71, 21));
        button_SortArea = new QPushButton(Table);
        button_SortArea->setObjectName(QStringLiteral("button_SortArea"));
        button_SortArea->setGeometry(QRect(1120, 100, 80, 21));
        button_SortPerimeter = new QPushButton(Table);
        button_SortPerimeter->setObjectName(QStringLiteral("button_SortPerimeter"));
        button_SortPerimeter->setGeometry(QRect(1120, 130, 101, 21));
        Tabs->addTab(Table, QString());

        gridLayout->addWidget(Tabs, 0, 0, 1, 1);

        MainInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainInterface);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(MainInterface);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainInterface->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionTBD);
        menuAbout->addAction(actionMaintenance_Notes);
        menuAbout->addAction(actionTestimonials);
        menuAbout->addAction(actionContact_Us);

        retranslateUi(MainInterface);

        Tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainInterface);
    } // setupUi

    void retranslateUi(QMainWindow *MainInterface)
    {
        MainInterface->setWindowTitle(QApplication::translate("MainInterface", "MainWindow", Q_NULLPTR));
        actionMaintenance_Notes->setText(QApplication::translate("MainInterface", "Maintenance Notes", Q_NULLPTR));
        actionTestimonials->setText(QApplication::translate("MainInterface", "Testimonials", Q_NULLPTR));
        actionContact_Us->setText(QApplication::translate("MainInterface", "Contact Us", Q_NULLPTR));
        actionTBD->setText(QApplication::translate("MainInterface", "TBD", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainInterface", "Save            (Ctrl + S)", Q_NULLPTR));
        actionSave->setShortcut(QApplication::translate("MainInterface", "Ctrl+S", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("MainInterface", "Save As...", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainInterface", "Open", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainInterface", "Exit               (Esc)", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainInterface", "New", Q_NULLPTR));
        actionLoad->setText(QApplication::translate("MainInterface", "Load", Q_NULLPTR));
        ShapeTypeLabel->setText(QApplication::translate("MainInterface", "TextLabel", Q_NULLPTR));
        shapeIdLabel->setText(QApplication::translate("MainInterface", "Shape ID:", Q_NULLPTR));
        penColorLabel->setText(QApplication::translate("MainInterface", "Pen Color:", Q_NULLPTR));
        penWidthLabel->setText(QApplication::translate("MainInterface", "Pen Width", Q_NULLPTR));
        penStyleLabel->setText(QApplication::translate("MainInterface", "Pen Style:", Q_NULLPTR));
        penCapStyleLabel->setText(QApplication::translate("MainInterface", "Pen Cap Style:", Q_NULLPTR));
        PenJoinLabel->setText(QApplication::translate("MainInterface", "Pen Join Style:", Q_NULLPTR));
        BrushColorLabel->setText(QApplication::translate("MainInterface", "Brush Color:", Q_NULLPTR));
        brushStyleLabel->setText(QApplication::translate("MainInterface", "Brush Style:", Q_NULLPTR));
        ShapeTypeEdit->clear();
        ShapeTypeEdit->insertItems(0, QStringList()
         << QApplication::translate("MainInterface", "Line", Q_NULLPTR)
         << QApplication::translate("MainInterface", "PolyLine", Q_NULLPTR)
         << QApplication::translate("MainInterface", "PolyGon", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Circle", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Ellipse", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Square", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Rectangle", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Text", Q_NULLPTR)
        );
        shapeIdEdit->setText(QString());
        penColorEdit->clear();
        penColorEdit->insertItems(0, QStringList()
         << QApplication::translate("MainInterface", "Black", Q_NULLPTR)
         << QApplication::translate("MainInterface", "White", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Gray", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Red", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Blue", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Green", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Yellow", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Cyan", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Magenta", Q_NULLPTR)
        );
        penStyleEdit->clear();
        penStyleEdit->insertItems(0, QStringList()
         << QApplication::translate("MainInterface", "No Pen", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Solid", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Dashed", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Dotted", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Dash-Dotted", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Dash-Dot-Dotted", Q_NULLPTR)
        );
        PenCapEdit->clear();
        PenCapEdit->insertItems(0, QStringList()
         << QApplication::translate("MainInterface", "Flat", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Square", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Round", Q_NULLPTR)
        );
        PenJoinEdit->clear();
        PenJoinEdit->insertItems(0, QStringList()
         << QApplication::translate("MainInterface", "Miter", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Bevel", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Round", Q_NULLPTR)
        );
        brushColorEdit->clear();
        brushColorEdit->insertItems(0, QStringList()
         << QApplication::translate("MainInterface", "Black", Q_NULLPTR)
         << QApplication::translate("MainInterface", "White", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Gray", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Red", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Green", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Blue", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Yellow", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Cyan", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Magenta", Q_NULLPTR)
        );
        brushStyleEdit->clear();
        brushStyleEdit->insertItems(0, QStringList()
         << QApplication::translate("MainInterface", "No Brush", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Solid", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Horizontal", Q_NULLPTR)
         << QApplication::translate("MainInterface", "Vertical", Q_NULLPTR)
        );
        QTableWidgetItem *___qtablewidgetitem = layerTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainInterface", "Visability", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = layerTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainInterface", "ID", Q_NULLPTR));
        AddObject_4->setText(QApplication::translate("MainInterface", "Add", Q_NULLPTR));
        DeleteObj->setText(QApplication::translate("MainInterface", "Delete", Q_NULLPTR));
        Tabs->setTabText(Tabs->indexOf(Canvas), QApplication::translate("MainInterface", "Canvas", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainInterface", "Shape ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainInterface", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainInterface", "Area", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainInterface", "Perimeter", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainInterface", "Pen Color", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("MainInterface", "Pen Width", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("MainInterface", "Pen Style", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("MainInterface", "Pen Cap Style", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("MainInterface", "Pen Join Style", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("MainInterface", "Brush Color", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem12->setText(QApplication::translate("MainInterface", "Brush Style", Q_NULLPTR));
        button_SortID->setText(QApplication::translate("MainInterface", "Sort by ID", Q_NULLPTR));
        button_SortArea->setText(QApplication::translate("MainInterface", "Sort by Area", Q_NULLPTR));
        button_SortPerimeter->setText(QApplication::translate("MainInterface", "Sort by Perimeter", Q_NULLPTR));
        Tabs->setTabText(Tabs->indexOf(Table), QApplication::translate("MainInterface", "Table", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainInterface", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainInterface", "Edit", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainInterface", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainInterface: public Ui_MainInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAININTERFACE_H
