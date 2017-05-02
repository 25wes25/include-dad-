

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle:public Shape
{
	private:
		double majorRadius;
		int x;
		int y;
	public:
		Circle();
		Circle(int xIn, int yIn, double radiusIn);
		Circle(Circle &copy);
		Circle(Circle &&copy);
		~Circle();
	
		void Move(int xDes, int yDes);
		void Resize(double radiusIn);
		void Draw();
		void Erase();
	
}
#endif