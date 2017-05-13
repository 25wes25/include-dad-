#include "newnew.h"
#include "ui_newnew.h"
#include <QMovie>
#include <QLabel>

newnew::newnew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newnew)
{
    ui->setupUi(this);
}

void newnew::startMovie(QMovie &gif)
{
    ui->falling->setMovie(&gif);
    QLabel *gifLayer = new QLabel;
    gif.start();
}
newnew::~newnew()
{
    delete ui;
}
