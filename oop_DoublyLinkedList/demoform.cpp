#include "demoform.h"
#include "ui_demoform.h"



#include <QtSql>

demoForm::demoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::demoForm)
{
    ui->setupUi(this);
    dll = new DoubleLinkedList(this);
    connect(dll,SIGNAL(signalStr(QString)),this,SLOT(outList(QString)));

    on_refreshList_clicked();
}

demoForm::~demoForm()
{
    this->deleteLater();
    delete ui;
}


//Кнопка добавляет демо-данные из базы
void demoForm::on_addDemo_clicked()
{
    QSqlQuery query("SELECT data FROM demo");
    while(query.next()){
        dll->addToTail(query.value(0).toString());
    }
    on_refreshList_clicked();
}
void demoForm::on_refreshList_clicked()
{
    ui->listWidget->clear();//Очищаем
    if(ui->reversCheckBox->isChecked()) dll->outListFromTail();
    else dll->outListFromHead();

    //Дополнительные действия с кнопками формы
    ui->edit->setEnabled(false);
    ui->remove->setEnabled(false);

}//Ловим сигналы с строкой и выводим
void demoForm::outList(QString str)
{
    ui->listWidget->addItem(str);
}

//Действия при вводе информации в lineEdit
void demoForm::on_lineEdit_textChanged(const QString &arg1)
{
    if(arg1.isEmpty())
    {
        ui->addPosition->setEnabled(false);
    }
    else{
        if(ui->toHead->isChecked()          ||
           ui->toTail->isChecked()          ||
           ui->beforePosition->isChecked()  ||
           ui->afterPosition->isChecked()     )
        {
            ui->addPosition->setEnabled(true);
        }
        else ui->addPosition->setEnabled(false);
    }
}
//Кнопка добавляет узел в список
void demoForm::on_addPosition_clicked()
{
    if(ui->toHead->isChecked()){
        dll->addToHead(ui->lineEdit->text());
        ui->lineEdit->clear();
        on_refreshList_clicked();
    }
    if(ui->toTail->isChecked()){
        dll->addToTail(ui->lineEdit->text());
        ui->lineEdit->clear();
        on_refreshList_clicked();
    }
    if(ui->beforePosition->isChecked()){
        dll->addBefore(ui->lineEdit->text(),ui->listWidget->currentRow());
        ui->lineEdit->clear();
        on_refreshList_clicked();
    }
    if(ui->afterPosition->isChecked()){
        dll->addAfter(ui->lineEdit->text(),ui->listWidget->currentRow());
        ui->lineEdit->clear();
        on_refreshList_clicked();
    }
}

//Действия для радиокнопок
void demoForm::on_toHead_clicked(){
    emit on_lineEdit_textChanged(ui->lineEdit->text());
    ui->listWidget->setItemSelected(ui->listWidget->currentItem(),false);
    ui->beforePosition->setEnabled(false);
    ui->afterPosition->setEnabled(false);
}
void demoForm::on_toTail_clicked(){
    emit on_lineEdit_textChanged(ui->lineEdit->text());
    ui->listWidget->setItemSelected(ui->listWidget->currentItem(),false);
    ui->beforePosition->setEnabled(false);
    ui->afterPosition->setEnabled(false);
}
void demoForm::on_beforePosition_clicked(){
    emit on_lineEdit_textChanged(ui->lineEdit->text());
}
void demoForm::on_afterPosition_clicked(){
    emit on_lineEdit_textChanged(ui->lineEdit->text());
}
//Действия при выборе элемента из listWidget
void demoForm::on_listWidget_currentRowChanged(int currentRow)
{
    ui->beforePosition->setEnabled(true);
    ui->afterPosition->setEnabled(true);

    //Действия колонки редактирования
    if(currentRow >=0)
    {
        ui->lineEdit_2->setText(ui->listWidget->item(currentRow)->text());
        ui->edit->setEnabled(true);
    }
    else ui->lineEdit_2->clear();
    ui->remove->setEnabled(true);
}


//Далее колонка редактирования
//***************************************************************
void demoForm::on_lineEdit_2_textChanged(const QString &arg1)
{

}
void demoForm::on_edit_clicked()
{
    dll->editPosition(ui->listWidget->currentRow(),ui->lineEdit_2->text());
    on_refreshList_clicked();
}
void demoForm::on_remove_clicked()
{
    dll->removeElement(ui->listWidget->currentRow());
    on_refreshList_clicked();
}

void demoForm::on_removeAll_clicked()
{
    dll->removeList();
    on_refreshList_clicked();
}

void demoForm::on_move_clicked()
{
    int currentRow = ui->listWidget->currentRow();
    if(ui->upRadioButton->isChecked()){
        dll->up(ui->listWidget->currentRow());
        on_refreshList_clicked();
        ui->listWidget->setCurrentRow(currentRow-1);
    }
    if(ui->downRadioButton->isChecked()){
        dll->down(ui->listWidget->currentRow());
        on_refreshList_clicked();
        ui->listWidget->setCurrentRow(currentRow+1);
    }


}
