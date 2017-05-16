#ifndef LINE_H
#define LINE_H


#include "Shape.h"
#include "canvas.h"
#include <QVector>
#include <QPolygon>
class Line: public Shape
{
    protected:

        QPolygon points;
        int point_counter;
    public:
        Line();
        Line(QPolygon e);
        Line(  QString idIn,
               Qt::BrushStyle brushStyleIn,
               Qt::GlobalColor brushColorIn,
               double penWidthIn,
               Qt::GlobalColor penColorIn,
               Qt::PenCapStyle penCapIn,
               Qt::PenJoinStyle penJoinIn,
               Qt::PenStyle penStyleIn,
               int x,
               int y);
        Line(  QString idIn,
               Qt::BrushStyle brushStyleIn,
               Qt::GlobalColor brushColorIn,
               double penWidthIn,
               Qt::GlobalColor penColorIn,
               Qt::PenCapStyle penCapIn,
               Qt::PenJoinStyle penJoinIn,
               Qt::PenStyle penStyleIn);
        virtual ~Line(){}
        virtual void push_Back_point(QPoint e);
        virtual void push_Back_point(int x, int y);
        virtual void moveLastPoint(QPoint e);
        virtual void Draw(Canvas *drawArea);
        virtual bool is_Left_Clicked(QPoint e);
        int getPointnum(){return point_counter;}
};
#endif


