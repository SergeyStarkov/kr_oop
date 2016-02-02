#include "fio.h"
#include "ui_fio.h"

fio::fio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fio)
{
    ui->setupUi(this);
}

fio::~fio()
{
    delete ui;
}

bool fio::on_okPush_clicked()
{
    return true;
}
