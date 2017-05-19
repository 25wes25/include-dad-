#include "PolyGon.h"

Polygon::Polygon(QString idIn,
                 Qt::BrushStyle brushStyleIn,
                 Qt::GlobalColor brushColorIn,
                 double penWidthIn,
                 Qt::GlobalColor penColorIn,
                 Qt::PenCapStyle penCapIn,
                 Qt::PenJoinStyle penJoinIn,
                 Qt::PenStyle penStyleIn)
:PolyLine(idIn,brushStyleIn,brushColorIn,penWidthIn,penColorIn,penCapIn,penJoinIn,penStyleIn)
{}
Polygon::Polygon():PolyLine(){}

Polygon::Polygon(int tempId, QTextStream &input) : PolyLine(tempId, input)
{
    Ignore(input, ' ');
    brushColorEdit = StringToColor(input.readLine());

    Ignore(input, ' ');
    brushStyle =  StringToBrush(input.readLine());
}

Polygon::~Polygon(){}

void Polygon::Print(QTextStream &output)
{
    output << "ShapeId: " << id << endl;
    output << "ShapeType: Polygon" << endl;
    output << "ShapeDimensions: ";
    for (int i = 0; i < points.size(); i++)
    {
        output << points[i].x() << ", " << points[i].y();
        i++;
        if (i != points.size() - 1)
        {
            output << ", ";
        }
        else
        {
            output << ", " << points[i].x() << ", " << points[i].y();
        }
    }
    output << endl;
    output << "PenColor: " << ColorToString(penColorEdit) << endl;
    output << "PenWidth: " << penWidthEdit << endl;
    output << "PenStyle: " << PenToString(penStyleEdit) << endl;
    output << "PenCapStyle: " << CapToString(penCapEdit) << endl;
    output << "PenJoinStyle: " << JoinToString(PenJoinEdit) << endl;
    output << "BrushColor: " << ColorToString(brushColorEdit) << endl;
    output << "BrushStyle: " << BrushToString(brushStyle) << endl;
}

void Polygon::push_Back_point(QPoint xy)
{
    PolyLine::push_Back_point(xy);
}
void Polygon::push_Back_point(int x, int y)
{
    point_counter++;
    points << QPoint(x,y);
}
void Polygon::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    configurePainter(painter);
    painter.save();
    painter.drawPolygon(points);
    painter.restore();
}
bool Polygon::is_Left_Clicked(QPoint e)
{
    return points.containsPoint(e,Qt::OddEvenFill);
}

