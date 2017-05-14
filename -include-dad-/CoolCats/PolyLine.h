#ifndef POLYLINE_H
#define POLYLINE_H

#include "Line.h"


class PolyLine:public Line
{
	public:
        PolyLine():Line(){}
        ~PolyLine();
        void push_new_point(QPoint &xy);
        void Draw(Canvas *drawArea);
        bool is_Left_Clicked(QPoint &e);
};
#endif
