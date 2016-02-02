#include "main_window.h"
#include "ui_main_window.h"

#include <QMessageBox>

#include <QMdiSubWindow>

#include "theoryform.h"
#include "demoform.h"
#include "testform.h"
#include "historyform.h"
#include "dialogfio.h"

#include <QMessageBox>

#include "sql.h"

main_window::main_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_window)
{
    ui->setupUi(this);

    //Сигналы при нажатии на элементы меню
    connect(ui->action_theory,SIGNAL(triggered(bool)),this,SLOT(slot_theory()));
    connect(ui->action_demo,SIGNAL(triggered(bool)),this,SLOT(slot_demo()));
    connect(ui->action_test,SIGNAL(triggered(bool)),this,SLOT(slot_test()));
    connect(ui->action_history,SIGNAL(triggered(bool)),this,SLOT(slot_history()));

}

main_window::~main_window()
{
    delete ui;
}


//Процедура открывает субокно
void main_window::loadSubWindow(QWidget *widget)
{
    ui->mdiArea->addSubWindow(widget)->show();
    connect(widget,SIGNAL(messageBox(QString)),this,SLOT(message(QString)));
}

void main_window::message(QString str)
{
    QMessageBox m;
    m.setText(str);
    m.exec();
}

//Действие при нажатии кнопки меню "Теория"
void main_window::slot_theory()
{
    loadSubWindow(new theoryForm(this));
}
//Действие при нажатии кнопки меню "Практика"
void main_window::slot_demo()
{
    loadSubWindow(new demoForm(this));
}
//Действие при нажатии кнопки меню "Тест"
void main_window::slot_test()
{
    dialogFIO *f = new dialogFIO();
    if(f->exec() == QDialog::Accepted)
    {
        testForm *widget = new testForm(this);
        loadSubWindow(widget);
        widget->testFIO = f->FIO;

    }


}
//Действие при нажатии кнопки меню "История"
void main_window::slot_history()
{
    loadSubWindow(new historyForm(this));
}

void main_window::on_action_base_triggered()
{
    //форма управления базой данных
}
