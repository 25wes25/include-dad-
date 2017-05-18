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
    this->setWindowState(Qt::WindowMaximized);
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
    ui->penColorEdit->addItem(tr("Red"),static_cast<int>(Qt::red));
    ui->penColorEdit->addItem(tr("Green"),static_cast<int>(Qt::green));
    ui->penColorEdit->addItem(tr("Blue"),static_cast<int>(Qt::blue));
    ui->penColorEdit->addItem(tr("Cyan"),static_cast<int>(Qt::cyan));
    ui->penColorEdit->addItem(tr("Magenta"),static_cast<int>(Qt::magenta));
    ui->penColorEdit->addItem(tr("Yellow"),static_cast<int>(Qt::yellow));
    ui->penColorEdit->addItem(tr("Gray"),static_cast<int>(Qt::gray));
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
    ui->brushColorEdit->addItem(tr("Red"),static_cast<int>(Qt::red));
    ui->brushColorEdit->addItem(tr("Green"),static_cast<int>(Qt::green));
    ui->brushColorEdit->addItem(tr("Blue"),static_cast<int>(Qt::blue));
    ui->brushColorEdit->addItem(tr("Cyan"),static_cast<int>(Qt::cyan));
    ui->brushColorEdit->addItem(tr("Magenta"),static_cast<int>(Qt::magenta));
    ui->brushColorEdit->addItem(tr("Yellow"),static_cast<int>(Qt::yellow));
    ui->brushColorEdit->addItem(tr("Gray"),static_cast<int>(Qt::gray));

    //BRUSH STYLE ENUMS
    ui->brushStyleEdit->addItem(tr("Solid"),static_cast<int>(Qt::SolidPattern));
    ui->brushStyleEdit->addItem(tr("Horizontal"),static_cast<int>(Qt::HorPattern));
    ui->brushStyleEdit->addItem(tr("Vertical"),static_cast<int>(Qt::VerPattern));
    ui->brushStyleEdit->addItem(tr("No Brush"),static_cast<int>(Qt::NoBrush));

    //end - Associate combo box indicies with QT enums



    //INITIALIZE DYNAMIC LABELS
    tempLabel1 = new QLabel();
    tempLabel2 = new QLabel();
    horizontalSlider = new QSlider(Qt::Horizontal);
    verticalSlider = new QSlider(Qt::Horizontal);

    horizontalSlider->setMinimum(0);
    horizontalSlider->setMaximum(500);
    horizontalSlider->setSliderPosition(100);
    verticalSlider->setMinimum(0);
    verticalSlider->setMaximum(500);
    verticalSlider->setSliderPosition(100);
    tempLabel1->setSizePolicy(QSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed));
    tempLabel2->setSizePolicy(QSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed));

    ui->LabelLayout->addWidget(tempLabel1,0,Qt::AlignLeft);
    ui->LabelLayout->addWidget(tempLabel2,0,Qt::AlignLeft);

    ui->InputLayout->addWidget(horizontalSlider,0,Qt::AlignLeft);
    ui->InputLayout->addWidget(verticalSlider,0,Qt::AlignLeft);
    //INITIALIZE THE DRAWING CANVAS
    canvas = new Canvas();
    connect(ui->actionSave,SIGNAL(triggered(bool)),this, SLOT(saveFile()));    
    connect(canvas,SIGNAL(isClicked()), this,SLOT(upDateCurrentShape())) ;
    connect(this,SIGNAL(PointInput()),canvas,SLOT(mousePointInput()));

    ui->horizontalLayout->addWidget(canvas,0,Qt::AlignRight);

    QDir SavePath = QDir::currentPath();

    while (SavePath.dirName() != "-include-dad-" && SavePath.cdUp());
    if(!SavePath.cd("Saves"))
    {
        SavePath.mkdir("Saves");
        SavePath.cd("Saves");
    }
    saveName = SavePath.path();
    qDebug() << SavePath.path();
    Load();

    // Outputs to and Formats Table.
    OutputToTable();
    ui->tableWidget->resizeRowsToContents();
    ui->tableWidget->resizeColumnsToContents();
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
    Save();
    delete ui;
}

