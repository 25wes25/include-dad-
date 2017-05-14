#ifndef POLYLINE_H
#define POLYLINE_H

#include "Line.h"

class PolyLine: public Line
{
	public:
        PolyLine();
        ~PolyLine();
        void push_new_point(QPoint xy);
        virtual void Draw(Canvas *drawArea);
        virtual bool is_Left_Clicked(QPoint e);
};
#endif
