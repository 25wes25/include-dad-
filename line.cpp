#include "Line.h"
#include "Circle.h"
#include "canvas.h"
Line::Line():Shape()
{
}
Line::Line(QString idIn,
           Qt::BrushStyle brushStyleIn,
           Qt::GlobalColor brushColorIn,
           double penWidthIn,
           Qt::GlobalColor penColorIn,
           Qt::PenCapStyle penCapIn,
           Qt::PenJoinStyle penJoinIn,
           Qt::PenStyle penStyleIn,
           int x,
           int y)
    :Shape(idIn,true,brushStyleIn,penColorIn,penWidthIn,penCapIn,penJoinIn,brushColorIn,penStyleIn)
{


    point_counter=1;
    points <<QPoint(x,y);
}
Line::Line(QString idIn,
           Qt::BrushStyle brushStyleIn,
           Qt::GlobalColor brushColorIn,
           double penWidthIn,
           Qt::GlobalColor penColorIn,
           Qt::PenCapStyle penCapIn,
           Qt::PenJoinStyle penJoinIn,
           Qt::PenStyle penStyleIn)
    :Shape(idIn,true,brushStyleIn,penColorIn,penWidthIn,penCapIn,penJoinIn,brushColorIn,penStyleIn),
      point_counter{0}{}

void Line::Print(QTextStream &output)
{
    output << "ShapeId: " << id << endl;
    output << "ShapeType: Line" << endl;
    output << "ShapeDimensions: " << points[0].x() << ", " << points[0].y() << ", "
           << points[1].x() << ", " << points[1].y() << endl;
    output << "PenColor: " << ColorToString(penColorEdit) << endl;
    output << "PenWidth: " << penWidthEdit << endl;
    output << "PenStyle: " << PenToString(penStyleEdit) << endl;
    output << "PenCapStyle: " << CapToString(penCapEdit) << endl;
    output << "PenJoinStyle: " << JoinToString(PenJoinEdit) << endl;
}

Line::Line(QPolygon e)
{
    points = e;
}

Line::Line(int newId, QTextStream &input)
{
    id = QString::number(newId);
    point_counter = 0;
    points.clear();


    int tempX;
    int tempY;

    Ignore(input, ' ');
    input >> tempX;
    Ignore(input, ' ');
    input >> tempY;
    push_Back_point(tempX, tempY);

    Ignore(input, ' ');
    input >> tempX;
    Ignore(input, ' ');
    input >> tempY;
    push_Back_point(tempX, tempY);
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
}

void Line::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    qDebug() << "Line::draw";
    configurePainter(painter);
    painter.save();
    painter.drawLines(points);
    painter.restore();
}
void Line::push_Back_point(QPoint e)
{
    point_counter++;
    points << e;
}
void Line::push_Back_point(int x, int y)
{
    point_counter++;
    points << QPoint(x,y);
}

void Line::movevertex(QPoint e)
{
//    int i =0;
//    Circle *tempPointer;
//    bool found = false;
//    for( i=0 ; (i < point_counter && !found); i++)
//    {
//        tempPointer = new Circle(points.point(i).x(),points.point(i).y(),GetPenWidthInt());
//        found = tempPointer->is_Left_Clicked(e);
//    }
//    points.setPoint(i,e);
}

bool Line::is_Left_Clicked(QPoint e)
{
//    int i =0;
//    Circle *tempPointer;
//    bool found = false;
//    if(point_counter>1)
//    {
//    while(i<point_counter&&!found)
//    {
//        tempPointer = new Circle(points.point(i).x(),points.point(i).y(),GetPenWidthInt());
//        found = tempPointer->is_Left_Clicked(e);
//        i++;

//    }
//    return found;
//    }
    return false;
}
