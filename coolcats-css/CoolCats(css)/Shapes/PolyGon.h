#ifndef POLYGON_H
#define POLYGON_H

#include "PolyLine.h"
/**
 * @brief The Polygon class - derives form the Polyline class
 * set to make polygon shapes
 */
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
    /**
     * @brief push_Back_point - just like class::line we use the
     * pushback virtual functions to obtain the mouse input coordinates
     * on where to create the polyline
     * @param xy
     */
    virtual void push_Back_point(QPoint xy);
    virtual void push_Back_point(int x, int y);
    /**
     * @brief Draw
     * @param drawArea
     */
    virtual void Draw(Canvas *drawArea);
    /**
     * @brief is_Left_Clicked - mouse input
     * @param e
     * @return
     */
    virtual bool is_Left_Clicked(QPoint e);
};
#endif
