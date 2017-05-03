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

    private:
        double size;
}
#endif
