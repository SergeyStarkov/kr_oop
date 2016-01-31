#include "demoform.h"
#include "ui_demoform.h"

demoForm::demoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::demoForm)
{
    ui->setupUi(this);
}

demoForm::~demoForm()
{
    this->deleteLater();
    delete ui;
}
