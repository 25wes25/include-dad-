#ifndef TEXT_H
#define TEXT_H

#include "shape.h"
#include "canvas.h"

class Text: public Shape
{
public:
    Text();
    Text(int tempId, QTextStream& input);

    virtual void Print(QTextStream& output);
    virtual void move(QPoint xy);
    virtual void move(int x , int y);
    virtual void resize(double x){x=-1;}
    virtual void Draw(Canvas *paintArea);
    virtual bool is_Left_Clicked(QPoint e){return false;}

    // Accessors
    QString GetTextString();
    QString GetTextColor();
    QString GetAlignment();
    QString GetTextSize();
    QString GetFont();
    QString GetFontStyle();
    QString GetFontWeight();

private:
    int               xCorner;
    int               yCorner;
    int               width;
    int               height;
    QString           textString;
    Qt::GlobalColor   textColor;
    Qt::AlignmentFlag alignment;
    int               textPointSize;
    QString           font;
    QFont::Style      fontStyle;
    QFont::Weight     fontWeight;
};

#endif // TEXT_H
