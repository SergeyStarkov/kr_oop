#include "testform.h"
#include "ui_testform.h"

testForm::testForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testForm)
{
    ui->setupUi(this);
}

testForm::~testForm()
{
    this->deleteLater();
    delete ui;
}

void testForm::on_pushButton_clicked()
{
     emit messageBox("test");
}

void testForm::on_send_clicked()
{

}
