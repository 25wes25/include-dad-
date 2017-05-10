#include "maininterface.h"
#include "ui_maininterface.h"

MainInterface::MainInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainInterface)
{
    ui->setupUi(this);
    connect(ui->actionSave,SIGNAL(triggered(bool)),this, SLOT(saveFile()));

}




MainInterface::~MainInterface()
{
    delete ui;
}

void MainInterface::saveFile()
{
    if(CurrentFileName!=nullptr)
    {
        //execute an "update" save - (Save to an exisiting file)
        //Remember QFileDialog
    }
    else
    {
        //Execute a Save As function that prompts for a file name.
    }
}
