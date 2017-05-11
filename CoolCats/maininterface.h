#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <QMainWindow>
#include "canvas.h"
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

    void saveFile();
};

#endif // MAININTERFACE_H
