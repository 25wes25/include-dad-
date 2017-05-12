#include "canvas.h"
#include <QDebug>
Canvas::Canvas(QWidget *parent)
    :QWidget(parent)
{
    setMinimumSize(1000,500);
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
    //connect(this, SIGNAL(setShapeisClicked()),this,SLOT(isClicked()));
    //update();
}
void Canvas::mousePressEvent(QMouseEvent *event)
{
    bool found=false;
    //Change the bounds
    for(int i = area.size()-1 ;i >=0&&!found;i--)
    {
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
void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    bool found=false;
    int i =0;
    for(i =0;i < area.size()&&!found;i++)
    {
        qDebug() << event->pos();
        found = area[i]->is_Left_Clicked(event->pos());
        qDebug() << found;

        if(found)
        {
            area[i]->move(event->pos());
            area[i]->sayHi();
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


