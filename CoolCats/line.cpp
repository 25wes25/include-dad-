#include "Line.h"
void Line::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    painter.save();
    painter.drawLines(POLY);
}
void Line::is_Left_Clicked(QPoint &e)
{
    if(POLY.size()==2)
    {
        int slopex = POLY[0].x()-POLY[1].x();
        int slopey = POLY[0].y()-POLY[1].y();

        double Slope = ((double)(slopex))/((double)(slopey));
                return true;
    }
}
