#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Shape.h"
class Ellipse:public Shape
{	
    public:
	Ellipse();
        Ellipse(double xR, double yR);
        Ellipse(Ellipse &copy);
        Ellipse(Ellipse &&copy);
        ~Ellipse();

        // Mutators
	void Move(int xDes, int yDes);
	void Move(QPoint &xy);
	void Resize(double radiusIn);

	void Draw();
	void Erase();
	//accessors
	virtual bool is_Left_Clicked(QPoint &xy);

    private:
        double xRadius;
        double yRadius;
	
}
#endif
