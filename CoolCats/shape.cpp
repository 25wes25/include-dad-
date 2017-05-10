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

//Qt::PenCapStyle  Shape::intToPenCap(int index);
//Qt::PenJoinStyle  Shape::intToPenJoin(int index);
//Qt::PenStyle  Shape::intToPenStyle(int index);
