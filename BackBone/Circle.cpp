#include "Circle.h"

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
void Circle::Erase()
{

}