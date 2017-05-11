#ifndef CREATEUSER_H
#define CREATEUSER_H

#include <QDialog>
#include "Vector.h"

namespace Ui {
class createUser;
}

class createUser : public QDialog
{
    Q_OBJECT

public:
    explicit createUser(QWidget *parent = 0);
    ~createUser();
    bool isUser(string name, string password);

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::createUser *ui;
};

#endif // CREATEUSER_H
