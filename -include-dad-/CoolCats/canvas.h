
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
private:
    Vector<Shape*> area;
    Shape* currentShape;
    bool getPointInputs;
public:
    Canvas(QWidget *parent=0);
    void addShape(Shape* add);
    Shape* getCurrentShape(){return currentShape;}
    void setCurrentShape(Shape* e){currentShape = e;}
    void clear();
    void render();
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *);

signals:
  void isClicked();
public slots:
  bool mousePointInput(){return true;}



};


#endif // CANVAS_H
