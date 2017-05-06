
#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <QPainter>
#include <QPoint>
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
class Shape:public QPainter
{
	private:
		int id;
		bool isRender;
		//float penwidth;
		//ShapeType type; 
		//Color penColor;
		//Color brushColor
		//PenStyle style;
	public:
		Shape(int idIn, bool isRender, int penColorEdit, int penWidthEdit, int penCapEdit,
				int PenJoinEdit, int brushColorEdit, int penStyleEdit)
		{
			setBrush()
		}
		
		virtual ~Shape()=0;
		virtual void draw()=0;
		virtual bool is_Left_Clicked(Qpoint &e);
		
}
#endif //Shape_H
