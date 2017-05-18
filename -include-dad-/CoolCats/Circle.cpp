#include "Circle.h"
#include <cmath>
Circle::Circle(): Ellipse(200,200,100,100){}

Circle::Circle(int tempId, QTextStream &input)
{
    id = QString::number(tempId);

    int tempX;
    int tempY;

    Ignore(input, ' ');
    input >> x;

    Ignore(input, ' ');
    input >> y;

    Ignore(input, ' ');
    input >> xRadius;
    yRadius = xRadius;

    x+= xRadius;
    y+= yRadius;

    input.readLine();
    Ignore(input, ' ');
    penColorEdit = StringToColor(input.readLine());

    Ignore(input, ' ');
    input >> penWidthEdit;

    Ignore(input, ' ');
    penStyleEdit = StringToPen(input.readLine());

    Ignore(input, ' ');
    penCapEdit = StringToCap(input.readLine());

    Ignore(input, ' ');
    PenJoinEdit = StringToJoin(input.readLine());

    Ignore(input, ' ');
    brushColorEdit = StringToColor(input.readLine());

    Ignore(input, ' ');
    brushStyle = StringToBrush(input.readLine());
}
		
Circle::Circle(int xIn, int yIn, double radiusIn): Ellipse(xIn,yIn,radiusIn,radiusIn){}

Circle::Circle(Circle &copy):Ellipse(copy.x,copy.y,copy.xRadius,copy.yRadius){}

/**
 * @brief Circle::Circle
 *  A class that will render a circle based on the params. It will only render to
 * the custom type canvas.
 * @param idIn -  specifies the string that represents the object
 * @param brushStyleIn -  specifies the style of the brush
 * @param brushColorIn - specifies the brush's color
 * @param penWidthIn -  specifies the width of the pen
 * @param penColorIn - Specifies the Color of the pen
 * @param penCapIn - Specifies how the end of the line will cap.
 * @param penJoinIn - Specifies how the pen will join.
 * @param penStyleIn -  The style of the pen.
 * @param xR - The Radius of the circle goemetric object
 */
Circle::Circle(QString idIn,
               Qt::BrushStyle brushStyleIn,
               Qt::GlobalColor brushColorIn,
               double penWidthIn,
               Qt::GlobalColor penColorIn,
               Qt::PenCapStyle penCapIn,
               Qt::PenJoinStyle penJoinIn,
               Qt::PenStyle penStyleIn,
               double xR)
    :Ellipse(   idIn,
               brushStyleIn,
               brushColorIn,
               penWidthIn,
               penColorIn,
               penCapIn,
               penJoinIn,
               penStyleIn,xR,xR){}
		
Circle::Circle(Circle && copy)
{
    this->x = copy.x;
    this->y = copy.y;
    this->xRadius = copy.xRadius;
    this->yRadius = copy.yRadius;
}		
Circle::~Circle()
{
	x=0;
	y=0;
    xRadius=0;
    yRadius=0;
}

void Circle::Print(QTextStream &output)
{
    output << "ShapeId: " << id << endl;
    output << "ShapeType: Circle" << endl;
    output << "ShapeDimensions: " << x - xRadius<< ", " << y - yRadius << ", "
           << xRadius << endl;
    output << "PenColor: " << ColorToString(penColorEdit) << endl;
    output << "PenWidth: " << penWidthEdit << endl;
    output << "PenStyle: " << PenToString(penStyleEdit) << endl;
    output << "PenCapStyle: " << CapToString(penCapEdit) << endl;
    output << "PenJoinStyle: " << JoinToString(PenJoinEdit) << endl;
    output << "BrushColor: " << ColorToString(brushColorEdit) << endl;
    output << "BrushStyle: " << BrushToString(brushStyle) << endl;
}
	
/**
 * @brief Circle::move
 * @param xDes
 * @param yDes
 */
void Circle::move(int xDes, int yDes)
{
	x = xDes;
	y = yDes;
}
void Circle::move(QPoint moveTo)
{
    x = moveTo.x();
    y = moveTo.y();
}
		
void Circle::Resize(double radiusIn)
{
    xRadius = radiusIn;
    yRadius = radiusIn;

}		
void Circle::Draw(Canvas *drawArea)
{
    Ellipse::Draw(drawArea);
}
/**
 * @brief Circle::is_Left_Clicked
 * @param e
 * @return
 */
bool Circle::is_Left_Clicked(QPoint e)
{
	//get the point at which the mouse is clicked and sees if it is contained within this instance of the circle.
	double circleFormula = pow((abs(e.x())-x),2)+pow((abs(e.y())-y),2);
    return (circleFormula<=pow(xRadius,2));
}
