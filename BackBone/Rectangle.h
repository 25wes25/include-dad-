#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
class Rectangle: public Shape
{           
    public:
        Rectangle();
        Rectangle(double w, double l);
        Rectangle(Rectangle &copy);
        Rectangle(Rectangle &&copy);
        ~Rectangle();

        // Mutators
        void setWidthLength(double w, double l);
        void setWidth(double w);
        void setLength(double l);

        // Accessors
        double getWidth();
        double getLength();

    private:
        double width;
        double length;
}
#endif
