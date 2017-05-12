#include "maininterface.h"
#include "ui_maininterface.h"
#include "Circle.h"
#include <QDebug>
MainInterface::MainInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainInterface)
{
    ui->setupUi(this);
    connect(ui->actionSave,SIGNAL(triggered(bool)),this, SLOT(saveFile()));
    canvas = new Canvas();
    Circle *demo = new Circle();
    canvas->addShape(demo);
    //newCanvas(1000,500);

    ui->horizontalLayout->addWidget(canvas,0,Qt::AlignRight);
}


void MainInterface::newCanvas(int x = 1000, int y=500)
{
    canvas->setMinimumHeight(y);
    canvas->setMinimumWidth(x);
    canvas->setMaximumHeight(y);
    canvas->setMaximumWidth(x);

}
void MainInterface::loadCanvas(QString filename)
{

}

MainInterface::~MainInterface()
{
    delete ui;
}

void MainInterface::saveFile()
{
    if(CurrentFileName!=nullptr)
    {
        //execute an "update" save - (Save to an exisiting file)
        //Remember QFileDialog
    }
    else
    {
        //Execute a Save As function that prompts for a file name.
    }
}
