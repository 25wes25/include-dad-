#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Shape.h"
#include "canvas.h"
#include <QDebug>
#include <cmath>
/**
 * @brief The Ellipse class - parent to circle class, handles move functions
 * as well as area and perimeter coming from the virtual base class
 */
class Ellipse:public Shape
{	
    public:
	Ellipse();
    Ellipse(int x, int y, double xR, double yR);
    Ellipse(QString idIn,
             Qt::BrushStyle brushStyleIn,
             Qt::GlobalColor brushColorIn,
             double penWidthIn,
             Qt::GlobalColor penColorIn,
             Qt::PenCapStyle penCapIn,
             Qt::PenJoinStyle penJoinIn,
             Qt::PenStyle penStyleIn,double xR, double yR);
    Ellipse(Ellipse &copy);
    Ellipse(Ellipse &&copy);
    ~Ellipse();

    // Mutators
    virtual void move(int xDes, int yDes);
    virtual void move(QPoint xy);
    virtual void Resize(double radiusIn);
    virtual void Draw(Canvas *drawArea);

    // Accessors
    void SetX(double xIn);
    void SetY(double yIn);
    double getArea(){return pi*xRadius*yRadius;}
    double getPerimeter(){return 2*pi*sqrt((pow(xRadius,2)+pow(yRadius,2))/2);}
    virtual bool is_Left_Clicked(QPoint xy);
    virtual void sayHi() {qDebug() << "Hello good sir " << x << ' ' << y;}

    protected:
    static int ellipseCounter;
    int x;
    int y;
    double xRadius;
    double yRadius;
    const double pi = 3.14159265359; // PI constant used to calculate Area and Perimeter
	
};
#endif
