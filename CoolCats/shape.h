

#ifndef SHAPE_H
#define SHAPE_H

#include <QPainter>
#include "Vector.h"
#include <QWidget>
#include <QString>
#include <QPainter>
#include <QPoint>
class Canvas;


class Shape
{
    private:
        QString id;
        bool isRender;
        Qt::BrushStyle brushStyle;
        Qt::GlobalColor penColorEdit;
        double penWidthEdit;
        Qt::PenCapStyle penCapEdit;
        Qt::PenJoinStyle PenJoinEdit;
        Qt::GlobalColor brushColorEdit;
        Qt::PenStyle penStyleEdit;
    public:

        Qt::BrushStyle intToBrushStyle(int index);
        Qt::GlobalColor intToColor(int index);
        Qt::PenCapStyle intToPenCap(int index);
        Qt::PenJoinStyle intToPenJoin(int index);
        Qt::PenStyle intToPenStyle(int index);
        bool isRendered();
        virtual ~Shape();
        virtual void move(QPoint &xy)=0;
        virtual void move(int x , int y)=0;
        virtual void resize(double x)=0;
        virtual void Draw(Canvas *paintArea)=0;
        virtual bool is_Left_Clicked(QPoint &e)=0;

};
#endif //Shape End

