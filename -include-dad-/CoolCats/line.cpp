#include "Line.h"
void Line::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    painter.save();
    painter.drawLines(points);
}
void Line::is_Left_Clicked(QPoint &e)
{
    if(points.size()==2)
    {
        int slopex = points[0].x()-points[1].x();
        int slopey = points[0].y()-points[1].y();

        double Slope = ((double)(slopex))/((double)(slopey));
                return true;
    }
}
