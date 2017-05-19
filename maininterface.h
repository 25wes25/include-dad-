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
    QString GetShapeType(Shape* shape); // Returns a string based of the type of shape
    QString GetShapePerimeterArea(Shape* shape, bool choice); // 0 returns Area, 1 returns Perimeter
    bool HasPerimeterArea(Shape* shape); // Returns false if shape does not have Area and Perimeter

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
    void SortAreaPerimeter(bool choice); // Passed choice of AREA or PERIMTER which are constant bools
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
    const int SHAPE_TABLE_COL_SIZE = 12; // Total collumns for tableWidget
    const bool AREA = 0; // Area bool used for GetShapePerimeterArea(bool choice)
    const bool PERIMETER = 1; // Area bool used for GetShapePerimeterArea(bool choice)

signals:
    void PointInput();
    void Logout();
private slots:
    void saveFile();
    void upDateCurrentShape();
    void Exit();

    void on_ShapeTypeEdit_currentIndexChanged(int index);
    void OnHorizontaAxisEllipseChanged();

    void FullScreenClicked();
    void MaximizedClicked();
    void MaintenanceNotesClicked();
    void TestimonialsClicked();
    void ContactClicked();
	void HelpClicked();

    void on_button_SortID_clicked();
    void on_button_SortArea_clicked();
    void on_button_SortPerimeter_clicked();
    void on_AddObject_clicked();
    void on_DeleteObj_clicked();
};

#endif // MAININTERFACE_H
