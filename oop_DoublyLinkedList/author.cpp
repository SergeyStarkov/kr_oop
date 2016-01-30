#include "author.h"
#include "ui_author.h"

author::author(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::author)
{
    ui->setupUi(this);
}

author::~author()
{
    delete ui;
}
