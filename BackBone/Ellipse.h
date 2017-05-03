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
	void Resize(double radiusIn);

	void Draw();
	void Erase();

    private:
        double xRadius;
        double yRadius;
	
}
#endif
