#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"
class Square: public Rectangle
{
    public:
    Square();
    Square(int x, int y, double s);
    Square(Square &copy);
    Square(Square &&copy);
    ~Square();

    // Mutators
    void setSize(double s);

    // Accessors
    virtual double getArea();
    virtual double getPerimeter();
    virtual void Draw(Canvas *drawArea);
    virtual bool is_Left_Clicked(QPoint &e);
};
#endif
