#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
class Rectangle: public Shape
{
	private:
		double width;
                double length;
	public:
                setWidthLength(double w, double l);
                setWidth(double w);
                setLength(double l);
                getWidth() {return width;}
                getLength() {return length;}
}
#endif
