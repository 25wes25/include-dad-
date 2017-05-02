#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Square.h"
class Rectangle: public Square
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
