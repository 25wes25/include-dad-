#include "shape.h"
#include "canvas.h"
void Shape::configurePainter(QPainter &p)
{
    p.setBrush(QBrush(brushColorEdit,brushStyle));
    QPen temp;
    temp.setBrush(QBrush(brushColorEdit,brushStyle));
    temp.setWidth(penWidthEdit);
    temp.setCapStyle(penCapEdit);
    temp.setJoinStyle(PenJoinEdit);
    temp.setColor(penColorEdit);
    temp.setStyle(penStyleEdit);
    p.setPen(temp);
}


bool Shape::isRendered()
{
    return isRender;
}
Shape::Shape()
{
    id = "placeholder";
    isRender=true;
    brushStyle=Qt::BrushStyle(0);
    penColorEdit=Qt::GlobalColor(0);
    penWidthEdit=0;
    penCapEdit= Qt::PenCapStyle(0);
    PenJoinEdit=Qt::PenJoinStyle(0);
    brushColorEdit=Qt::GlobalColor(0);
    penStyleEdit=Qt::PenStyle(0);
}
Shape::Shape(    QString idIn,
                 bool isRender,
                 Qt::BrushStyle brushIn,
                 Qt::GlobalColor pencolorIn,
                 double width,
                 Qt::PenCapStyle penCapIn,
                 Qt::PenJoinStyle penJoinIn,
                 Qt::GlobalColor brushColorIn,
                 Qt::PenStyle penStyleIn)
                 :id{idIn},
                  isRender{true},
                  brushStyle{brushIn},
                  penColorEdit{pencolorIn},
                  penWidthEdit{width},
                  penCapEdit{penCapIn},
                  PenJoinEdit{penJoinIn},
                  brushColorEdit{brushColorIn},
                  penStyleEdit{penStyleIn}{}
Shape::Shape(const Shape& src)
{
    id=src.id;
    isRender=src.isRender;
    brushStyle=src.brushStyle;
    penColorEdit=src.penColorEdit;
    penWidthEdit=src.penWidthEdit;
    penCapEdit=src.penCapEdit;
    PenJoinEdit=src.PenJoinEdit;
    brushColorEdit=src.brushColorEdit;
    penStyleEdit=src.penStyleEdit;
}

Shape::~Shape()
{
    id = nullptr;
    isRender=false;
    brushStyle=Qt::BrushStyle(0);
    penColorEdit=Qt::GlobalColor(0);
    penWidthEdit=0;
    penCapEdit= Qt::PenCapStyle(0);
    PenJoinEdit=Qt::PenJoinStyle(0);
    brushColorEdit=Qt::GlobalColor(0);
    penStyleEdit=Qt::PenStyle(0);

}
Qt::BrushStyle Shape::intToBrushStyle(int index)
{
    Qt::BrushStyle tempEnum;
    switch (index) {
    case 0:
        tempEnum = Qt::NoBrush;
        break;
    case 1:
        tempEnum = Qt::SolidPattern;
        break;
    case 2:
        tempEnum = Qt::HorPattern;
        break;
    case 3:
        tempEnum = Qt::HorPattern;
        break;
    default:
        tempEnum = Qt::SolidPattern;
        break;
    }
    return tempEnum;
}

Qt::GlobalColor  Shape::intToColor(int index)
{
    Qt::GlobalColor tempEnum;
    switch (index) {
    case 0:
        tempEnum = Qt::black;
        break;
    case 1:
        tempEnum = Qt::white;
        break;
    case 2:
        tempEnum = Qt::gray;
        break;
    case 3:
        tempEnum = Qt::red;
        break;
    case 4:
        tempEnum = Qt::green;
        break;
    case 5:
        tempEnum = Qt::blue;
        break;
    case 6:
        tempEnum = Qt::yellow;
        break;
    case 7:
        tempEnum = Qt::cyan;
        break;
    case 8:
        tempEnum = Qt::magenta;
        break;
    default:
        tempEnum = Qt::blue;
        break;
    }
    return tempEnum;
}

Qt::PenCapStyle  Shape::intToPenCap(int index)
{
    Qt::PenCapStyle tempEnum;
    switch (index)
    {
    case 0x00:
        tempEnum = Qt::FlatCap;
        break;
    case 0x10:
        tempEnum = Qt::SquareCap;
        break;
    case 0x20:
        tempEnum = Qt::RoundCap;
        break;
    default:
        tempEnum = Qt::RoundCap;
    }
    return tempEnum;
}

