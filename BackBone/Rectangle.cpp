#include "Rectangle.h"

Rectangle::Rectangle()
{
    width = 0;
    length = 0;
}
		
Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;
}

Rectangle::Rectangle(Rectangle &copy):width{copy.width},length{copy.length}{}

Rectangle::Rectangle(Rectangle &&copy)
{
    this = copy;
}

Rectangle::~Rectangle()
{
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

double Rectangle::getWidth() {return width;}
double Rectangle::getLength() {return length;}
