#ifndef LINE_H
#define LINE_H
#include "Shape.h"
#include "canvas.h"
#include <QVector>
class Line: public Shape
{
    protected:
        QVector<QPoint> Poly;
	public:
        Line();
        Line(QVector<QPoint> e);
        Line(QString idIn,
                   Qt::BrushStyle brushStyleIn,
                   Qt::GlobalColor brushColorIn,
                   double penWidthIn,
                   Qt::GlobalColor penColorIn,
                   Qt::PenCapStyle penCapIn,
                   Qt::PenJoinStyle penJoinIn,
                   Qt::PenStyle penStyleIn,
                   int x,
                   int y);
        ~Line(){Poly.clear();}
        void push_Back_point(QPoint e);
        void push_Back_point(int x, int y);
        void moveLastPoint(QPoint e);
        virtual void Draw(Canvas *drawArea);
        virtual bool is_Left_Clicked(QPoint e);
};
#endif
