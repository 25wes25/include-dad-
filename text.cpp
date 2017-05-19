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

QString Text::GetTextString()
{
    return textString;
}

QString Text::GetTextColor()
{
    switch(textColor)
    {
    case Qt::black: return "Black";
        break;
    case Qt::white: return "White";
        break;
    case Qt::gray: return "Gray";
        break;
    case Qt::red: return "Red";
        break;
    case Qt::green: return "Green";
        break;
    case Qt::blue: return "Blue";
        break;
    case Qt::yellow: return "Yellow";
        break;
    case Qt::cyan: return "Cyan";
        break;
    case Qt::magenta: return "Magenta";
        break;
    default: return "Error";
        break;
    }
}

QString Text::GetAlignment()
{
    switch(alignment)
    {
    case Qt::AlignTop: return "Top";
        break;
    case Qt::AlignCenter: return "Center";
        break;
    case Qt::AlignBottom: return "Bottom";
        break;
    case Qt::AlignLeft: return "Left";
        break;
    case Qt::AlignRight: return "Right";
        break;
    default: return "Error";
        break;
    }
}

QString Text::GetTextSize()
{
    return QString::number(textPointSize);
}

QString Text::GetFont()
{
    return font;
}

QString Text::GetFontStyle()
{
    switch(fontStyle)
    {
    case QFont::StyleNormal: return "Normal";
        break;
    case QFont::StyleItalic: return "Italic";
        break;
    case QFont::StyleOblique: return "Oblique";
        break;
    default: return "Error";
        break;
    }
}

QString Text::GetFontWeight()
{
    switch(fontWeight)
    {
    case QFont::Thin: return "Thin";
        break;
    case QFont::ExtraLight: return "ExtraLight";
        break;
    case QFont::Light: return "Light";
        break;
    case QFont::Normal: return "Normal";
        break;
    case QFont::Medium: return "Medium";
        break;
    case QFont::DemiBold: return "DemiBold";
        break;
    case QFont::Bold: return "Bold";
        break;
    case QFont::ExtraBold: return "ExtraBold";
        break;
    case QFont::Black: return "Black";
        break;
    default: return "Error";
        break;
    }
}