void MainInterface::Load()
{
    QFile inFile(saveName + "/Shapes.txt");
    Vector<Shape *> area;
    inFile.open(QIODevice::ReadOnly);

    QTextStream input(&inFile);

    int tempId;
    QString shapeType;

    area.clear();

    while(!input.atEnd())
    {
        Ignore(input,' ');
        input >> tempId;
        input.readLine();
        Ignore(input,' ');
        shapeType = input.readLine();

        qDebug() << shapeType;
        if (shapeType == "Polygon")
        {
            area.push_back(new Polygon(tempId, input));
        }
        else if (shapeType == "Polyline")
        {
            area.push_back(new PolyLine(tempId, input));
        }
        else if (shapeType == "Line")
        {
            area.push_back(new Line(tempId, input));
        }
        else if (shapeType == "Rectangle")
        {
            area.push_back(new Rectangle(tempId, input));
        }
        else if (shapeType == "Square")
        {
            area.push_back(new Square(tempId, input));
        }
        else if (shapeType == "Ellipse")
        {
            area.push_back(new Ellipse(tempId, input));
        }
        else if (shapeType == "Circle")
        {
            area.push_back(new Circle(tempId, input));
        }
        else if (shapeType == "Text")
        {
            area.push_back(new Text(tempId, input));
        }
        else
        {
            while (input.read(1) != "\n" || input.read(1) != "\n");
        }
        input.readLine();
    }
    canvas->setShapeList(area);
}

void MainInterface::Save()
{
    QFile outFile(saveName + "/Shapes.txt");
    Vector<Shape *>& area = canvas->getShapeList();
    outFile.remove();
    outFile.open(QIODevice::WriteOnly);

    QTextStream output(&outFile);

    for (int i = 0; i < area.size(); i++)
    {
        area[i]->Print(output);
        output << endl;
    }
}

QString MainInterface::GetShapeType(Shape* shape)
{
    if(Circle* c= dynamic_cast<Circle*>(shape))
    {
       return "Circle";
    }
    else if(Ellipse* e = dynamic_cast<Ellipse*>(shape))
    {
       return "Ellipse";
    }
    else if(Square* s = dynamic_cast<Square*>(shape))
    {
       return "Square";
    }
    else if(Rectangle* r = dynamic_cast<Rectangle*>(shape))
    {
       return "Rectangle";
    }
    else if(Polygon* pg = dynamic_cast<Polygon*>(shape))
    {
       return "Polygon";
    }
    else if(PolyLine* pl = dynamic_cast<PolyLine*>(shape))
    {
       return "PolyLine";
    }
    else if(Line* l = dynamic_cast<Line*>(shape))
    {
       return "Line";
    }
    else if(Text* t = dynamic_cast<Text*>(shape))
    {
       return "Text";
    }
}

QString MainInterface::GetShapePerimeterArea(Shape* shape, bool choice)
{
    if(Circle* c= dynamic_cast<Circle*>(shape))
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
    else if(Ellipse* e = dynamic_cast<Ellipse*>(shape))
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
    else if(Square* s = dynamic_cast<Square*>(shape))
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
    else if(Rectangle* r = dynamic_cast<Rectangle*>(shape))
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
    else if(Polygon* pg = dynamic_cast<Polygon*>(shape))
    {
//        if (choice == AREA)
//        {
//            return QString::number(pg->getArea());
//        }
//        else if (choice == PERIMETER)
//        {
//            return QString::number(pg->getPerimeter());
//        }
        return "To Be Added";
    }
    else
    {
        return "";
    }
}

