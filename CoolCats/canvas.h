
#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include "Vector.h"

#include <string>
#include <QPainter>
#include <QPoint>
#include "shape.h"
#include <QMouseEvent>
using namespace std;


class Canvas :public QWidget
{
    Q_OBJECT
public:
    Canvas(QWidget *parent=0);
    void addShape(Shape* add);
    Shape* getCurrentShape(){return currentShape;}
    void clear();
    void render();
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *);
private:
    Vector<Shape*> area;
    Shape* currentShape;
};


#endif // CANVAS_H
