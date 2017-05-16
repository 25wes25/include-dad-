#ifndef POLYGON_H
#define POLYGON_H

#include "PolyLine.h"
class Polygon: public PolyLine
{

public:
	//Defining datamember structure later
    Polygon();
    Polygon( QString idIn,
             Qt::BrushStyle brushStyleIn,
             Qt::GlobalColor brushColorIn,
             double penWidthIn,
             Qt::GlobalColor penColorIn,
             Qt::PenCapStyle penCapIn,
             Qt::PenJoinStyle penJoinIn,
             Qt::PenStyle penStyleIn);
    ~Polygon();
    virtual void push_Back_point(QPoint xy);
    virtual void push_Back_point(int x, int y);
    virtual void Draw(Canvas *drawArea);
    virtual bool is_Left_Clicked(QPoint e);
};
#endif
