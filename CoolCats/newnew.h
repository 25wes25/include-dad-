#ifndef NEWNEW_H
#define NEWNEW_H

#include <QDialog>

namespace Ui {
class newnew;
}

class newnew : public QDialog
{
    Q_OBJECT

public:
    explicit newnew(QWidget *parent = 0);
    void startMovie(QMovie &gif);
    ~newnew();

private:
    Ui::newnew *ui;
};

#endif // NEWNEW_H
