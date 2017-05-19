#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
    count = 0;
}

Help::~Help()
{
    delete ui;
}

void Help::on_next_clicked()
{
    count++;
    switch(count)
    {
        case 0: {
                    QPixmap Help_Login(":/Images/Help_Login.jpg");
                    ui->image->setPixmap(Help_Login);
                }
            break;
        case 1: {
                    QPixmap Help_Canvas(":/Images/Help_Canvas.jpg");
                    ui->image->setPixmap(Help_Canvas);
                    ui->previous->setEnabled(true);
                }
            break;
        case 2: {
                    QPixmap Help_Table(":/Images/Help_Table.jpg");
                    ui->image->setPixmap(Help_Table);
                }
            break;
        case 3: {
                    QPixmap Help_File(":/Images/Help_File.jpg");
                    ui->image->setPixmap(Help_File);
                }
            break;
        case 4: {
                    QPixmap Help_Edit(":/Images/Help_Edit.jpg");
                    ui->image->setPixmap(Help_Edit);
                }
            break;
        case 5: {
                    QPixmap Help_View(":/Images/Help_View.jpg");
                    ui->image->setPixmap(Help_View);
                }
            break;
        case 6: {
                    QPixmap Help_About(":/Images/Help_About.jpg");
                    ui->image->setPixmap(Help_About);
                }
            break;
        case 7: {
                QPixmap Help_Help(":/Images/Help_Help.jpg");
                ui->image->setPixmap(Help_Help);
                ui->next->setEnabled(false);
                }
            break;
    }
}

void Help::on_previous_clicked()
{
    count--;
    switch(count)
    {
        case 0: {
                    QPixmap Help_Login(":/Images/Help_Login.jpg");
                    ui->image->setPixmap(Help_Login);
                    ui->previous->setEnabled(false);
                }
            break;
        case 1: {
                    QPixmap Help_Canvas(":/Images/Help_Canvas.jpg");
                    ui->image->setPixmap(Help_Canvas);
                }
            break;
        case 2: {
                    QPixmap Help_Table(":/Images/Help_Table.jpg");
                    ui->image->setPixmap(Help_Table);
                }
            break;
        case 3: {
                    QPixmap Help_File(":/Images/Help_File.jpg");
                    ui->image->setPixmap(Help_File);
                }
            break;
        case 4: {
                    QPixmap Help_Edit(":/Images/Help_Edit.jpg");
                    ui->image->setPixmap(Help_Edit);
                }
            break;
        case 5: {
                    QPixmap Help_View(":/Images/Help_View.jpg");
                    ui->image->setPixmap(Help_View);
                }
            break;
        case 6: {
                    QPixmap Help_About(":/Images/Help_About.jpg");
                    ui->image->setPixmap(Help_About);
                    ui->next->setEnabled(true);
                }
            break;
        case 7: {
                QPixmap Help_Help(":/Images/Help_Help.jpg");
                ui->image->setPixmap(Help_Help);
                }
            break;
    }
}
