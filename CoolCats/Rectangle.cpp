#include "Rectangle.h"
#include "canvas.h"
#include <QPainter>
Rectangle::Rectangle():x{25},y{25},width{10},length{10},Shape(){}

Rectangle::Rectangle(int tempId, QTextStream &input)
{
    id = QString::number(tempId);

    int tempX;
    int tempY;

    Ignore(input, ' ');
    input >> x;

    Ignore(input, ' ');
    input >> y;

    Ignore(input, ' ');
    input >> tempX;
    if (tempX < x)
    {
        swap(tempX,x);
    }
    width = tempX - x;

    Ignore(input, ' ');
    input >> tempY;
    if (tempY < y)
    {
        swap(tempY,y);
    }
    length = tempY - y;

    qDebug() << x << y << width << length;

    input.readLine();
    Ignore(input, ' ');
    penColorEdit = StringToColor(input.readLine());

    Ignore(input, ' ');
    input >> penWidthEdit;

    Ignore(input, ' ');
    penStyleEdit = StringToPen(input.readLine());

    Ignore(input, ' ');
    penCapEdit = StringToCap(input.readLine());

    Ignore(input, ' ');
    PenJoinEdit = StringToJoin(input.readLine());

    Ignore(input, ' ');
    brushColorEdit = StringToColor(input.readLine());

    Ignore(input, ' ');
    brushStyle = StringToBrush(input.readLine());
}
		
Rectangle::Rectangle(int xIn, int yIn, double w, double l):x{xIn},y{yIn},width{w},length{l},Shape(){}

Rectangle::Rectangle(QString idIn,
                     Qt::BrushStyle brushStyleIn,
                     Qt::GlobalColor brushColorIn,
                     double penWidthIn,
                     Qt::GlobalColor penColorIn,
                     Qt::PenCapStyle penCapIn,
                     Qt::PenJoinStyle penJoinIn,
                     Qt::PenStyle penStyleIn,
                     double xR,
                     double yR):
    Shape(idIn,
          true,
          brushStyleIn,
          penColorIn,
          penWidthIn,
          penCapIn,
          penJoinIn,
          brushColorIn,
          penStyleIn),width{xR},length{yR},x{200},y{300}{}
Rectangle::Rectangle(Rectangle &copy):x{copy.x},y{copy.y},width{copy.width},length{copy.length}{}

Rectangle::Rectangle(Rectangle &&copy)
{
    this->x = copy.x;
    this->y = copy.y;
    this->length = copy.length;
    this->width=copy.width;
}

Rectangle::~Rectangle()
{
    x =0;
    y = 0;
    width = 0;
    length = 0;
}

void Rectangle::setWidthLength(double w, double l)
{
    width = w;
    length = l;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double l)
{
    length = l;
}
void Rectangle::move(QPoint xy)
{
    x=xy.x() - width/2;
    y=xy.y() - length/2;
}

void Rectangle::Print(QTextStream &output)
{
    output << "ShapeId: " << id << endl;
    output << "ShapeType: Rectangle" << endl;
    output << "ShapeDimensions: " << x << ", " << y << ", "
           << x + width << ", " << y + length << endl;
    output << "PenColor: " << ColorToString(penColorEdit) << endl;
    output << "PenWidth: " << penWidthEdit << endl;
    output << "PenStyle: " << PenToString(penStyleEdit) << endl;
    output << "PenCapStyle: " << CapToString(penCapEdit) << endl;
    output << "PenJoinStyle: " << JoinToString(PenJoinEdit) << endl;
    output << "BrushColor: " << ColorToString(brushColorEdit) << endl;
    output << "BrushStyle: " << BrushToString(brushStyle) << endl;
}

void Rectangle::Draw(Canvas *drawArea)
{
    QPainter painter(drawArea);
    configurePainter(painter);
    painter.save();
    painter.drawRect(x,y,width,length);
    painter.restore();
}
bool Rectangle::is_Left_Clicked(QPoint e)
{
    return  (x+width>e.x()&& //Check right side
             x-width<e.x()&& //Check left side
             y+length>e.y()&&//Check top
             y-length<e.y());//CheckBottom
}

