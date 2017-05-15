#include "PolyLine.h"
PolyLine::PolyLine():Line(){}

PolyLine::~PolyLine()
{
    Line::Poly.clear();
}

void PolyLine::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    painter.save();
    painter.drawLines(Poly);
    painter.restore();
}
void PolyLine::push_Back_point(QPoint xy)
{
    if(Poly.size()%2==0&&Poly.size()!=0)
    {
        Poly.push_back(Poly[Poly.size()-1]);
        Poly.push_back(xy);
    }
    else
    {
        Poly.push_back(xy);
    }
}
void PolyLine::push_Back_point(int x, int y)
{
    if(Poly.size()%2==0&&Poly.size()!=0)
    {
        Poly.push_back(Poly[Poly.size()-1]);
        Poly.push_back(QPoint(x,y));
    }
    else
    {
        Poly.push_back(QPoint(x,y));
    }
}
bool PolyLine::is_Left_Clicked(QPoint e)
{
    return true;
}
