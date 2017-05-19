#include "textmanip.h"

void Ignore(QTextStream& input, QChar c)
{
    while(!input.atEnd() && input.read(1) != c);
}

Qt::GlobalColor StringToColor(QString color)
{
    Qt::GlobalColor returnColor = Qt::transparent;
    if (color == "white")
    {
        returnColor = Qt::white;
    }
    else if (color == "black")
    {
        returnColor = Qt::black;
    }
    else if (color == "red")
    {
        returnColor = Qt::red;
    }
    else if (color == "green")
    {
        returnColor = Qt::green;
    }
    else if (color == "blue")
    {
        returnColor = Qt::blue;
    }
    else if (color == "cyan")
    {
        returnColor = Qt::cyan;
    }
    else if (color == "magenta")
    {
        returnColor = Qt::magenta;
    }
    else if (color == "yellow")
    {
        returnColor = Qt::yellow;
    }
    else if (color == "gray")
    {
        returnColor = Qt::gray;
    }

    return returnColor;
}

QString ColorToString(Qt::GlobalColor color)
{
    switch(color)
    {
    case Qt::white: return "white";
        break;
    case Qt::black: return "black";
        break;
    case Qt::red:   return "red";
        break;
    case Qt::green: return "green";
        break;
    case Qt::blue:  return "blue";
        break;
    case Qt::cyan:  return "cyan";
        break;
    case Qt::magenta:return "magenta";
        break;
    case Qt::yellow:return "yellow";
        break;
    case Qt::gray:  return "gray";
        break;
    default:    return "transparent";
    };
}


Qt::PenStyle StringToPen(QString penStyle)
{
    if (penStyle == "NoPen")
    {
        return Qt::NoPen;
    }
    else if (penStyle == "SolidLine")
    {
        return Qt::SolidLine;
    }
    else if (penStyle == "DashLine")
    {
        return Qt::DashLine;
    }
    else if (penStyle == "DotLine")
    {
        return Qt::DotLine;
    }
    else if (penStyle == "DashDotLine")
    {
        return Qt::DashDotLine;
    }
    else if (penStyle == "DashDotDotLine")
    {
        return Qt::DashDotDotLine;
    }
    return Qt::NoPen;
}

QString PenToString(Qt::PenStyle penStyle)
{
    switch (penStyle)
    {
    case Qt::SolidLine: return "SolidLine";
        break;
    case Qt::DashLine: return   "DashLine";
        break;
    case Qt::DotLine: return "DotLine";
        break;
    case Qt::DashDotLine: return "DashDotLine";
        break;
    case Qt::DashDotDotLine: return "DashDotDotLine";
        break;
    default: return "NoPen";
    }
}

Qt::PenCapStyle StringToCap(QString capStyle)
{
    if (capStyle == "SquareCap")
    {
        return Qt::SquareCap;
    }
    else if (capStyle == "RoundCap")
    {
        return Qt::RoundCap;
    }
    else
    {
        return Qt::FlatCap;
    }
}

QString CapToString(Qt::PenCapStyle capStyle)
{
    switch (capStyle)
    {
    case Qt::SquareCap: return "SquareCap";
        break;
    case Qt::RoundCap: return "RoundCap";
        break;
    default: return "FlatCap";
    }
}

Qt::PenJoinStyle StringToJoin(QString joinStyle)
{
    if (joinStyle == "BevelJoin")
    {
        return Qt::BevelJoin;
    }
    else if (joinStyle == "RoundJoin")
    {
        return Qt::RoundJoin;
    }
    else
    {
        return Qt::MiterJoin;
    }
}

QString JoinToString(Qt::PenJoinStyle joinStyle)
{
    switch (joinStyle)
    {
    case Qt::BevelJoin: return "BevelJoin";
        break;
    case Qt::RoundJoin: return "RoundJoin";
        break;
    default: return "MiterJoin";
    }
}

Qt::BrushStyle StringToBrush(QString brushStyle)
{
    if (brushStyle == "HorPattern")
    {
        return Qt::HorPattern;
    }
    else if (brushStyle == "VerPattern")
    {
        return Qt::VerPattern;
    }
    else if (brushStyle == "NoBrush")
    {
        return Qt::NoBrush;
    }
    else
    {
        return Qt::SolidPattern;
    }
}

QString BrushToString(Qt::BrushStyle brushStyle)
{
    switch (brushStyle)
    {
    case Qt::HorPattern: return "HorPattern";
        break;
    case Qt::VerPattern: return "VerPattern";
        break;
    case Qt::NoBrush: return "NoBrush";
        break;
    default: return "SolidPattern";
    }
}


Qt::AlignmentFlag StringToAlign(QString alignment)
{
    if(alignment == "AlignRight")
    {
        return Qt::AlignRight;
    }
    else if (alignment == "AlignCenter")
    {
        return Qt::AlignCenter;
    }
    else if (alignment == "AlignTop")
    {
        return Qt::AlignTop;
    }
    else if (alignment == "AlignBottom")
    {
        return Qt::AlignBottom;
    }
    else
    {
        return Qt::AlignLeft;
    }
}

QString AlignToString(Qt::AlignmentFlag alignment)
{
    switch(alignment)
    {
    case Qt::AlignRight: return "AlignRight";
        break;
    case Qt::AlignCenter: return "AlignCenter";
        break;
    case Qt::AlignTop: return "AlignTop";
        break;
    case Qt::AlignBottom: return "AlignBottom";
        break;
    default: return "AlignLeft";
    }
}

QFont::Style StringToStyle(QString style)
{
    if (style == "StyleItalic")
    {
        return QFont::StyleItalic;
    }
    else if (style == "StyleOblique")
    {
        return QFont::StyleOblique;
    }
    else
    {
        return QFont::StyleNormal;
    }
}

QString StyleToString(QFont::Style style)
{
    switch(style)
    {
    case QFont::StyleItalic: return "StyleItalic";
        break;
    case QFont::StyleOblique: return "StyleOblique";
        break;
    default: return "StyleNormal";
    }
}

QFont::Weight StringToWeight(QString weight)
{
    if (weight == "Bold")
    {
        return QFont::Bold;
    }
    else if (weight == "Thin")
    {
        return QFont::Thin;
    }
    else if (weight == "Light")
    {
        return QFont::Light;
    }
    else
    {
        return QFont::Normal;
    }
}

QString WeightToString(QFont::Weight weight)
{
    switch (weight)
    {
    case QFont::Bold: return "Bold";
        break;
    case QFont::Thin: return "Thin";
        break;
    case QFont::Light: return "Light";
        break;
    default: return "Normal";
        break;
    }
}
