#include "Square.h"

Square::Square()
{
    size = 0;
}
		
Square::Square(double s)
{
    size = s;
}

Square::Square(Square &copy):size{copy.size}{}

Square::Square(Square &&copy)
{
    this = copy;
}

Square::~Square()
{
    size = 0;
}

void Square::setSize(double s)
{
    size = s;
}

double Square::getSize(){return size;}
