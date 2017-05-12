

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
        Shape();
        Qt::BrushStyle intToBrushStyle(int index);
        Qt::GlobalColor intToColor(int index);
        Qt::PenCapStyle intToPenCap(int index);
        Qt::PenJoinStyle intToPenJoin(int index);
        Qt::PenStyle intToPenStyle(int index);
        bool isRendered();
        virtual ~Shape();
        virtual void move(QPoint xy){}
        virtual void move(int x , int y){}
        virtual void resize(double x){}
        virtual void Draw(Canvas *paintArea){}
        virtual bool is_Left_Clicked(QPoint e){}
        virtual void sayHi() {}

};
#endif //Shape End

