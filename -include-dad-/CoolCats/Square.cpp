#include "Square.h"

Square::Square():Rectangle(100,100,100,100){}

Square::Square(int tempId, QTextStream &input)
{
    id = QString::number(tempId);

    Ignore(input, ' ');
    input >> x;

    Ignore(input, ' ');
    input >> y;

    Ignore(input, ' ');
    input >> width;
    length = width;

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

void Square::Print(QTextStream &output)
{
    output << "ShapeId: " << id << endl;
    output << "ShapeType: Square" << endl;
    output << "ShapeDimensions: " << x << ", " << y << ", "
           << width<< endl;
    output << "PenColor: " << ColorToString(penColorEdit) << endl;
    output << "PenWidth: " << penWidthEdit << endl;
    output << "PenStyle: " << PenToString(penStyleEdit) << endl;
    output << "PenCapStyle: " << CapToString(penCapEdit) << endl;
    output << "PenJoinStyle: " << JoinToString(PenJoinEdit) << endl;
    output << "BrushColor: " << ColorToString(brushColorEdit) << endl;
    output << "BrushStyle: " << BrushToString(brushStyle) << endl;
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