bool MainInterface::HasPerimeterArea(Shape* shape)
{
    bool valid = true;
    if(PolyLine* pl = dynamic_cast<PolyLine*>(shape))
    {
        valid = false;
    }
    else if(Line* l = dynamic_cast<Line*>(shape))
    {
        valid = false;
    }
    else if(Text* t = dynamic_cast<Text*>(shape))
    {
        valid = false;
    }
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
       else if(Polygon* pg = dynamic_cast<Polygon*>(canvas->getCurrentShape()))
       {
            PolyGonUISet();
       }
       else if(PolyLine* pl = dynamic_cast<PolyLine*>(canvas->getCurrentShape()))
       {
            LineUISet();
       }
       else if(Line* l = dynamic_cast<Line*>(canvas->getCurrentShape()))
       {
            LineUISet();
       }
       else if(Text* t = dynamic_cast<Text*>(canvas->getCurrentShape()))
       {

       }
    }
    else
    {
        ui->AddObject->setText("Add Object");
    }
}
void MainInterface::Exit()
{
    emit Logout();
    this->close();

}
void MainInterface::CircleUISet()
{
    RefreshUI();
    //output the info from the new circle object c to the
    tempLabel1->setText("Axis Length:");
    ui->LabelLayout->addWidget(tempLabel1,0,Qt::AlignLeft);
    ui->InputLayout->addWidget(horizontalSlider,0,Qt::AlignLeft);

    tempLabel1->show();
    horizontalSlider->show();
    ui->brushColorEdit->setEnabled(true);
    ui->brushStyleEdit->setEnabled(true);

}

void MainInterface::EllipseUISet()
{
    RefreshUI();
    tempLabel1->setText("Horizontal Axis Length:");
    tempLabel2->setText("Vertical Axis Length:");
    ui->LabelLayout->addWidget(tempLabel1,0,Qt::AlignLeft);
    ui->LabelLayout->addWidget(tempLabel2,0,Qt::AlignLeft);
    ui->InputLayout->addWidget(horizontalSlider,0,Qt::AlignLeft);
    ui->InputLayout->addWidget(verticalSlider,0,Qt::AlignLeft);

    tempLabel1->show();
    tempLabel2->show();

    horizontalSlider->show();
    verticalSlider->show();

    ui->brushColorEdit->setEnabled(true);
    ui->brushStyleEdit->setEnabled(true);


}
void MainInterface::OnHorizontaAxisEllipseChanged()
{
    if (Ellipse* e = dynamic_cast<Ellipse*>(canvas->getCurrentShape()))
    {
        e->SetX(horizontalSlider->sliderPosition());
    }
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
    ui->InputLayout->addWidget(horizontalSlider,0,Qt::AlignRight);


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
    tempLabel1->hide();
    tempLabel2->hide();
    horizontalSlider->hide();
    verticalSlider->hide();
}
//void TextUISet();
//{
//    //nothing yet
//}
void MainInterface::DisableUI()
{
    ui->InputLayout->setEnabled(false);
    ui->LabelLayout->setEnabled(false);
}

