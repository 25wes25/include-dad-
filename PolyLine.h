#ifndef POLYLINE_H
#define POLYLINE_H

#include "Line.h"

class PolyLine: public Line
{
	public:
        PolyLine();
        PolyLine(QString idIn,
                 Qt::BrushStyle brushStyleIn,
                 Qt::GlobalColor brushColorIn,
                 double penWidthIn,
                 Qt::GlobalColor penColorIn,
                 Qt::PenCapStyle penCapIn,
                 Qt::PenJoinStyle penJoinIn,
                 Qt::PenStyle penStyleIn);
        ~PolyLine();
        virtual void push_Back_point(QPoint xy);
        virtual void push_Back_point(int x, int y);
        virtual void moveLastPoint(QPoint e);
        virtual void Draw(Canvas *drawArea);
        virtual bool is_Left_Clicked(QPoint e);
};
#endif
