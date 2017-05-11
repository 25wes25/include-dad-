#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Shape.h"
#include "canvas.h"
class Ellipse:public Shape
{	
    public:
	Ellipse();
    Ellipse(int x, int y, double xR, double yR);
    Ellipse(Ellipse &copy);
    Ellipse(Ellipse &&copy);
    ~Ellipse();

        // Mutators
    virtual void Move(int xDes, int yDes);
    virtual void Move(QPoint xy);
    virtual void Resize(double radiusIn);

    virtual void Draw(Canvas *drawArea);
	//accessors
    virtual bool is_Left_Clicked(QPoint xy);

    protected:
    static int ellipseCounter;
    int x;
    int y;
    double xRadius;
    double yRadius;
	
};
#endif
