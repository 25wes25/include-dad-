#include "PolyLine.h"
PolyLine::PolyLine():Line(){}
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
    point_counter++;
    points << QPoint(x,y);
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
