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
    connect(ui->actionMaintenance_Notes, SIGNAL(triggered(bool)), this, SLOT(MaintenanceNotesClicked()));
    connect(ui->actionTestimonials, SIGNAL(triggered(bool)), this, SLOT(TestimonialsClicked()));
    connect(ui->actionContact_Us, SIGNAL(triggered(bool)), this, SLOT(ContactClicked()));
    connect(ui->actionExit, SIGNAL(triggered(bool)), this, SLOT(Exit()));
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

QString MainInterface::GetShapeType()
{
    if(canvas->getCurrentShape()!=nullptr)
    {
       if(Circle* c= dynamic_cast<Circle*>(canvas->getCurrentShape()))
       {
           return "Circle";
       }
       else if(Ellipse* e = dynamic_cast<Ellipse*>(canvas->getCurrentShape()))
       {
           return "Ellipse";
       }
       else if(Square* s = dynamic_cast<Square*>(canvas->getCurrentShape()))
       {
           return "Square";
       }
       else if(Rectangle* r = dynamic_cast<Rectangle*>(canvas->getCurrentShape()))
       {
           return "Rectangle";
       }
    // else if(Line* l = dynamic_cast<Line*>(canvas->getCurrentShape()))
    // {
    //     return "Line";
    // }
    // else if(PolyLine* pl = dynamic_cast<PolyLine*>(canvas->getCurrentShape()))
    // {
    //     return "PolyLine";
    // }
    // else if(Polygon* pg = dynamic_cast<PolyGon*>(canvas->getCurrentShape()))
    // {
    //     return "Polygon";
    // }
    // else if(Text* t = dynamic_cast<Text*>(canvas->getCurrentShape()))
    // {
    //     return "Text";
    // }
    }
}

QString MainInterface::GetShapePerimeterArea(bool choice)
{
    if(canvas->getCurrentShape()!=nullptr)
    {
        if(Circle* c= dynamic_cast<Circle*>(canvas->getCurrentShape()))
        {
            if (choice == AREA)
            {
                return QString::number(c->getArea());
            }
            else if (choice == PERIMETER)
            {
                return QString::number(c->getPerimeter());
            }
        }
        else if(Ellipse* e = dynamic_cast<Ellipse*>(canvas->getCurrentShape()))
        {
            if (choice == AREA)
            {
                return QString::number(e->getArea());
            }
            else if (choice == PERIMETER)
            {
                return QString::number(e->getPerimeter());
            }
        }
        else if(Square* s = dynamic_cast<Square*>(canvas->getCurrentShape()))
        {
            if (choice == AREA)
            {
                return QString::number(s->getArea());
            }
            else if (choice == PERIMETER)
            {
                return QString::number(s->getPerimeter());
            }
        }
        else if(Rectangle* r = dynamic_cast<Rectangle*>(canvas->getCurrentShape()))
        {
            if (choice == AREA)
            {
                return QString::number(r->getArea());
            }
            else if (choice == PERIMETER)
            {
                return QString::number(r->getPerimeter());
            }
        }
//        else if(Polygon* pg = dynamic_cast<PolyGon*>(canvas->getCurrentShape()))
//        {
//            if (choice == AREA)
//            {
//                return QString::number(pg->getArea());
//            }
//            else if (choice == PERIMETER)
//            {
//                return QString::number(pg->getPerimeter());
//            }
//        }
        else
        {
            return "";
        }
    }
}

bool MainInterface::HasPerimeterArea(const Shape& shape)
{
    bool valid = true;
//    if(Line* l = dynamic_cast<Line*>(shape))
//    {
//        valid = false;
//    }
//    else if(PolyLine* pl = dynamic_cast<PolyLine*>(shape))
//    {
//        valid = false;
//    }
//    else if(Text* t = dynamic_cast<Text*>(shape))
//    {
//        valid = false;
//    }
    return valid;
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
    // else if(Polygon* pg = dynamic_cast<PolyGon*>(canvas->getCurrentShape()))
    // {

    // }
    // else if(Text* t = dynamic_cast<Text*>(canvas->getCurrentShape()))
    // {

    // }
    }
}
void MainInterface::Exit()
{
    this->close();
}

void MainInterface::on_ShapeTypeEdit_currentIndexChanged(int index)
{

//    switch(index)
//    {
//    case 0:
//        //Line
//        Line *l = new Line();
//        canvas->setCurrentShape(l);
//        canvas->addShape(l);
//        emit PointInput();
//        break;
//    case 1:
//        PolyLine *l = new PolyLine();
//        canvas->setCurrentShape(l);
//        emit PointInput();
//        break;
//    case 2:
//        //PolyGon
//        break;
//    case 3:
//        //Circle
//        break;
//    case 4:
//        //Ellipse
//        break;
//    case 5:
//        //Square
//        break;
//    case 6:
//        //Rectangle
//        break;
//    case 7:
//        //Text
//        break;
//    }
}

void MainInterface::MaintenanceNotesClicked()
{
    maintenanceWindow.show();
}

void MainInterface::TestimonialsClicked()
{
    testimonialsWindow.show();
}

