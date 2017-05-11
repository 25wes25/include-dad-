#include "Circle.h"
#include <cmath>
Circle::Circle(): Ellipse(200,200,100,100){}
		
Circle::Circle(int xIn, int yIn, double radiusIn): Ellipse(xIn,yIn,radiusIn,radiusIn){}

Circle::Circle(Circle &copy):Ellipse(copy.x,copy.y,copy.xRadius,copy.yRadius){}
		
Circle::Circle(Circle && copy)
{
    this->x = copy.x;
    this->y = copy.y;
    this->xRadius = copy.xRadius;
    this->yRadius = copy.yRadius;
}		
Circle::~Circle()
{
	x=0;
	y=0;
    xRadius=0;
    yRadius=0;
}
	
void Circle::Move(int xDes, int yDes)
{
	x = xDes;
	y = yDes;
}
void Circle::Move(QPoint moveTo)
{
    x = moveTo.x();
    y = moveTo.y();
}
		
void Circle::Resize(double radiusIn)
{
    xRadius = radiusIn;
    yRadius = radiusIn;

}		
void Circle::Draw(Canvas *drawArea)
{
    Ellipse::Draw(drawArea);
}
bool Circle::is_Left_Clicked(QPoint e)
{
	//get the point at which the mouse is clicked and sees if it is contained within this instance of the circle.
	double circleFormula = pow((abs(e.x())-x),2)+pow((abs(e.y())-y),2);
    return (circleFormula<=pow(xRadius,2));
}
