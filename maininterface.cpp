#include "maininterface.h"
#include "ui_maininterface.h"
#include "PolyGon.h"
#include <QDebug>
#include <QSizePolicy>

const int IdRole = Qt::UserRole;

MainInterface::MainInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainInterface)
{
    ui->setupUi(this);
    //BEGIN MENU BAR SIGNAL AND SLOT CONNECTIONS
    connect(ui->actionMaintenance_Notes, SIGNAL(triggered(bool)), this, SLOT(MaintenanceNotesClicked()));
    connect(ui->actionTestimonials, SIGNAL(triggered(bool)), this, SLOT(TestimonialsClicked()));
    connect(ui->actionContact_Us, SIGNAL(triggered(bool)), this, SLOT(ContactClicked()));
    connect(ui->actionExit, SIGNAL(triggered(bool)), this, SLOT(Exit()));
	connect(ui->actionHelp, SIGNAL(triggered(bool)), this, SLOT(HelpClicked()));
    //END MENU BAR SIGNAL AND SLOT CONNECTIONS

    //INITIALIZE THE UI

    ui->penWidthEdit->setMinimum(0);
    ui->penWidthEdit->setMaximum(125);
    ui->penWidthEdit->setSliderPosition(15);
    //Begin - Associate combo box indicies with Qt enums
    //PEN COLOR ENUMS
    ui->penColorEdit->addItem(tr("White"),static_cast<int>(Qt::white));
    ui->penColorEdit->addItem(tr("Black"),static_cast<int>(Qt::black));
    ui->penColorEdit->addItem(tr("red"),static_cast<int>(Qt::red));
    ui->penColorEdit->addItem(tr("green"),static_cast<int>(Qt::green));
    ui->penColorEdit->addItem(tr("blue"),static_cast<int>(Qt::blue));
    ui->penColorEdit->addItem(tr("Cyan"),static_cast<int>(Qt::cyan));
    ui->penColorEdit->addItem(tr("Magenta"),static_cast<int>(Qt::magenta));
    ui->penColorEdit->addItem(tr("Yellow"),static_cast<int>(Qt::yellow));
    ui->penColorEdit->addItem(tr("gray"),static_cast<int>(Qt::gray));
    //PEN STYLE ENUMS
    ui->penStyleEdit->addItem(tr("No Pen"),static_cast<int>(Qt::NoPen));
    ui->penStyleEdit->addItem(tr("Solid Line"),static_cast<int>(Qt::SolidLine));
    ui->penStyleEdit->addItem(tr("Dashed Line"),static_cast<int>(Qt::DashLine));
    ui->penStyleEdit->addItem(tr("Dash Dot Line"),static_cast<int>(Qt::DashDotLine));
    ui->penStyleEdit->addItem(tr("Dash Dot Dot Line"),static_cast<int>(Qt::DashDotDotLine));

    //PEN CAP STYLE ENUMS
    ui->PenCapEdit->addItem(tr("Flat Cap"), static_cast<int>(Qt::FlatCap));
    ui->PenCapEdit->addItem(tr("Square Cap"), static_cast<int>(Qt::SquareCap));
    ui->PenCapEdit->addItem(tr("Round Cap"), static_cast<int>(Qt::RoundCap));

    //PEN JOIN STYLE ENUMS
    ui->PenJoinEdit->addItem(tr("Miter Join"),static_cast<int>(Qt::MiterJoin));
    ui->PenJoinEdit->addItem(tr("Bevel Join"),static_cast<int>(Qt::BevelJoin));
    ui->PenJoinEdit->addItem(tr("RoundJoin "),static_cast<int>(Qt::RoundJoin));
    //BRUSH COLOR ENUMS
    ui->brushColorEdit->addItem(tr("White"),static_cast<int>(Qt::white));
    ui->brushColorEdit->addItem(tr("Black"),static_cast<int>(Qt::black));
    ui->brushColorEdit->addItem(tr("red"),static_cast<int>(Qt::red));
    ui->brushColorEdit->addItem(tr("green"),static_cast<int>(Qt::green));
    ui->brushColorEdit->addItem(tr("blue"),static_cast<int>(Qt::blue));
    ui->brushColorEdit->addItem(tr("Cyan"),static_cast<int>(Qt::cyan));
    ui->brushColorEdit->addItem(tr("Magenta"),static_cast<int>(Qt::magenta));
    ui->brushColorEdit->addItem(tr("Yellow"),static_cast<int>(Qt::yellow));
    ui->brushColorEdit->addItem(tr("gray"),static_cast<int>(Qt::gray));

    //BRUSH STYLE ENUMS
    ui->brushStyleEdit->addItem(tr("Solid"),static_cast<int>(Qt::SolidPattern));
    ui->brushStyleEdit->addItem(tr("Horizontal"),static_cast<int>(Qt::HorPattern));
    ui->brushStyleEdit->addItem(tr("Vertical"),static_cast<int>(Qt::VerPattern));
    ui->brushStyleEdit->addItem(tr("No Brush"),static_cast<int>(Qt::NoBrush));
    //end - Associate combo box indicies with QT enums



    //INITIALIZE DYNAMIC LABELS
    tempLabel1 = new QLabel();
    tempLabel2 = new QLabel();
    horizontalSlider = new QSlider();
    verticalSlider = new QSlider();

    horizontalSlider->setMinimum(0);
    horizontalSlider->setMaximum(500);
    horizontalSlider->setSliderPosition(100);
    verticalSlider->setMinimum(0);
    verticalSlider->setMaximum(500);
    verticalSlider->setSliderPosition(100);
    tempLabel1->setSizePolicy(QSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed));
    tempLabel2->setSizePolicy(QSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed));

    //INITIALIZE THE DRAWING CANVAS
    canvas = new Canvas();
    connect(ui->actionSave,SIGNAL(triggered(bool)),this, SLOT(saveFile()));    
    connect(canvas,SIGNAL(isClicked()), this,SLOT(upDateCurrentShape())) ;
    connect(this,SIGNAL(PointInput()),canvas,SLOT(mousePointInput()));

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
       else if(Line* l = dynamic_cast<Line*>(canvas->getCurrentShape()))
       {
           return "Line";
       }
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
       ui->AddObject->setText("Commit Edits");
       //this if statment is true if it can properly dynamic cast this pointer.
       //this if statement tree is very specific on it's ordering due to certain
       //heirarchies

       if(Circle* c= dynamic_cast<Circle*>(canvas->getCurrentShape()))
       {
            CircleUISet();
       }
       else if(Ellipse* e = dynamic_cast<Ellipse*>(canvas->getCurrentShape()))
       {
            EllipseUISet();
       }
       else if(Square* s = dynamic_cast<Square*>(canvas->getCurrentShape()))
       {
            SquareUISet();
       }
       else if(Rectangle* r = dynamic_cast<Rectangle*>(canvas->getCurrentShape()))
       {
            RectangleUISet();
       }
       else if(Line* l = dynamic_cast<Line*>(canvas->getCurrentShape()))
       {
            LineUISet();
       }
       else if(PolyLine* pl = dynamic_cast<PolyLine*>(canvas->getCurrentShape()))
       {
         //output and create edit comboboxex and sliders based off of the pointer e
       }
    // else if(Polygon* pg = dynamic_cast<PolyGon*>(canvas->getCurrentShape()))
    // {

    // }
    // else if(Text* t = dynamic_cast<Text*>(canvas->getCurrentShape()))
    // {

    // }
    }
    else
    {
        ui->AddObject->setText("Add Object");
    }
}
void MainInterface::Exit()
{
    this->close();
}
void MainInterface::CircleUISet()
{
    RefreshUI();
    //output the info from the new circle object c to the
    tempLabel1->setText("Axis Length:");
    ui->LabelLayout->addWidget(tempLabel1,0,Qt::AlignRight);
    ui->InputLayout->addWidget(horizontalSlider,0,Qt::AlignRight);
    ui->brushColorEdit->setEnabled(true);
    ui->brushStyleEdit->setEnabled(true);

}
void MainInterface::EllipseUISet()
{
    RefreshUI();
    tempLabel1->setText("Horizontal Axis Length:");
    tempLabel2->setText("Vertical Axis Length:");

    ui->LabelLayout->addWidget(tempLabel1,0,Qt::AlignRight);
    ui->LabelLayout->addWidget(tempLabel2,0,Qt::AlignRight);

    ui->InputLayout->addWidget(horizontalSlider,0,Qt::AlignRight);
    ui->InputLayout->addWidget(verticalSlider,0,Qt::AlignRight);
    ui->brushColorEdit->setEnabled(true);
    ui->brushStyleEdit->setEnabled(true);

}
void MainInterface::SquareUISet()
{
    RefreshUI();
    tempLabel1->setText("Length:");
    ui->LabelLayout->addWidget(tempLabel1,0,Qt::AlignRight);
    ui->InputLayout->addWidget(horizontalSlider,0,Qt::AlignRight);
    ui->brushColorEdit->setEnabled(true);
    ui->brushStyleEdit->setEnabled(true);
}
void MainInterface::RectangleUISet()
{
    RefreshUI();
    tempLabel1->setText("Length:");
    tempLabel2->setText("Width:");
    ui->LabelLayout->addWidget(tempLabel1,0,Qt::AlignRight);
    ui->LabelLayout->addWidget(tempLabel2,0,Qt::AlignRight);

    ui->InputLayout->addWidget(horizontalSlider,0,Qt::AlignRight);
    ui->InputLayout->addWidget(verticalSlider,0,Qt::AlignRight);


}
void MainInterface::LineUISet()
{
    RefreshUI();
    ui->brushColorEdit->setEnabled(false);
    ui->brushStyleEdit->setEnabled(false);
}


