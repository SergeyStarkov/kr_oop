#include "historyform.h"
#include "ui_historyform.h"

historyForm::historyForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::historyForm)
{
    ui->setupUi(this);
}

historyForm::~historyForm()
{
    this->deleteLater();
    delete ui;
}
