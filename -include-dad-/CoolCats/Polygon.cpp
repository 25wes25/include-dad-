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

Polygon::~Polygon(){}

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

