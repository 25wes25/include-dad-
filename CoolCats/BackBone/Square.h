#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"
class Square: public Rectangle
{
    public:
    Square();
    Square(double s);
    Square(Square &copy);
    Square(Square &&copy);
    ~Square();

    // Mutators
    void setSize(double s);

    // Accessors
    double getSize();
	double getArea() {return (size*size)};
	double getPerimeter {return (size*4)};

    private:
        double size;
}
#endif
