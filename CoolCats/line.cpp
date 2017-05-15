#include "Line.h"
#include "canvas.h"
Line::Line():Shape()
{
    Poly.clear();
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
    Poly.push_back(QPoint(x,y));
}
Line::Line(QVector<QPoint> e)
{
    Poly = e;
}

void Line::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    painter.save();
    painter.drawLines(Poly);
    painter.restore();
}
void Line::push_Back_point(QPoint e)
{
    Poly.push_back(e);

}
void Line::push_Back_point(int x, int y)
{
    Poly.push_back(QPoint(x,y));
}

void Line::moveLastPoint(QPoint e)
{
    Poly[Poly.size()-1]=e;
}

bool Line::is_Left_Clicked(QPoint e)
{
    if(Poly.size()==2)
    {
        int slopex = Poly[0].x()-Poly[1].x();
        int slopey = Poly[0].y()-Poly[1].y();

        double Slope = ((double)(slopex))/((double)(slopey));
        return true;
    }
}