void MainInterface::on_ShapeTypeEdit_currentIndexChanged(int index)
{

    switch(index)
    {
    case 0:
        LineUISet();
        break;
    case 1:
        LineUISet();
        break;
    case 2:
        PolyGonUISet();
        break;
    case 3:
        CircleUISet();
        break;
    case 4:
        EllipseUISet();
        break;
    case 5:
        SquareUISet();
        break;
    case 6:
        RectangleUISet();
        break;
    case 7:
        //Text
        break;
    }
    canvas->setCurrentShape(nullptr);
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
void MainInterface::OutputToTable()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(SHAPE_TABLE_COL_SIZE);
    for (int row = 0; row < canvas->getShapeNum(); row++)
    {
        qDebug() << "Row " << row;
        ui->tableWidget->insertRow(row);
        for (int col = 0; col < SHAPE_TABLE_COL_SIZE; col++)
        {
            qDebug() << "Col " << col;
            switch(col)
            {
                     // Creates and outputs QTableWidgetItem Shape ID
            case 0 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                     (canvas->GetShapeAt(row)).GetID()));
                break;
                     // Creates and outputs QTableWidgetItem Type
            case 1 : ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                     GetShapeType(&(canvas->GetShapeAt(row)))));
                break;
                     // Creates and outputs QTableWidgetItem Area
            case 2 : if (GetShapeType(&(canvas->GetShapeAt(row))) == "Line" || GetShapeType(&(canvas->GetShapeAt(row))) == "PolyLine" || GetShapeType(&(canvas->GetShapeAt(row))) == "Text")
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(""));
                     }
                     else
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         GetShapePerimeterArea(&(canvas->GetShapeAt(row)),AREA) + " Pixels²"));
                     }
               break;
                     // Creates and outputs QTableWidgetItem Perimeter
            case 3 : if (GetShapeType(&(canvas->GetShapeAt(row))) == "Line" || GetShapeType(&(canvas->GetShapeAt(row))) == "PolyLine" || GetShapeType(&(canvas->GetShapeAt(row))) == "Text")
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(""));
                     }
                     else
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         GetShapePerimeterArea(&(canvas->GetShapeAt(row)),PERIMETER) + " Pixels"));
                     }
                break;
                     // Creates and outputs QTableWidgetItem Pen Color/Text Color
            case 4 : if (Text* t = dynamic_cast<Text*>(&(canvas->GetShapeAt(row))))
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(t->GetTextColor()));
                     }
                     else
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         (canvas->GetShapeAt(row)).GetPenColor()));
                     }
                break;
                     // Creates and outputs QTableWidgetItem Pen Width/Text Size
            case 5 : if (Text* t = dynamic_cast<Text*>(&(canvas->GetShapeAt(row))))
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(t->GetTextSize()));
                     }
                     else
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         (canvas->GetShapeAt(row)).GetPenWidth()));
                     }
                break;
                     // Creates and outputs QTableWidgetItem Pen Style/Text Font
            case 6 : if (Text* t = dynamic_cast<Text*>(&(canvas->GetShapeAt(row))))
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(t->GetFont()));
                     }
                     else
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         (canvas->GetShapeAt(row)).GetPenStyle()));
                     }
                break;
                     // Creates and outputs QTableWidgetItem Pen Cap Style/Text Alignment
            case 7 : if (Text* t = dynamic_cast<Text*>(&(canvas->GetShapeAt(row))))
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(t->GetAlignment()));
                     }
                     else
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         (canvas->GetShapeAt(row)).GetPenCapStyle()));
                     }
                break;
                     // Creates and outputs QTableWidgetItem Pen Join Style
            case 8 : if (GetShapeType(&(canvas->GetShapeAt(row))) == "Line")
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(""));
                     }
                     else
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         (canvas->GetShapeAt(row)).GetPenJoinStyle()));
                     }
                break;
                     // Creates and outputs QTableWidgetItem Brush Color/Font Weight
            case 9 : if (Text* t = dynamic_cast<Text*>(&(canvas->GetShapeAt(row))))
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(t->GetFontWeight()));
                     }
                     else if (GetShapeType(&(canvas->GetShapeAt(row))) == "Line" || GetShapeType(&(canvas->GetShapeAt(row))) == "PolyLine")
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(""));
                     }
                     else
                     {
                         ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                         (canvas->GetShapeAt(row)).GetBrushColor()));
                     }
                break;
                      // Creates and outputs QTableWidgetItem Brush Style/Font Style
            case 10 : if (Text* t = dynamic_cast<Text*>(&(canvas->GetShapeAt(row))))
                      {
                          ui->tableWidget->setItem(row,col,new QTableWidgetItem(t->GetFontStyle()));
                      }
                      else if (GetShapeType(&(canvas->GetShapeAt(row))) == "Line" || GetShapeType(&(canvas->GetShapeAt(row))) == "PolyLine")
                      {
                          ui->tableWidget->setItem(row,col,new QTableWidgetItem(""));
                      }
                      else
                      {
                          ui->tableWidget->setItem(row,col,new QTableWidgetItem(
                          (canvas->GetShapeAt(row)).GetBrushStyle()));
                      }
                break;
                      // Creates and outputs QTableWidgetItem Text String
            case 11 : if (Text* t = dynamic_cast<Text*>(&(canvas->GetShapeAt(row))))
                      {
                          ui->tableWidget->setItem(row,col,new QTableWidgetItem(t->GetTextString()));
                      }
                      else
                      {
                          ui->tableWidget->setItem(row,col,new QTableWidgetItem(""));
                      }
            }
        }
    }
    ui->tableWidget->resizeRowsToContents();
    ui->tableWidget->resizeColumnsToContents();
}

