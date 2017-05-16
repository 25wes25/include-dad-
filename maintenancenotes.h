#ifndef MAINTENANCENOTES_H
#define MAINTENANCENOTES_H

#include <QDialog>

namespace Ui {
class MaintenanceNotes;
}

class MaintenanceNotes : public QDialog
{
    Q_OBJECT

public:
    explicit MaintenanceNotes(QWidget *parent = 0);
    ~MaintenanceNotes();

private:
    Ui::MaintenanceNotes *ui;
};

#endif // MAINTENANCENOTES_H