Qt::PenJoinStyle  Shape::intToPenJoin(int index)
{
    Qt::PenJoinStyle tempEnum;
    switch (index)
    {
    case 0x00:
        tempEnum = Qt::MiterJoin;
        break;
    case 0x40:
        tempEnum = Qt::BevelJoin;
        break;
    case 0x80:
        tempEnum = Qt::RoundJoin;
        break;
    case 0x100:
        tempEnum = Qt::SvgMiterJoin;
        break;
    default:
        tempEnum = Qt::RoundJoin;
    }
    return tempEnum;
}

Qt::PenStyle  Shape::intToPenStyle(int index)
{
    Qt::PenStyle tempEnum;
    switch (index)
    {
    case 0:
        tempEnum = Qt::NoPen;
        break;
    case 1:
        tempEnum = Qt::SolidLine;
        break;
    case 2:
        tempEnum = Qt::DashLine;
        break;
    case 3:
        tempEnum = Qt::DotLine;
        break;
    case 4:
        tempEnum = Qt::DashDotLine;
        break;
    case 5:
        tempEnum = Qt::DashDotDotLine;
        break;
    case 6:
        tempEnum = Qt::CustomDashLine;
        break;
    default:
        tempEnum = Qt::SolidLine;
    }
    return tempEnum;
}

// ********************** Operator Overloads ************************

Shape& Shape::operator=(const Shape& src)
{
    this->id=src.id;
    this->isRender=src.isRender;
    this->brushStyle=src.brushStyle;
    this->penColorEdit=src.penColorEdit;
    this->penWidthEdit=src.penWidthEdit;
    this->penCapEdit=src.penCapEdit;
    this->PenJoinEdit=src.PenJoinEdit;
    this->brushColorEdit=src.brushColorEdit;
    this->penStyleEdit=src.penStyleEdit;
    Shape* temp = this;
    return *temp;
}

// **************************** ACCESSORS ****************************

QString Shape::GetID()
{
    return id;
}

QString Shape::GetPenColor()
{
    switch(penColorEdit)
    {
    case Qt::black: return "Black";
        break;
    case Qt::white: return "White";
        break;
    case Qt::gray: return "Gray";
        break;
    case Qt::red: return "Red";
        break;
    case Qt::green: return "Green";
        break;
    case Qt::blue: return "Blue";
        break;
    case Qt::yellow: return "Yellow";
        break;
    case Qt::cyan: return "Cyan";
        break;
    case Qt::magenta: return "Magenta";
        break;
    default: return "Error";
        break;
    }
}

QString Shape::GetPenWidth()
{
    return QString::number(penWidthEdit);
}

QString Shape::GetPenStyle()
{
    switch (penStyleEdit)
    {
    case Qt::NoPen: return "No Pen";
        break;
    case Qt::SolidLine: return "Solid";
        break;
    case Qt::DashLine: return "Dash";
        break;
    case Qt::DotLine: return "Dot";
        break;
    case Qt::DashDotLine: return "Dot Dot";
        break;
    case Qt::DashDotDotLine: return "Dash Dot Dot";
        break;
    case Qt::CustomDashLine: return "Custom Dash";
        break;
    default: return "Error";
    }
}

QString Shape::GetPenCapStyle()
{
    switch (penCapEdit)
    {
    case Qt::FlatCap: return "Flat";
        break;
    case Qt::SquareCap: return "Square";
        break;
    case Qt::RoundCap: return "Round";
        break;
    default: return "Error";
    }
}

QString Shape::GetPenJoinStyle()
{
    switch (PenJoinEdit)
    {
    case Qt::MiterJoin: return "Miter";
        break;
    case Qt::BevelJoin: return "Bevel";
        break;
    case Qt::RoundJoin: return "Round";
        break;
    case Qt::SvgMiterJoin: return "Svg Miter";
        break;
    default: return "Error";
    }
}

QString Shape::GetBrushColor()
{
    switch(brushColorEdit)
    {
    case Qt::black: return "Black";
        break;
    case Qt::white: return "White";
        break;
    case Qt::gray: return "Gray";
        break;
    case Qt::red: return "Red";
        break;
    case Qt::green: return "Green";
        break;
    case Qt::blue: return "Blue";
        break;
    case Qt::yellow: return "Yellow";
        break;
    case Qt::cyan: return "Cyan";
        break;
    case Qt::magenta: return "Magenta";
        break;
    default: return "Error";
        break;
    }
}

QString Shape::GetBrushStyle()
{
    switch (brushStyle)
    {
    case Qt::NoBrush: return "No Brush";
        break;
    case Qt::SolidPattern: return "Solid";
        break;
    case Qt::HorPattern: return "Horizontal";
        break;
    case Qt::VerPattern: return "Vertical";
        break;
    default: return "Error";
        break;
    }
}
