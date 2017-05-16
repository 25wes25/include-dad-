
#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include "Vector.h"

#include <string>
#include <QPainter>
#include <QPoint>
#include "shape.h"
#include <QMouseEvent>
#include <QKeyEvent>
#include <QDebug>
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
    int getShapeNum() const;
    void setCurrentShape(Shape* e){currentShape = e;}

    void clear();
    void render();
    operator[](int x) const;
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *key);

signals:
  void isClicked();
public slots:
  void mousePointInput(){getPointInputs = !getPointInputs;
                        qDebug() << "Slot activating"<<getPointInputs;}



};


#endif // CANVAS_H