void MainInterface::SortID()
{
    // Sort by ID
    for(int x=0; x<canvas->getShapeNum(); x++)
    {
        for(int y=0; y<canvas->getShapeNum()-1; y++)
        {
            if((canvas->GetShapeAt(y)).GetID() > (canvas->GetShapeAt(y+1)).GetID())
            {
                Shape* temp = &(canvas->GetShapeAt(y+1));
                Shape* temp2 = &(canvas->GetShapeAt(y));
                (canvas->GetShapeAt(y+1)) = *temp2;
                (canvas->GetShapeAt(y)) = *temp;
            }
        }
    }
}

void MainInterface::SortAreaPerimeter(bool choice)
{
    bool valid = false;
    // Sort by Area
    for(int x=0; x<canvas->getShapeNum(); x++)
    {
        for(int y=0; y<canvas->getShapeNum()-1; y++)
        {
            if (HasPerimeterArea(&canvas->GetShapeAt(y)) == true && HasPerimeterArea(&canvas->GetShapeAt(y+1)) == true)
            {
                if(GetShapePerimeterArea(&(canvas->GetShapeAt(y)),choice) > GetShapePerimeterArea(&(canvas->GetShapeAt(y+1)),choice))
                {
                    Shape* temp = &(canvas->GetShapeAt(y+1));
                    Shape* temp2 = &(canvas->GetShapeAt(y));
                    (canvas->GetShapeAt(y+1)) = *temp2;
                    (canvas->GetShapeAt(y)) = *temp;
                }
            }
            else if (HasPerimeterArea(&(canvas->GetShapeAt(y))) == true && HasPerimeterArea(&(canvas->GetShapeAt(y+1))) == false)
            {
                int i = y+1;
                while(valid == false && i < canvas->getShapeNum()-1)
                {
                    i++;
                    if (HasPerimeterArea(&(canvas->GetShapeAt(i))) == true)
                    {
                        valid = true;
                    }
                }
                if (valid == true)
                {
                    if(GetShapePerimeterArea(&(canvas->GetShapeAt(y)),choice) > GetShapePerimeterArea(&(canvas->GetShapeAt(y+1)),choice))
                    {
                        Shape* temp = &(canvas->GetShapeAt(y+1));
                        Shape* temp2 = &(canvas->GetShapeAt(y));
                        (canvas->GetShapeAt(y+1)) = *temp2;
                        (canvas->GetShapeAt(y)) = *temp;
                    }
                }
            }
        }
    }
}

void MainInterface::on_button_SortID_clicked()
{
    SortID();
    OutputToTable();
}

void MainInterface::on_button_SortArea_clicked()
{
    //SortAreaPerimeter(AREA);
    //OutputToTable();
}

void MainInterface::on_button_SortPerimeter_clicked()
{
    //SortAreaPerimeter(PERIMETER);
    //OutputToTable();
}

void MainInterface::on_AddObject_clicked()
{
    if(userLevel!=GUEST)
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
            else if(Polygon* pg = dynamic_cast<Polygon*>(canvas->getCurrentShape()))
            {
                 LineUISet();
            }
            else if(PolyLine* pl = dynamic_cast<PolyLine*>(canvas->getCurrentShape()))
            {
              LineUISet();
            }
            else if(Line* pg = dynamic_cast<Line*>(canvas->getCurrentShape()))
            {
                LineUISet();
            }
            else if(Text* t = dynamic_cast<Text*>(canvas->getCurrentShape()))
            {

        }
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
    else
    {
        DisableUI();
    }
}
