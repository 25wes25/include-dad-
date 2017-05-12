#include "maininterface.h"
#include "ui_maininterface.h"

#include <QDebug>
MainInterface::MainInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainInterface)
{
    ui->setupUi(this);
    connect(ui->actionSave,SIGNAL(triggered(bool)),this, SLOT(saveFile()));
    canvas = new Canvas();
    connect(canvas,SIGNAL(isClicked()), this,SLOT(upDateCurrentShape())) ;
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
/*
 * THIS IS THE SLOT THAT WILL ACTIVATE THE DYNAMIC MENU SYSTEM.
 * NOT YET INTEGRATED WITH ALEX'S LOGIN VERIFICATION
 */
void MainInterface::upDateCurrentShape()
{
    qDebug() << "Updating the shape";
    if(canvas->getCurrentShape()!=nullptr)
    {
       //this if statment is true if it can properly dynamic cast this pointer.
       //this if statement tree is very specific on it's ordering due to certain
       //heirarchies
       if(Circle* c= dynamic_cast<Circle*>(canvas->getCurrentShape()))
       {
           //output the info from the new circle object c to the
       }
       else if(Ellipse* e = dynamic_cast<Ellipse*>(canvas->getCurrentShape()))
       {
           //output and create edit comboboxex and sliders based off of the pointer e
       }
       else if(Square* s = dynamic_cast<Square*>(canvas->getCurrentShape()))
       {
           //output and create edit comboboxex and sliders based off of the pointer e
       }
       else if(Rectangle* r = dynamic_cast<Rectangle*>(canvas->getCurrentShape()))
       {
           //output and create edit comboboxex and sliders based off of the pointer e
       }
    // else if(Line* l = dynamic_cast<Line*>(canvas->getCurrentShape()))
    // {
    //     //output and create edit comboboxex and sliders based off of the pointer e
    // }
    // else if(PolyLine* pl = dynamic_cast<PolyLine*>(canvas->getCurrentShape()))
    // {
    //     //output and create edit comboboxex and sliders based off of the pointer e
    // }
    // else if(Polygon * pg = dynamic_cast<PolyGon*>(canvas->getCurrentShape()))
    // {

    // }
    // else if(Text* t = dynamic_cast<Text*>(canvas->getCurrentShape()))
    // {

    // }
    }
}
