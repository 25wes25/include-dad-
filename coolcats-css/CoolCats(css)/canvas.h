
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
/**
 * @brief The Canvas class
 * This class is a modified QWidget that will define an area on which 2d objects will be rendered.
 * It gets and receives mouse inputs for moving object, and mouse inputs for getting points for the
 * geometric shapes: Line, Polyline, PolyGon.
 * Based on which shape is selected it allows the user to change it using dynamic casting of the
 * Shape Pointer and shape specific mutators.
 */

class Canvas :public QWidget
{
    Q_OBJECT
private:
    /**
     * @brief area -  The Vector that represents all of the shape object being rendered
     */
    Vector<Shape*> area;
    /**
     * @brief currentShape - A pointer to the last shape that the user clicked on.
     */
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
    Shape& operator[](int x);
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
