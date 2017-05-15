#ifndef POLYLINE_H
#define POLYLINE_H

#include "Line.h"

class PolyLine: public Line
{
	public:
        PolyLine();
        ~PolyLine();
        virtual void push_Back_point(QPoint xy);
        virtual void push_Back_point(int x, int y);
        virtual void Draw(Canvas *drawArea);
        virtual bool is_Left_Clicked(QPoint e);
};
#endif
