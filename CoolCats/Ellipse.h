#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Shape.h"
#include "canvas.h"
#include <QDebug>
class Ellipse:public Shape
{	
    public:
	Ellipse();
    Ellipse(int x, int y, double xR, double yR);
    Ellipse(Ellipse &copy);
    Ellipse(Ellipse &&copy);
    ~Ellipse();

        // Mutators
    virtual void move(int xDes, int yDes);
    virtual void move(QPoint xy);
    virtual void Resize(double radiusIn);

    virtual void Draw(Canvas *drawArea);
	//accessors
    virtual bool is_Left_Clicked(QPoint xy);
    virtual void sayHi() {qDebug() << "Hello good sir " << x << ' ' << y;}

    protected:
    static int ellipseCounter;
    int x;
    int y;
    double xRadius;
    double yRadius;
	
};
#endif
