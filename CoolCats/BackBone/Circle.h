

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Ellipse.h"
class Circle:public Ellipse
{
	private:
		double radius;
		int x;
		int y;
	public:
		Circle();
		Circle(int xIn, int yIn, double radiusIn);
		Circle(Circle &copy);
		Circle(Circle &&copy);
		~Circle();
		
		virtual bool is_Left_Clicked(QPoint &e);
	
}
#endif