void MainInterface::PolyGonUISet()
{
    RefreshUI();
}
void MainInterface::RefreshUI()
{
    ui->brushColorEdit->setEnabled(true);
    ui->brushStyleEdit->setEnabled(true);
    ui->LabelLayout->removeWidget(tempLabel1);
    ui->LabelLayout->removeWidget(tempLabel2);
    ui->InputLayout->removeWidget(horizontalSlider);
    ui->InputLayout->removeWidget(verticalSlider);
    delete tempLabel1;
    delete tempLabel2;
    delete verticalSlider;
    delete horizontalSlider;
    tempLabel1 = new QLabel;
    tempLabel2 = new QLabel;
    horizontalSlider = new QSlider;
    verticalSlider = new QSlider;
    horizontalSlider->setMinimum(0);
    horizontalSlider->setMaximum(500);
    horizontalSlider->setSliderPosition(100);
    verticalSlider->setMinimum(0);
    verticalSlider->setMaximum(500);
    verticalSlider->setSliderPosition(100);
    tempLabel1->setSizePolicy(QSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed));
    tempLabel2->setSizePolicy(QSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed));
}

//void TextUISet();
//{
//    //nothing yet
//}
void MainInterface::on_ShapeTypeEdit_currentIndexChanged(int index)
{

    switch(index)
    {
    case 0:
    {
        LineUISet();
        break;
    }
    case 1:
    {
        LineUISet();
        break;
    }
    case 2:
        //PolyGon
        break;
    case 3:
    {
        CircleUISet();
        break;
    }
    case 4:
    {
        //Ellipse
        EllipseUISet();
        break;
    }
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
void MainInterface::HelpClicked()
{
    helpWindow.show();
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

void SortID()
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
}

void SortArea()
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
}

void SortPerimeter()
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
}

