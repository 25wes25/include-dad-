#include "maintenancenotes.h"
#include "ui_maintenancenotes.h"

MaintenanceNotes::MaintenanceNotes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MaintenanceNotes)
{
    ui->setupUi(this);
}

MaintenanceNotes::~MaintenanceNotes()
{
    delete ui;
}
