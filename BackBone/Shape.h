
#ifndef SHAPE_H
#define SHAPE_H

#include <string>
enum class ShapeType
{
	LINE,
	POLYLINE,
	POLYGON,
	RECTANGLE,
	ELLIPSE,
	CIRCLE
}
enum class Color
{
	WHITE,
	BLACK,
	RED,
	GREEN,
	BLUE,
	CYAN,
	MAGENTA,
	YELLOW,
	GRAY
}
enum class PenStyle
{
	NO_PEN,
	SOLID_LINE,
	DASH_LINE,
	DOT_LINE,
	DASH_DOT_LINE,
	DASH_DOT_DOT_LINE,
}
enum class PenCapStyle
{
	FLATCAP,
	SQUARECAP,
	ROUNDCAP
}
enum class PenJoinStyle
{
	MITERJOIN,
	BEVELJOIN,
	ROUNDJOIN
}
enum class BrushStyle
{
	SOLID_PATTERN,
	HOR_PATTERN,
	VER_PATTERN,
	NO_BRUSH
}
class Shape
{
	private:
		int id;
		float penwidth;
		ShapeType type; 
		Color penColor;
		Color brushColor
		PenStyle style;
	public:
		virtual ~Shape()=0;
		virtual void draw()=0;
		void setPenJoinStyle(enum PenJoinStyle);
		void setPenCapStyle(enum PenCapStyle);
		void setPenStyle(enum PenStyle);
		void setPenColor(enum Color);
		string getPenJoinStyle();
		string getPenCapStyle();
		string getPenStyle();
		string setPenColor();
}
#endif //Shape_H
