#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <QMainWindow>
#include "canvas.h"
#include "Circle.h"
#include "Square.h"
#include "Line.h"
#include <QMouseEvent>
namespace Ui {
class MainInterface;
}

class MainInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainInterface(QWidget *parent = 0);
    ~MainInterface();

private:
    Ui::MainInterface *ui;
    Canvas *canvas;
    QString CurrentFileName;
    void modCurrentShape();
    void newCanvas(int x, int y);
    void loadCanvas(QString filename);

private slots:
    void saveFile();
    void upDateCurrentShape();


};

#endif // MAININTERFACE_H
