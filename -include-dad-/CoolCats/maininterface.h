#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <QMainWindow>
#include "canvas.h"
#include "Circle.h"
#include "Square.h"
#include "Line.h"
#include "PolyLine.h"
#include "PolyGon.h"
#include <QMouseEvent>
using namespace std;
namespace Ui {
class MainInterface;
}

class MainInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainInterface(QWidget *parent = 0);
    ~MainInterface();
    void modCurrentShape();
    void newCanvas(int x, int y);
    void loadCanvas(QString filename);
    void changeCurrentShape(QString idIn);
    void changeCurrentShape(bool isRender);
    void changeCurrentShape(Qt::BrushStyle brushStyleIn);
    void changeCurrentShape(Qt::GlobalColor ColorIn);
    void changeCurrentShape(double penwidthIN);
    void changeCurrentShape(Qt::PenCapStyle penCapIn);
    void changeCurrentShape(Qt::PenJoinStyle penJoinIn);
    void changeCurrentShape(Qt::PenStyle penStyleIn);
private:
    Ui::MainInterface *ui;
    Canvas *canvas;
    QString CurrentFileName;

protected slots:
    //The following methods are situational based off of the
    //type of instance of the shape class there is.
    //i.e. rectangle square circle elliser etc.
    //***These will probably need to be slots activated when
    //the ui widget is clicked signal.***
    void changeRectdimensions(double length, double width)
    {
        if(Rectangle* r = dynamic_cast<Rectangle*>(canvas->getCurrentShape()))
        {
            r->setWidthLength(width, length);
        }
    }
    //example. You use the dynamic casting to in the boolean statment to check
    //if the current shape is an instance of a square.
    void changeSquaredimensions(double length)
    {
        if(Square * s = dynamic_cast<Square*>(canvas->getCurrentShape()))
        {
            s->setWidthLength(length,length);
        }
    }
    void changeCircleRadius(double radiusIn)
    {
        if(Circle *c = dynamic_cast<Circle*>(canvas->getCurrentShape()))
        {
            c->Resize(radiusIn);
        }
    }
    void changeEllipseAxis(double xRin, double yRin)
    {
        if(Ellipse *c = dynamic_cast<Ellipse*>(canvas->getCurrentShape()))
        {
            //c->
        }
    }
signals:
    void PointInput();
private slots:
    void saveFile();
    void upDateCurrentShape();


    void on_ShapeTypeEdit_currentIndexChanged(int index);
};

#endif // MAININTERFACE_H
