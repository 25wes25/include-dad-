#include "Ellipse.h"
#include <cmath>
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
void Ellipse::Move(QPoint &xy)
{
    x = xy.x();
    y = xy.y();
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
bool Ellipse::is_Left_Clicked(QPoint &xy)
{
	//general formula for ellipse centered at x,y datatypes
	double ellipseFormula = (((double)(pow(abs(e.x())-x,2)/pow(xRadius,2)))+((double)(pow(abs(e.y())-y,2)/pow(yRadius,2)))))
	return (ellipseFormula<=1);
}
