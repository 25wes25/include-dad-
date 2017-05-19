#ifndef TESTIMONIALS_H
#define TESTIMONIALS_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QDir>

namespace Ui {
class Testimonials;
}

class Testimonials : public QDialog
{
    Q_OBJECT

public:
    explicit Testimonials(QWidget *parent = 0);
    ~Testimonials();
    void Load();
    void Save();

private:
    Ui::Testimonials *ui;
    QString saveLocation;
};

#endif // TESTIMONIALS_H
