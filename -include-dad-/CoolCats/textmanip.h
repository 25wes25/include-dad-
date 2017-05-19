#ifndef TEXTMANIP_H
#define TEXTMANIP_H


#include <QTextStream>
#include <QString>
#include <QFont>

void Ignore(QTextStream& input, QChar c);

Qt::GlobalColor StringToColor(QString color);
QString ColorToString(Qt::GlobalColor color);

Qt::PenStyle StringToPen(QString penStyle);
QString PenToString(Qt::PenStyle penStyle);

Qt::PenCapStyle StringToCap(QString capStyle);
QString CapToString(Qt::PenCapStyle capStyle);

Qt::PenJoinStyle StringToJoin(QString joinStyle);
QString JoinToString(Qt::PenJoinStyle joinStyle);

Qt::BrushStyle StringToBrush(QString brushStyle);
QString BrushToString(Qt::BrushStyle brushStyle);

Qt::AlignmentFlag StringToAlign(QString alignment);
QString AlignToString(Qt::AlignmentFlag alignment);

QFont::Style StringToStyle(QString style);
QString StyleToString(QFont::Style style);

QFont::Weight StringToWeight(QString weight);
QString WeightToString(QFont::Weight weight);

#endif // TEXTMANIP_H
