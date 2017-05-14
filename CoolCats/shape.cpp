#include "shape.h"

bool Shape::isRendered()
{
    return isRender;
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
