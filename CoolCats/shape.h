

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
        static int objNum;
        bool isRender;

    public:
        Shape();
        Shape(int idIn, bool isRenderIn, int brushStyle, int penColorEdit, int penWidthEdit, int penCapEdit,
              int PenJoinEdit, int brushColorEdit, int penStyleEdit);
        Shape(Shape &copy);
        Shape(Shape &&move);
        Qt::BrushStyle intToBrushStyle(int index);
        Qt::GlobalColor intToColor(int index);
        Qt::PenCapStyle intToPenCap(int index);
        Qt::PenJoinStyle intToPenJoin(int index);
        Qt::PenStyle intToPenStyle(int index);

        virtual ~Shape();
        virtual void move(QPoint &xy);
        virtual void move(int x , int y);
        virtual void resize(double x);
        virtual void Draw(Canvas *paintArea)=0;

        virtual bool is_Left_Clicked(QPoint &e);

};
#endif //Shape End

