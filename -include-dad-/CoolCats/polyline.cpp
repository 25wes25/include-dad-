#include "PolyLine.h"
PolyLine::PolyLine():Line(){}

PolyLine::PolyLine(int tempId, QTextStream &input)
{
    id = QString::number(tempId);
    point_counter = 0;
    points.clear();

    int tempX;
    int tempY;

    do
    {
        Ignore(input, ' ');
        input >> tempX;
        Ignore(input, ' ');
        input >> tempY;
        push_Back_point(tempX, tempY);
    }while(input.read(1) == ',');

    Ignore(input, ':');
    input.read(1);
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
PolyLine::PolyLine(QString idIn,
                   Qt::BrushStyle brushStyleIn,
                   Qt::GlobalColor brushColorIn,
                   double penWidthIn,
                   Qt::GlobalColor penColorIn,
                   Qt::PenCapStyle penCapIn,
                   Qt::PenJoinStyle penJoinIn,
                   Qt::PenStyle penStyleIn)
    :Line(idIn,brushStyleIn,brushColorIn,penWidthIn,penColorIn,penCapIn,penJoinIn,penStyleIn){}
PolyLine::~PolyLine()
{

}

void PolyLine::Print(QTextStream &output)
{
    output << "ShapeId: " << id << endl;
    output << "ShapeType: Polyline" << endl;
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
}

void PolyLine::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    configurePainter(painter);
    qDebug() << "PolyLine::draw";
    painter.save();
    painter.drawLines(points);
    painter.restore();
}
void PolyLine::push_Back_point(QPoint xy)
{
//    point_counter++;
    qDebug() << "Polyline::pushback";
//    points << xy;
//    qDebug() << points.point(point_counter-1);
    if(point_counter>=2)
    {
        points << points.point(point_counter-1);
        points << xy;
        point_counter+=2;
    }
    else
    {
        points <<xy;
        point_counter++;
    }
        qDebug() << points.point(point_counter-1);

}
void PolyLine::push_Back_point(int x, int y)
{
    QPoint xy(x,y);
    if(point_counter>=2)
    {
        points << points.point(point_counter-1);
        points << xy;
        point_counter+=2;
    }
    else
    {
        points <<xy;
        point_counter++;
    }
}
void PolyLine::moveLastPoint(QPoint e)
{
    if(point_counter>=2)
    {
        points.setPoint(point_counter-1,e);
    }

}
bool PolyLine::is_Left_Clicked(QPoint e)
{
    //I got alg in San's branch
}
