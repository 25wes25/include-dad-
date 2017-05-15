

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
        //constructor for hard coded data.
        Shape(QString idIn,
              bool isRender,
              Qt::BrushStyle brushIn,
              Qt::GlobalColor pencolorIn,
              double width,
              Qt::PenCapStyle penCapIn,
              Qt::PenJoinStyle penJoinIn,
              Qt::GlobalColor brushColorIn,
              Qt::PenStyle penStyleIn);
        //constructor for file Reading
        Shape(QString idIn,
              bool isRender,
              QString brushIn,
              QString penColorIn,
              double width,
              QString penCapIn,
              QString PenJoinIn,
              QString BrushColorIn,
              QString PenStyleIn);
        //constructor for
        Shape(QString idIn,
              bool isRender,
              int brushIn,
              int penColorIn,
              double width,
              int penCapIn,
              int PenJoinIn,
              int BrushColorIn,
              int PenStyleIn);
        Qt::BrushStyle intToBrushStyle(int index);
        Qt::GlobalColor intToColor(int index);
        Qt::PenCapStyle intToPenCap(int index);
        Qt::PenJoinStyle intToPenJoin(int index);
        Qt::PenStyle intToPenStyle(int index);
        bool isRendered();
        virtual ~Shape();

        // Accessors
        QString GetID();
        QString GetPenColor();
        QString GetPenWidth();
        QString GetPenStyle();
        QString GetPenCapStyle();
        QString GetPenJoinStyle();
        QString GetBrushColor();
        QString GetBrushStyle();

        virtual void move(QPoint xy){xy = QPoint(0,0);}
        virtual void move(int x , int y){x=-1;y=-1;}
        virtual void resize(double x){x=-1;}
        virtual void Draw(Canvas *paintArea){paintArea;}
        virtual bool is_Left_Clicked(QPoint e){return false;}
};
#endif //Shape End

