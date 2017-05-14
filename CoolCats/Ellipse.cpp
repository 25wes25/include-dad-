#include "Ellipse.h"
#include <cmath>
Ellipse::Ellipse():Shape(),x{100},y{100},xRadius{100},yRadius{50}{}
		
Ellipse::Ellipse(int x, int y,double xR, double yR):x{x},
                                                    y{y},
                                                    xRadius{xR},
                                                    yRadius{yR}{}

Ellipse::Ellipse(Ellipse &copy):Shape(copy),x{copy.x},
                                y{copy.y},
                                xRadius{copy.xRadius},
                                yRadius{copy.yRadius}
{
}
		
Ellipse::Ellipse(Ellipse &&copy)
{
    this->x = copy.x;
    this->y = copy.y;
    this->xRadius = copy.xRadius;
    this->yRadius = copy.yRadius;
}		
Ellipse::~Ellipse()
{
    xRadius = 0;
    yRadius = 0;
}
	
void Ellipse::move(int xDes, int yDes)
{
    x = xDes;
    y = yDes;

}
void Ellipse::move(QPoint xy)
{
    x = xy.x();
    y = xy.y();

}		
void Ellipse::Resize(double radiusIn)
{
    xRadius = radiusIn;
    yRadius = radiusIn;

}		
void Ellipse::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    painter.save();
    painter.drawEllipse(QPoint(x,y),xRadius,yRadius);
    painter.restore();
}
bool Ellipse::is_Left_Clicked(QPoint xy)
{
	//general formula for ellipse centered at x,y datatypes
    double ellipseFormula = (((double)(pow(abs(xy.x())-x,2)/pow(xRadius,2)))+((double)(pow(abs(xy.y())-y,2)/pow(yRadius,2))));
	return (ellipseFormula<=1);
}
