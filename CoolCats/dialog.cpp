#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    //sets the LAYERS TABLE's WIDTH
    ui->layerTable->setColumnWidth(0,25);
    ui->layerTable->setColumnWidth(1,50);
    ui->layerTable->insertRow(0);
}

Dialog::~Dialog()
{
    delete ui;
}
