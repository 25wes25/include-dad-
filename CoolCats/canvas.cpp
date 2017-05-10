#include "canvas.h"

Canvas::Canvas(QWidget *parent)
    :QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}
void Canvas::paintEvent(QPaintEvent * /* event */)
{
    for(int i =0 ;i < area.size();i++)
    {
        area[i]->Draw(this);
    }
}
void Canvas::addShape(Shape *add)
{
    area.push_back(add);
}
void Canvas::render()
{
   for(int i=0;i<area.size();i++)
   {
       if(area[i]->isRendered())
       {
           area[i]->Draw(this);
       }
   }
}