void MainInterface::on_button_SortID_clicked()
{
    //SortID();
    //OutputToTable();
}

void MainInterface::on_button_SortArea_clicked()
{
    //SortArea();
    //OutputToTable();
}

void MainInterface::on_button_SortPerimeter_clicked()
{
    //SortPerimeter();
    //OutputToTable();
}

void MainInterface::on_AddObject_clicked()
{
    //Get the current shape and it's relavant information
    if(canvas->getCurrentShape()!=nullptr)
    {
        //this if statment is true if it can properly dynamic cast this pointer.
        //this if statement tree is very specific on it's ordering due to certain
        //heirarchies

        if(Circle* c= dynamic_cast<Circle*>(canvas->getCurrentShape()))
        {
             CircleUISet();
        }
        else if(Ellipse* e = dynamic_cast<Ellipse*>(canvas->getCurrentShape()))
        {
             EllipseUISet();
        }
        else if(Square* s = dynamic_cast<Square*>(canvas->getCurrentShape()))
        {
             SquareUISet();
        }
        else if(Rectangle* r = dynamic_cast<Rectangle*>(canvas->getCurrentShape()))
        {
             RectangleUISet();
        }
        else if(Line* l = dynamic_cast<Line*>(canvas->getCurrentShape()))
        {
             LineUISet();
        }
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
    }//- End if
    //Else
    //you gather all of the currently set combo box options
    // and throw them into the relavant shape constructor and push.
    else
    {
        switch(ui->ShapeTypeEdit->currentIndex())
        {
        case 0:
        {
            //Line
            qDebug() << "Creating new line";
            LineUISet();
            Line *l = new Line(ui->shapeIdEdit->text(),
                               Qt::BrushStyle(ui->brushStyleEdit->itemData(ui->brushStyleEdit->currentIndex(),IdRole).toInt()),
                               Qt::GlobalColor(ui->brushColorEdit->itemData(ui->brushColorEdit->currentIndex(),IdRole).toInt()),
                               ui->penWidthEdit->value(),
                               Qt::GlobalColor(ui->penColorEdit->itemData(ui->penColorEdit->currentIndex(),IdRole).toInt()),
                               Qt::PenCapStyle(ui->PenCapEdit->itemData(ui->PenCapEdit->currentIndex(),IdRole).toInt()),
                               Qt::PenJoinStyle(ui->PenJoinEdit->itemData(ui->PenJoinEdit->currentIndex(),IdRole).toInt()),
                               Qt::PenStyle(ui->penStyleEdit->itemData(ui->penStyleEdit->currentIndex(),IdRole).toInt())
                               );
            canvas->setCurrentShape(l);
            canvas->addShape(l);
            emit PointInput();
            break;
        }
        case 1:
        {
            LineUISet();
            PolyLine *pl = new PolyLine(ui->shapeIdEdit->text(),
                                       Qt::BrushStyle(ui->brushStyleEdit->itemData(ui->brushStyleEdit->currentIndex(),IdRole).toInt()),
                                       Qt::GlobalColor(ui->brushColorEdit->itemData(ui->brushColorEdit->currentIndex(),IdRole).toInt()),
                                       ui->penWidthEdit->value(),
                                       Qt::GlobalColor(ui->penColorEdit->itemData(ui->penColorEdit->currentIndex(),IdRole).toInt()),
                                       Qt::PenCapStyle(ui->PenCapEdit->itemData(ui->PenCapEdit->currentIndex(),IdRole).toInt()),
                                       Qt::PenJoinStyle(ui->PenJoinEdit->itemData(ui->PenJoinEdit->currentIndex(),IdRole).toInt()),
                                       Qt::PenStyle(ui->penStyleEdit->itemData(ui->penStyleEdit->currentIndex(),IdRole).toInt())
                                       );

            canvas->setCurrentShape(pl);
            canvas->addShape(pl);
            emit PointInput();
            break;
        }
        case 2:
        {
            //PolyGon
            PolyGonUISet();
            Polygon *pg = new Polygon(ui->shapeIdEdit->text(),
                                       Qt::BrushStyle(ui->brushStyleEdit->itemData(ui->brushStyleEdit->currentIndex(),IdRole).toInt()),
                                       Qt::GlobalColor(ui->brushColorEdit->itemData(ui->brushColorEdit->currentIndex(),IdRole).toInt()),
                                       ui->penWidthEdit->value(),
                                       Qt::GlobalColor(ui->penColorEdit->itemData(ui->penColorEdit->currentIndex(),IdRole).toInt()),
                                       Qt::PenCapStyle(ui->PenCapEdit->itemData(ui->PenCapEdit->currentIndex(),IdRole).toInt()),
                                       Qt::PenJoinStyle(ui->PenJoinEdit->itemData(ui->PenJoinEdit->currentIndex(),IdRole).toInt()),
                                       Qt::PenStyle(ui->penStyleEdit->itemData(ui->penStyleEdit->currentIndex(),IdRole).toInt())
                                       );

            canvas->setCurrentShape(pg);
            canvas->addShape(pg);
            emit PointInput();
            break;
        }
        case 3:
        {
            //Circle
            CircleUISet();
            Circle *cc = new Circle(ui->shapeIdEdit->text(),
                                    Qt::BrushStyle(ui->brushStyleEdit->itemData(ui->brushStyleEdit->currentIndex(),IdRole).toInt()),
                                    Qt::GlobalColor(ui->brushColorEdit->itemData(ui->brushColorEdit->currentIndex(),IdRole).toInt()),
                                    ui->penWidthEdit->value(),
                                    Qt::GlobalColor(ui->penColorEdit->itemData(ui->penColorEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenCapStyle(ui->PenCapEdit->itemData(ui->PenCapEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenJoinStyle(ui->PenJoinEdit->itemData(ui->PenJoinEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenStyle(ui->penStyleEdit->itemData(ui->penStyleEdit->currentIndex(),IdRole).toInt()),
                                    horizontalSlider->value());
            canvas->setCurrentShape(cc);
            canvas->addShape(cc);
            break;
        }
        case 4:
        {
            //Ellipse
            EllipseUISet();
            Ellipse *ec = new Ellipse(ui->shapeIdEdit->text(),
                                    Qt::BrushStyle(ui->brushStyleEdit->itemData(ui->brushStyleEdit->currentIndex(),IdRole).toInt()),
                                    Qt::GlobalColor(ui->brushColorEdit->itemData(ui->brushColorEdit->currentIndex(),IdRole).toInt()),
                                    ui->penWidthEdit->value(),
                                    Qt::GlobalColor(ui->penColorEdit->itemData(ui->penColorEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenCapStyle(ui->PenCapEdit->itemData(ui->PenCapEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenJoinStyle(ui->PenJoinEdit->itemData(ui->PenJoinEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenStyle(ui->penStyleEdit->itemData(ui->penStyleEdit->currentIndex(),IdRole).toInt()),
                                    horizontalSlider->value(),verticalSlider->value());
            canvas->setCurrentShape(ec);
            canvas->addShape(ec);
            break;
        }
        case 5:
        {
            //Square
            SquareUISet();
            Square *sc = new Square(ui->shapeIdEdit->text(),
                                    Qt::BrushStyle(ui->brushStyleEdit->itemData(ui->brushStyleEdit->currentIndex(),IdRole).toInt()),
                                    Qt::GlobalColor(ui->brushColorEdit->itemData(ui->brushColorEdit->currentIndex(),IdRole).toInt()),
                                    ui->penWidthEdit->value(),
                                    Qt::GlobalColor(ui->penColorEdit->itemData(ui->penColorEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenCapStyle(ui->PenCapEdit->itemData(ui->PenCapEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenJoinStyle(ui->PenJoinEdit->itemData(ui->PenJoinEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenStyle(ui->penStyleEdit->itemData(ui->penStyleEdit->currentIndex(),IdRole).toInt()),
                                    horizontalSlider->value());
            canvas->setCurrentShape(sc);
            canvas->addShape(sc);
            break;
        }
        case 6:
        {
            //Rectangle
            RectangleUISet();
            Rectangle *rc = new Rectangle(ui->shapeIdEdit->text(),
                                    Qt::BrushStyle(ui->brushStyleEdit->itemData(ui->brushStyleEdit->currentIndex(),IdRole).toInt()),
                                    Qt::GlobalColor(ui->brushColorEdit->itemData(ui->brushColorEdit->currentIndex(),IdRole).toInt()),
                                    ui->penWidthEdit->value(),
                                    Qt::GlobalColor(ui->penColorEdit->itemData(ui->penColorEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenCapStyle(ui->PenCapEdit->itemData(ui->PenCapEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenJoinStyle(ui->PenJoinEdit->itemData(ui->PenJoinEdit->currentIndex(),IdRole).toInt()),
                                    Qt::PenStyle(ui->penStyleEdit->itemData(ui->penStyleEdit->currentIndex(),IdRole).toInt()),
                                    horizontalSlider->value(),verticalSlider->value());
            canvas->setCurrentShape(rc);
            canvas->addShape(rc);
            break;
        }
//        case 7:
//            //Text
//            break;
        }
    }
}
