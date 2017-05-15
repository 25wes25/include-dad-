#include "canvas.h"
#include <QDebug>
#include "PolyLine.h"
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
        if(!mousePointInput())
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
            emit isClicked();
        }
        //ELSE - you must be getting point inputs for the following classes
        // line, polyline, polygon
        else
        {
            //Note for later we do not need a polyLine class
            //we just get an array of points and pass it into
            //a regular line class that contains a counter to the number of points located in the array.
            //ex. if(#of points > 2 then the shapetype is a polyline. else it a regular line)
            //polygon must be handled here as well as it receives mouse input coordinate points
        }
    }

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
        else
        {
            if(Line *l = dynamic_cast<Line*>(currentShape))
            {
                l->moveLastPoint(event->pos());
            }
        }
    }
    update();
}


void Canvas::paintEvent(QPaintEvent * /* event */)
{
    qDebug() << "Hello";
    render();
    //this QPainter object draws the background
    QPainter painter(this);
    painter.setPen(palette().dark().color());
    painter.setBrush(Qt::NoBrush);
    painter.save();
    painter.drawRect(0,0,width()-1,height()-1);
    painter.restore();
}
void Canvas::addShape(Shape *add)
{
    area.push_back(add);
}
void Canvas::render()
{
   clear();
   for(int i=0;i<area.size();i++)
   {
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


