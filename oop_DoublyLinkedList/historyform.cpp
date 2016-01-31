#include "historyform.h"
#include "ui_historyform.h"

#include <QtSql>

historyForm::historyForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::historyForm)
{
    ui->setupUi(this);

    ui->tableWidget->setEditTriggers(false);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    on_refresh_clicked();
}

historyForm::~historyForm()
{
    this->deleteLater();
    delete ui;
}

void historyForm::on_refresh_clicked()
{
    QSqlQuery query("SELECT COUNT(*) FROM history");
    query.next();
    int rowCount = query.value(0).toInt();
    ui->tableWidget->setRowCount(rowCount);
    query.exec("SELECT name,gr,evaluation,time_and_date,num FROM history ORDER BY num DESC");
    for(int row = 0; row < rowCount; row++)
    {
        query.next();
        for(int column = 0; column < 4; column++)
        {
            QTableWidgetItem *newItem = new QTableWidgetItem();
            newItem->setText(query.value(column).toString());
            ui->tableWidget->setItem(row,column,newItem);
        }
    }
}

void historyForm::on_close_clicked()
{
    parent()->deleteLater();
}