void MainInterface::ContactClicked()
{
    contactWindow.show();
}
/*
void MainInterface::OutputToTable()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(SHAPE_TABLE_COL_SIZE);
    for (int row = 0; row < canvas->getShapeNum(); row++)
    {
        ui->tableWidget->insertRow(row);
        for (int col = 0; col < SHAPE_TABLE_COL_SIZE; col++)
        {
            switch(col)
            {
                         // Creates and outputs QTableWidgetItem Shape ID
                case 0 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         canvas[row]->GetID()));
                    break;
                         // Creates and outputs QTableWidgetItem Type
                case 1 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         GetShapeType()));
                    break;
                        // Creates and outputs QTableWidgetItem Area
                case 2 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         GetShapePerimeterArea(AREA)));
                   break;
                         // Creates and outputs QTableWidgetItem Perimeter
                case 3 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         GetShapePerimeterArea(PERIMETER)));
                    break;
                         // Creates and outputs QTableWidgetItem Pen Color
                case 4 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         canvas[row]->GetPenColor()));
                    break;
                         // Creates and outputs QTableWidgetItem Pen Width
                case 5 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         canvas[row]->GetPenWidth()));
                    break;
                         // Creates and outputs QTableWidgetItem Pen Style
                case 6 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         canvas[row]->GetPenStyle()));
                    break;
                         // Creates and outputs QTableWidgetItem Pen Cap Style
                case 7 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         canvas[row]->GetPenCapStyle()));
                    break;
                         // Creates and outputs QTableWidgetItem Pen Join Style
                case 8 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         canvas[row]->GetPenJoinStyle()));
                    break;
                         // Creates and outputs QTableWidgetItem Brush Color
                case 9 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         canvas[row]->GetBrushColor()));
                    break;
                         // Creates and outputs QTableWidgetItem Brush Style
                case 10 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                          canvas[row]->GetBrushStyle()));
                    break;
            }
        }
    }
}
*/

void MainInterface::on_button_SortID_clicked()
{
    // Sort by ID
    /*
    for(int x=0; x<canvas->getShapeNum(); x++)
    {
        for(int y=0; y<canvas->getShapeNum()-1; y++)
        {
            if(Canvas[y]->GetID() > Canvas[y+1]->GetID())
            {
                Shape* temp = Canvas[y+1];
                Canvas[y+1] = Canvas[y];
                Canvas[y] = temp;
            }
        }
    }
    */
    //OutputToTable();
}

void MainInterface::on_button_SortArea_clicked()
{
    bool valid = false;
    // Sort by Area
    /*
    for(int x=0; x<canvas->getShapeNum(); x++)
    {
        for(int y=0; y<canvas->getShapeNum()-1; y++)
        {
            if (HasPerimeterArea(Canvas[y]) == true && HasPerimeterArea(Canvas[y+1]) == true)
            {
                if(Canvas[y]->getArea() > Canvas[y+1]->getArea())
                {
                    Shape* temp = Canvas[y+1];
                    Canvas[y+1] = Canvas[y];
                    Canvas[y] = temp;
                }
            }
            else if (HasPerimeterArea(Canvas[y]) == true && HasPerimeterArea(Canvas[y+1]) == false)
            {
                int i = y+1;
                while(valid == false && i < canvas->getShapeNum()-1)
                {
                    i++;
                    if (HasPerimeterArea(Canvas[i]) == true)
                    {
                        valid = true;
                    }
                }
                if (valid == true)
                {
                    if(Canvas[y]->getArea() > Canvas[y+1]->getArea())
                    {
                        Shape* temp = Canvas[i];
                        Canvas[i] = Canvas[y];
                        Canvas[y] = temp;
                    }
                }
            }
        }
    }
    */
    //OutputToTable();
}

void MainInterface::on_button_SortPerimeter_clicked()
{
    bool valid = false;
    // Sort by Perimeter
    /*
    for(int x=0; x<canvas->getShapeNum(); x++)
    {
        for(int y=0; y<canvas->getShapeNum()-1; y++)
        {
            if (HasPerimeterArea(Canvas[y]) == true && HasPerimeterArea(Canvas[y+1]) == true)
            {
                if(Canvas[y]->getPerimeter() > Canvas[y+1]->getPerimeter())
                {
                    Shape* temp = Canvas[y+1];
                    Canvas[y+1] = Canvas[y];
                    Canvas[y] = temp;
                }
            }
            else if (HasPerimeterArea(Canvas[y]) == true && HasPerimeterArea(Canvas[y+1]) == false)
            {
                int i = y+1;
                while(valid == false && i < canvas->getShapeNum()-1)
                {
                    i++;
                    if (HasPerimeterArea(Canvas[i]) == true)
                    {
                        valid = true;
                    }
                }
                if (valid == true)
                {
                    if(Canvas[y]->getPerimeter() > Canvas[y+1]->getPerimeter())
                    {
                        Shape* temp = Canvas[i];
                        Canvas[i] = Canvas[y];
                        Canvas[y] = temp;
                    }
                }
            }
        }
    }
    */
    //OutputToTable();
}
