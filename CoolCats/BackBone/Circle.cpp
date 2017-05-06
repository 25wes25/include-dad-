#include "Circle.h"
#include <cmath>
Circle::Circle(): x{0},y{0},majorRadius{10}{}
		
Circle::Circle(int xIn, int yIn, double radiusIn):x{xIn},y{yIn},majorRadius{radiusIn}{}

Circle::Circle(Circle &copy):x{copy.x},y{copy.y},majorRadius{copy.majorRadius}{}
		
Circle::Circle(Circle &&copy)
{
	this = copy;
}		
Circle::~Circle()
{
	x=0;
	y=0;
	majorRadius=0;
}
	
void Circle::Move(int xDes, int yDes)
{
	x = xDes;
	y = yDes;
	Draw();
}
		
void Circle::Resize(double radiusIn)
{
	majorAxis = radiusIn;
	Draw();
}		
void Circle::Draw()
{
	QRect *bounds;
}
virtual bool Circle::is_Left_Clicked(QPoint& e)
{
	//get the point at which the mouse is clicked and sees if it is contained within this instance of the circle.
	double circleFormula = pow((abs(e.x())-x),2)+pow((abs(e.y())-y),2);
	return (circleFormula<=majorRadius*majorRadius);
}
