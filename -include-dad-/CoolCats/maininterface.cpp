#include "maininterface.h"
#include "ui_maininterface.h"
#include "Line.h"
#include "PolyLine.h"
#include <QDebug>
MainInterface::MainInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainInterface)
{
    ui->setupUi(this);
    ui->penWidthEdit->setMinimum(0);
    ui->penWidthEdit->setMaximum(125);
    ui->penWidthEdit->setSliderPosition(15);
    connect(ui->actionSave,SIGNAL(triggered(bool)),this, SLOT(saveFile()));
    canvas = new Canvas();
    connect(canvas,SIGNAL(isClicked()), this,SLOT(upDateCurrentShape())) ;
    connect(this,SIGNAL(PointInput()),canvas,SLOT(mousePointInput()));
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


void MainInterface::on_ShapeTypeEdit_currentIndexChanged(int index)
{

    switch(index)
    {
    case 0:
        //Line
        Line *l = new Line();
        canvas->setCurrentShape(l);
        canvas->addShape(l);
        emit PointInput();
        break;
    case 1:
        PolyLine *l = new PolyLine();
        canvas->setCurrentShape(l);
        emit PointInput();
        break;
    case 2:
        //PolyGon
        break;
    case 3:
        //Circle
        break;
    case 4:
        //Ellipse
        break;
    case 5:
        //Square
        break;
    case 6:
        //Rectangle
        break;
    case 7:
        //Text
        break;
    }
}
