#ifndef MAINTENANCENOTES_H
#define MAINTENANCENOTES_H

#include <QMainWindow>
#include "maininterface.h"

namespace Ui {
class MaintenanceNotes;
}

class MaintenanceNotes : public QMainWindow
{
    Q_OBJECT

public:
    explicit MaintenanceNotes(QWidget *parent = 0);
    ~MaintenanceNotes();

private:
    Ui::MaintenanceNotes *ui;
};

#endif // MAINTENANCENOTES_H
