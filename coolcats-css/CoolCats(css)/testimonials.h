#ifndef TESTIMONIALS_H
#define TESTIMONIALS_H

#include <QDialog>

namespace Ui {
class Testimonials;
}

class Testimonials : public QDialog
{
    Q_OBJECT

public:
    explicit Testimonials(QWidget *parent = 0);
    ~Testimonials();

private:
    Ui::Testimonials *ui;
};

#endif // TESTIMONIALS_H
