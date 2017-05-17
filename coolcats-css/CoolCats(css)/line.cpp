#include "Line.h"
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
Line::Line(QPolygon e)
{
    points = e;
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

void Line::moveLastPoint(QPoint e)
{
    if(point_counter>=2)
    {
        points.setPoint(point_counter-1,e);
    }
}

bool Line::is_Left_Clicked(QPoint e)
{
    return false;
    //I got the alg in my branch
}
