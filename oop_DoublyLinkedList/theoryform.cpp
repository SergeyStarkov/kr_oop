#include "theoryform.h"
#include "ui_theoryform.h"
#include <QtSql>
theoryForm::theoryForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::theoryForm)
{
    ui->setupUi(this);

    QSqlQuery query("SELECT text FROM author");
    while (query.next()) {
        QString str = query.value(0).toString();
        ui->textBrowser->setText(str);
    }

}

theoryForm::~theoryForm()
{
    this->deleteLater();
    delete ui;
}
