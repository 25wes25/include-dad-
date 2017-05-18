#include "text.h"

Text::Text()
{

}

Text::Text(int tempId, QTextStream &input)
{
    id = QString::number(tempId);

    int tempX;
    int tempY;

    Ignore(input, ' ');
    input >> xCorner;

    Ignore(input, ' ');
    input >> yCorner;

    Ignore(input, ' ');
    input >> tempX;
    if (tempX < xCorner)
    {
        swap(xCorner, tempX);
    }
    width = tempX - xCorner;

    Ignore(input, ' ');
    input >> tempY;
    if (tempY < yCorner)
    {
        swap(yCorner, tempY);
    }
    height = tempY - yCorner;

    input.readLine();
    Ignore(input, ' ');
    textString = input.readLine();

    Ignore(input, ' ');
    textColor = StringToColor(input.readLine());

    Ignore(input, ' ');
    alignment = StringToAlign(input.readLine());

    Ignore(input, ' ');
    input >> textPointSize;

    Ignore(input, ' ');
    font = input.readLine();

    Ignore(input, ' ');
    fontStyle = StringToStyle(input.readLine());

    Ignore(input, ' ');
    fontWeight = StringToWeight(input.readLine());
}

void Text::Print(QTextStream &output)
{
     output << "ShapeId: " << id << endl;
     output << "ShapeType: Text" << endl;
     output << "ShapeDimensions: " << xCorner << ", " << yCorner << ", "
            << xCorner + width << ", " << yCorner + height << endl;
     output << "TextString: " << textString << endl;
     output << "TextColor: " << ColorToString(textColor) << endl;
     output << "TextAlignment: " << AlignToString(alignment) << endl;
     output << "TextPointSize: " << textPointSize << endl;
     output << "TextFontFamily: " << font << endl;
     output << "TextFontStyle: " << StyleToString(fontStyle) << endl;
     output << "TextFontWeight: " << WeightToString(fontWeight) << endl;
}

void Text::move(QPoint xy)
{
    xCorner = xy.x() - width/2;
    yCorner = xy.y() - height/2;
}

void Text::move(int x, int y)
{
    xCorner = x;
    yCorner = y;
}

void Text::Draw(Canvas *paintArea)
{
    QPainter painter(paintArea);
    QFont painterFont;
    QPen pen;

    painterFont.setFamily(font);
    painterFont.setPointSize(textPointSize);
    painterFont.setStyle(fontStyle);
    painterFont.setWeight(fontWeight);
    pen.setColor(textColor);

    this->configurePainter(painter);
    painter.save();
    painter.setPen(pen);
    painter.setFont(painterFont);
    painter.drawText(xCorner,yCorner,width,height,alignment|textPointSize|textColor,textString);
    painter.restore();
}
