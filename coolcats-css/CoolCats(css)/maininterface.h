#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <QMainWindow>
#include "maintenancenotes.h"
#include "testimonials.h"
#include "contact.h"
#include "help.h"
#include "canvas.h"
#include "Circle.h"
#include "Square.h"
#include "Line.h"
#include "PolyLine.h"
#include "PolyGon.h"
#include <QMouseEvent>
#include <QLabel>
#include <QSlider>
using namespace std;
namespace Ui {
class MainInterface;
}
/**
 * @brief The MainInterface class hold all of the shape classes, handles the changing
 * of shapes via public methods; changing all of the pen and brush styles as well as method
 * that returns the area/perimeter of said shapes
 */
class MainInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainInterface(QWidget *parent = 0);
    ~MainInterface();
    void modCurrentShape();
    void newCanvas(int x, int y);
    void loadCanvas(QString filename);
    void changeCurrentShape(QString idIn);
    void changeCurrentShape(bool isRender);
    void changeCurrentShape(Qt::BrushStyle brushStyleIn);
    void changeCurrentShape(Qt::GlobalColor ColorIn);
    void changeCurrentShape(double penwidthIN);
    void changeCurrentShape(Qt::PenCapStyle penCapIn);
    void changeCurrentShape(Qt::PenJoinStyle penJoinIn);
    void changeCurrentShape(Qt::PenStyle penStyleIn);

    // Accessors
    /**
     * @brief GetShapeType - Returns a string based of the type of shape
     * @return
     */
    QString GetShapeType(); // Returns a string based of the type of shape
    /**
     * @brief GetShapePerimeterArea - 0 returns Area, 1 returns Perimeter
     * @param choice
     * @return
     */
    QString GetShapePerimeterArea(bool choice); // 0 returns Area, 1 returns Perimeter
    /**
     * @brief HasPerimeterArea - Returns false if shape does not have Area and Perimeter
     * @param shape
     * @return
     */
    bool HasPerimeterArea(const Shape& shape); // Returns false if shape does not have Area and Perimeter

private:
    //QWidget's shown on screen
    Ui::MainInterface *ui;
    QLabel *tempLabel1;
    QLabel *tempLabel2;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    /**
     * @brief canvas - pointer to a canvas object holding
     * the vector of shapes
     */
    Canvas *canvas;

    //data containsers
    QString CurrentFileName;
    //Other Windows to be opened.
	MaintenanceNotes maintenanceWindow;
    Testimonials testimonialsWindow;
    Contact contactWindow;
	Help helpWindow;


    // Private Helper Functions
    /**
     * @brief OutputToTable - Outputs vector's contents, called after sorts.
     */
    void OutputToTable(); // Outputs vector's contents, called after sorts.
	// Sorts
    void SortID();
    void SortArea();
    void SortPerimeter();
    // Extra Credit, compares two shapes area or perimeter based off passed bool.
    /**
     * @brief CompareShapeAreaPerimeter - Extra Credit, compares two shapes area or perimeter based off passed bool.
     * @param LhsID
     * @param RhsID
     * @param choice
     * @return
     */
    bool CompareShapeAreaPerimeter(QString LhsID, QString RhsID, bool choice); // 0 for Area, 1 for Perimeter.
    /**
     * @brief CustomSort - Extra credit: sorts by different sorting algorithms
     */
    void CustomSort(); // Extra Credit, sorts by something idk

    void CircleUISet();
    void EllipseUISet();
    void SquareUISet();
    void RectangleUISet();
    void LineUISet();
    void PolyGonUISet();
    void TextUISet();
    void RefreshUI();


    // Constant Integers
    const int SHAPE_TABLE_COL_SIZE = 11; // Total collumns for tableWidget
    const bool AREA = 0; // Area bool used for GetShapePerimeterArea(bool choice)
    const bool PERIMETER = 1; // Area bool used for GetShapePerimeterArea(bool choice)


protected slots:
    //The following methods are situational based off of the
    //type of instance of the shape class there is.
    //i.e. rectangle square circle elliser etc.
    //***These will probably need to be slots activated when
    //the ui widget is clicked signal.***
    /**
     * @brief changeRectdimensions -
     * The following methods are situational based off of the
     * type of instance of the shape class there is.
     *i.e. rectangle square circle elliser etc.
     * These will probably need to be slots activated when
     *the ui widget is clicked signal
     * @param length
     * @param width
     */
    void changeRectdimensions(double length, double width)
    {
        if(Rectangle* r = dynamic_cast<Rectangle*>(canvas->getCurrentShape()))
        {
            r->setWidthLength(width, length);
        }
    }
    //example. You use the dynamic casting to in the boolean statment to check
    //if the current shape is an instance of a square.
    /**
     * @brief changeSquaredimensions - example. You use the dynamic casting to in the boolean statment to check
     *if the current shape is an instance of a square.
     * @param length
     */
    void changeSquaredimensions(double length)
    {
        if(Square * s = dynamic_cast<Square*>(canvas->getCurrentShape()))
        {
            s->setWidthLength(length,length);
        }
    }
    void changeCircleRadius(double radiusIn)
    {
        if(Circle *c = dynamic_cast<Circle*>(canvas->getCurrentShape()))
        {
            c->Resize(radiusIn);
        }
    }
    void changeEllipseAxis(double xRin, double yRin)
    {
        if(Ellipse *e = dynamic_cast<Ellipse*>(canvas->getCurrentShape()))
        {
            //c->
        }
    }

signals:
    void PointInput();
private slots:
    void saveFile();
    void upDateCurrentShape();
    void Exit();

    void on_ShapeTypeEdit_currentIndexChanged(int index);
    void OnHorizontaAxisEllipseChanged();

    void MaintenanceNotesClicked();
    void TestimonialsClicked();
    void ContactClicked();
	void HelpClicked();

    void on_button_SortID_clicked();
    void on_button_SortArea_clicked();
    void on_button_SortPerimeter_clicked();
    void on_AddObject_clicked();
};

#endif // MAININTERFACE_H
