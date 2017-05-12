#include "Rectangle.h"
#include <QPainter>
Rectangle::Rectangle():x{25},y{25},width{10},length{10},Shape(){}
		
Rectangle::Rectangle(int xIn, int yIn, double w, double l):x{xIn},y{yIn},width{w},length{l},Shape(){}

Rectangle::Rectangle(Rectangle &copy):x{copy.x},y{copy.y},width{copy.width},length{copy.length}{}

Rectangle::Rectangle(Rectangle &&copy)
{
    this->x = copy.x;
    this->y = copy.y;
    this->length = copy.length;
    this->width=copy.width;
}

Rectangle::~Rectangle()
{
    x =0;
    y = 0;
    width = 0;
    length = 0;
}

void Rectangle::setWidthLength(double w, double l)
{
    width = w;
    length = l;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double l)
{
    length = l;
}
void Rectangle::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    painter.save();
    painter.drawRect(x-width,y-length,width,length);
    painter.restore();
}
bool Rectangle::is_Left_Clicked(QPoint e)
{
    return  (x+width>e.x()&& //Check right side
             x-width<e.x()&& //Check left side
             y+length>e.y()&&//Check top
             y-length<e.y());//CheckBottom
}

