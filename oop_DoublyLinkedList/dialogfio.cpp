#include "dialogfio.h"
#include "ui_dialogfio.h"

dialogFIO::dialogFIO(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogFIO)
{
    ui->setupUi(this);
}

dialogFIO::~dialogFIO()
{
    delete ui;
}


void dialogFIO::on_buttonBox_accepted()
{
    if(!ui->FIO->text().isEmpty())
        FIO = ui->FIO->text();
}
