

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Ellipse.h"
#include "canvas.h"
class Circle:public Ellipse
{
	public:
		Circle();
		Circle(int xIn, int yIn, double radiusIn);
		Circle(Circle &copy);
		Circle(Circle &&copy);
		~Circle();
        virtual void Move(int xDes, int yDes);
        virtual void Move(QPoint xy);
        virtual void Resize(double radiusIn);
        virtual void Draw(Canvas* area);
        virtual bool is_Left_Clicked(QPoint e);
};
#endif
