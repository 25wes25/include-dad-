#include "canvas.h"
#include <QDebug>
#include "PolyGon.h"
Canvas::Canvas(QWidget *parent)
    :QWidget(parent)
{
    getPointInputs = false;
    currentShape = nullptr;
    setMinimumSize(1000,500);
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
    //update();
}
void Canvas::mousePressEvent(QMouseEvent *event)
{
    bool found=false;
    //Check to make sure mouse inputs are inside the plane
    if(event->x()>0 &&
       event->x()<this->width()&&
       event->y()>0 &&
       event->y() < this->height())
    {
        if(event->button() == Qt::RightButton)
        {
            qDebug() << "stop getting mouse inputs(mouse)";
            getPointInputs=false;
            currentShape = nullptr;
            emit isClicked();
        }
        if(!getPointInputs)
        {
            //parse the array
            for(int i = area.size()-1 ;i >=0&&!found;i--)
            {
                //IF - if you are selecting a shape
                qDebug() << event->pos();
                found = area[i]->is_Left_Clicked(event->pos());
                qDebug() << found;
                if(found)
                {
                    setCurrentShape(area[i]);
                }
                else
                {
                    setCurrentShape(nullptr);
                }
            }
            if(!found)
            {
                setCurrentShape(nullptr);
            }
            emit isClicked();
        }
        //ELSE - you must be getting point inputs for the following classes
        // line, polyline, polygon
        else
        {
            if(Polygon* pg = dynamic_cast<Polygon*>(currentShape))
            {
                pg->push_Back_point(event->pos());

            }
            else if(PolyLine* pl = dynamic_cast<PolyLine*>(currentShape) )
            {
                pl->push_Back_point(event->pos());
            }
            else if(Line* l = dynamic_cast<Line*>(currentShape))
            {
                 if(l->getPointnum()<=1)
                 {
                    l->push_Back_point(event->pos());
                 }
                 if(l->getPointnum()>=2)
                 {
                     qDebug() << "stoping the mouse input";
                     getPointInputs=false;
                 }
            }
        }
    }
    update();
}
void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    bool found=false;
    int i =0;
    if(event->x()>0 &&
       event->x()<this->width()&&
       event->y()>0&&
       event->y()<this->height())
    {
        if(!getPointInputs)
        {
            for(i =area.size()-1;i >=0&&!found;i--)
            {
                qDebug() << event->pos();
                found = area[i]->is_Left_Clicked(event->pos());
                qDebug() << found;

                if(found)
                {
                    area[i]->move(event->pos());
                }
            }
        }
    }
    update();
}


void Canvas::paintEvent(QPaintEvent * /* event */)
{
    qDebug() << "PaintEvent";
    render();
    //this QPainter object draws the background
    QPainter painter(this);
    painter.setPen(palette().dark().color());
    painter.setBrush(Qt::NoBrush);
    painter.save();
    painter.drawRect(0,0,width()-1,height()-1);
    painter.restore();
}
void Canvas::keyPressEvent(QKeyEvent *key)
{
    if(Qt::Key(key->key())==Qt::Key_Return)
    {
        getPointInputs = false;
    }
    qDebug() << (key->text());
    setMouseTracking(false);
}
void Canvas::addShape(Shape *add)
{
    area.push_back(add);
    update();
}
void Canvas::render()
{
   clear();
   for(int i=0;i<area.size();i++)
   {
       qDebug() <<area[i]->isRendered() << "Is the current shape rendering?";
       if(area[i]->isRendered())
       {
           area[i]->Draw(this);
       }
   }
}
void Canvas::clear()
{
    QPainter painter(this);
    painter.eraseRect(0,0,width()-1,height()-1);
}
int Canvas::getShapeNum() const
{
    return area.size();
}
Shape& Canvas::GetShapeAt(int i)
{
    return *area.GetElemAt(i);
}

void Canvas::setShapeList(const Vector<Shape *>& newArea)
{
    area = newArea;
}

Vector<Shape *> &Canvas::getShapeList()
{
    return area;
}

Shape* Canvas::operator[](int x)
{
    return area[x];
}

