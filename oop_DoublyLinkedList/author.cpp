#include "author.h"
#include "ui_author.h"

#include "main_window.h"
author::author(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::author)
{
    ui->setupUi(this);
    sec = 5;
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(slot_timer()));
    timer->start(1000);
}

author::~author()
{
    delete timer;
    delete ui;
}

void author::slot_timer()
{
    if(sec > 0){
        ui->start->setText("Нажмите для продолжения ("+ QString::number(sec--) + ")");
    }
    else on_start_clicked();
}

void author::on_start_clicked()
{
    timer->stop();
    main_window *mw = new main_window();
    mw->show();
    this->close();
}
