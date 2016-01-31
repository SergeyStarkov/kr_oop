#include "theoryform.h"
#include "ui_theoryform.h"

theoryForm::theoryForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::theoryForm)
{
    ui->setupUi(this);


}

theoryForm::~theoryForm()
{
    this->deleteLater();
    delete ui;
}
