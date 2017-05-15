#include "shape.h"
#include "canvas.h"
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
    default: return "Blue";
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
    default: return "Solid";
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
    default: return "Round";
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
    default: return "Round";
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
    default: return "Blue";
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
    case Qt::HorPattern: return "Hor";
        break;
    default: return "Solid";
        break;
    }
}
