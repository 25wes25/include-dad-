#include "testimonials.h"
#include "ui_testimonials.h"

Testimonials::Testimonials(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Testimonials)
{
    ui->setupUi(this);
    QDir SavePath = QDir::currentPath();

    while (SavePath.dirName() != "-include-dad-" && SavePath.cdUp());
    if(!SavePath.cd("Saves"))
    {
        SavePath.mkdir("Saves");
        SavePath.cd("Saves");
    }
    saveLocation = SavePath.path();

    Load();
}

Testimonials::~Testimonials()
{
    Save();
    delete ui;
}

void Testimonials::Load()
{
    QFile inFile(saveLocation + "/Testimonials.txt");
    inFile.open(QIODevice::ReadOnly);
    QTextStream input(&inFile);

    ui->TestimonialInput->insertPlainText(input.readAll());
}

void Testimonials::Save()
{
    QFile outFile(saveLocation + "/Testimonials.txt");
    outFile.remove();
    outFile.open(QIODevice::WriteOnly);
    QTextStream output(&outFile);

    output << ui->TestimonialInput->toPlainText();
}
