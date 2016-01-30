#include "author.h"
#include "ui_author.h"

author::author(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::author)
{
    ui->setupUi(this);
    sec = 60;

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(slot_timer()));
timer->start(1000);

}

author::~author()
{
    delete timer;
    delete ui;
}

void author::on_start_clicked()
{
    ui->start->setText("ok");
}


void author::slot_timer()
{
    if(sec > 0){
        ui->start->setText("Нажмите для продолжения ("+ QString::number(sec) + ")");
        sec--;
    }
    else on_start_clicked();
}
