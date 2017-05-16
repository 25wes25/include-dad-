#include "Square.h"

Square::Square():Rectangle(100,100,100,100){}
		
Square::Square(int x, int y , double s):Rectangle(x,y,s,s){}

Square::Square(QString idIn,
               Qt::BrushStyle brushStyleIn,
               Qt::GlobalColor brushColorIn,
               double penWidthIn,
               Qt::GlobalColor penColorIn,
               Qt::PenCapStyle penCapIn,
               Qt::PenJoinStyle penJoinIn,
               Qt::PenStyle penStyleIn, double xR)
    :Rectangle( idIn,
               brushStyleIn,
               brushColorIn,
               penWidthIn,
               penColorIn,
               penCapIn,
               penJoinIn,
               penStyleIn,xR,xR){}


Square::Square(Square &copy):Rectangle(copy){}

Square::Square(Square &&copy):Rectangle(copy){}

Square::~Square(){}

void Square::setSize(double s)
{
   Rectangle::setLength(s);
   Rectangle::setWidth(s);
}

double Square::getArea()
{
    return Rectangle::getArea();
}
double Square::getPerimeter()
{
    return Rectangle::getPerimeter();
}
void Square::move(QPoint xy)
{
    Rectangle::move(xy);
}

void Square::Draw(Canvas *drawArea)
{
    Rectangle::Draw(drawArea);
}
bool Square::is_Left_Clicked(QPoint e)
{
    return Rectangle::is_Left_Clicked(e);
}
