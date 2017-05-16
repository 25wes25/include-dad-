

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Ellipse.h"
#include "canvas.h"
class Circle:public Ellipse
{
	public:
		Circle();
		Circle(int xIn, int yIn, double radiusIn);
        Circle(QString idIn,
                 Qt::BrushStyle brushStyleIn,
                 Qt::GlobalColor brushColorIn,
                 double penWidthIn,
                 Qt::GlobalColor penColorIn,
                 Qt::PenCapStyle penCapIn,
                 Qt::PenJoinStyle penJoinIn,
                 Qt::PenStyle penStyleIn,double xR);
		Circle(Circle &copy);
		Circle(Circle &&copy);
		~Circle();

        // Accessors
        double getArea(){return pi*xRadius*xRadius;}
        double getPerimeter(){return 2*pi*xRadius;}

        virtual void move(int xDes, int yDes);
        virtual void move(QPoint xy);
        virtual void Resize(double radiusIn);
        virtual void Draw(Canvas* area);
        virtual bool is_Left_Clicked(QPoint e);
};
#endif
