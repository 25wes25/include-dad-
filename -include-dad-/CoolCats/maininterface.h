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
#include "PolyGon.h"
#include "text.h"
#include "Vector.h"
#include "users.h"
#include <QMouseEvent>
#include <QLabel>
#include <QSlider>
#include <QDir>
#include <QTextStream>
using namespace std;
namespace Ui {
class MainInterface;
}

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
    QString GetShapeType(); // Returns a string based of the type of shape
    QString GetShapePerimeterArea(bool choice); // 0 returns Area, 1 returns Perimeter
    bool HasPerimeterArea(const Shape& shape); // Returns false if shape does not have Area and Perimeter
    //Mutators
    void setuserLevel(status level){userLevel=level;}
private:
    //QWidget's shown on screen
    Ui::MainInterface *ui;
    QLabel *tempLabel1;
    QLabel *tempLabel2;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    Canvas *canvas;
    QString saveName;

    //data containsers
    QString CurrentFileName;
    //Other Windows to be opened.
	MaintenanceNotes maintenanceWindow;
    Testimonials testimonialsWindow;
    Contact contactWindow;
	Help helpWindow;
    status userLevel;


    // Private Helper Functions
    void Load();
    void Save();
    void OutputToTable(); // Outputs vector's contents, called after sorts.
	// Sorts
    void SortID();
    void SortArea();
    void SortPerimeter();
    // Extra Credit, compares two shapes area or perimeter based off passed bool.
    bool CompareShapeAreaPerimeter(QString LhsID, QString RhsID, bool choice); // 0 for Area, 1 for Perimeter.
    void CustomSort(); // Extra Credit, sorts by something idk

    //BEGIN FUNCTIONS THE DEFINE THE UI
    void CircleUISet();
    void EllipseUISet();
    void SquareUISet();
    void RectangleUISet();
    void LineUISet();
    void PolyGonUISet();
    void TextUISet();
    void RefreshUI();
    void DisableUI();
    //END FUNCTIONS THE DEFINE THE UI

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
    void changeRectdimensions(double length, double width)
    {
        if(Rectangle* r = dynamic_cast<Rectangle*>(canvas->getCurrentShape()))
        {
            r->setWidthLength(width, length);
        }
    }
    //example. You use the dynamic casting to in the boolean statment to check
    //if the current shape is an instance of a square.
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
    void Logout();
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
