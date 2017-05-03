#include "Ellipse.h"

Ellipse::Ellipse()
{
    xRadius = 0;
    yRadius = 0;
}
		
Ellipse::Ellipse(double xR, double yR)
{
    xRadius = xR;
    yRadius = yR;
}

Ellipse::Ellipse(Ellipse &copy):xRadius{copy.xRadius},yRadius{copy.yRadius}{}
		
Ellipse::Ellipse(Ellipse &&copy)
{
    this = copy;
}		
Ellipse::~Ellipse()
{
    xRadius = 0;
    yRadius = 0;
}
	
void Ellipse::Move(int xDes, int yDes)
{
    x = xDes;
    y = yDes;
    Draw();
}
		
void Ellipse::Resize(double radiusIn)
{
    majorAxis = radiusIn;
    Draw();
}		
void Ellipse::Draw()
{
    QRect *bounds;
}
void Circle::Erase()
{

}
