#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Shape.h"
class Ellipse:public Shape
{
	private:
		double xRadius;
		double yRadius;
		
	
	public:
	Ellipse();
	void Move(int xDes, int yDes);
	void Resize(double radiusIn);
	void Draw();
	void Erase();
	
}
#endif
