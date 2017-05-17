#ifndef POLYLINE_H
#define POLYLINE_H

#include "Line.h"
/**
 * @brief The PolyLine class - derives from line
 */
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
        /**
         * @brief push_Back_point - see polygon/line documentation of the
         * functions below
         * @param xy
         */
        virtual void push_Back_point(QPoint xy);
        virtual void push_Back_point(int x, int y);
        virtual void moveLastPoint(QPoint e);
        virtual void Draw(Canvas *drawArea);
        /**
         * @brief is_Left_Clicked - mouse input
         * @param e
         * @return
         */
        virtual bool is_Left_Clicked(QPoint e);
};
#endif
