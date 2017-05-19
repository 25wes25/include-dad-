#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"
class Square: public Rectangle
{
    public:
    Square();
    Square(int tempId, QTextStream& input);
    Square(int x, int y, double s);
    Square(QString idIn,
            Qt::BrushStyle brushStyleIn,
            Qt::GlobalColor brushColorIn,
            double penWidthIn,
            Qt::GlobalColor penColorIn,
            Qt::PenCapStyle penCapIn,
            Qt::PenJoinStyle penJoinIn,
            Qt::PenStyle penStyleIn,double xR);
    Square(Square &copy);
    Square(Square &&copy);
    ~Square();

    // Mutators
    void setSize(double s);

    // Accessors
    virtual void Print(QTextStream& output);
    virtual double getArea();
    virtual double getPerimeter();
    virtual void move(QPoint xy);
    virtual void Draw(Canvas *drawArea);
    virtual bool is_Left_Clicked(QPoint e);
};
#endif
