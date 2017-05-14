#ifndef LINE_H
#define LINE_H
#include "Shape.h"
#include "canvas.h"
#include <QVector>

class Line: public Shape
{
    protected:
        QVector<QPoint> POLY;
	public:
        Line():Shape(){POLY.clear();}
        ~Line(){POLY.clear();}
        void Draw(Canvas *drawArea);
        void is_Left_Clicked(QPoint &e);
};
#endif
