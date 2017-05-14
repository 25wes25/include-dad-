#ifndef LINE_H
#define LINE_H
#include "Shape.h"
#include "canvas.h"
#include <QVector>

class Line: public Shape
{
	private:
        QVector<QPoint> points;
	public:
        Line():Shape(){points.clear();}
        ~Line(){points.clear();}
        void Draw(Canvas *drawArea);
        void is_Left_Clicked(QPoint &e);
};
#endif
