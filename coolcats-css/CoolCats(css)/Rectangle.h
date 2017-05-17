#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "canvas.h"
#include "shape.h"

/**
 * @brief The Rectangle class - derives from abstract base class: shape
 */
class Rectangle:public Shape
{
    private:
        int x;
        int y;
        double width;
        double length;

    public:
        Rectangle();
        Rectangle(int x, int y, double w, double l);
        Rectangle(QString idIn,
                  Qt::BrushStyle brushStyleIn,
                  Qt::GlobalColor brushColorIn,
                  double penWidthIn,
                  Qt::GlobalColor penColorIn,
                  Qt::PenCapStyle penCapIn,
                  Qt::PenJoinStyle penJoinIn,
                  Qt::PenStyle penStyleIn,double xR, double yR);
        Rectangle(Rectangle &copy);
        Rectangle(Rectangle &&copy);
        ~Rectangle();

        // Mutators
        void setWidthLength(double w, double l);
        void setWidth(double w);
        void setLength(double l);
        virtual void move(QPoint xy);

        // Accessors
        double getWidth() {return width;}
        double getLength() {return length;}
        double getArea()	{return (length*width);}
        double getPerimeter() {return (length+length+width+width);}
        void Draw(Canvas *drawArea);
        /**
         * @brief is_Left_Clicked - mouse input
         * @param e
         * @return
         */
        virtual bool is_Left_Clicked(QPoint e);
};
#endif
