#include "testform.h"
#include "ui_testform.h"

testForm::testForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testForm)
{
    ui->setupUi(this);
    correctCurrentAnswer = 0;
    currentAnswer = 0;
    info();

}

testForm::~testForm()
{
    this->deleteLater();
    delete ui;
}

void testForm::loadQuestions()
{
    //Делаем запрос к базе о колличестве вопросов в ней
    int questCount=0;
    QSqlQuery query_num("SELECT * FROM test");
    while(query_num.next()){
        questCount++;
    }
    for(int i = 0; i < changeTest; i++){
        do {//Генерируем случайные номера вопросов
            bool repited = false;
            int n = qrand()%questCount+1;
            for(int y = 0; y < changeTest; y++){
                if(n == numTest[y][0]){
                    repited = true;
                    break;
                }
            }
            if(repited == false) {
                numTest[i][0] = n;
                break;
            }
        }while(true);//Цикл будет повторяться пока не сгенерируется уникальное число
    }
}

void testForm::openQuestion(int n)
{
    QSqlQuery query("SELECT "
                    "question, "
                    "first_possible_answer,"
                    "second_possible_answer,"
                    "third_possible_answer,"
                    "fourth_possible_answer,"
                    "correct_answer "
                    "FROM test WHERE num="+QString::number(n));
    if(query.next()){
        ui->questText->setText(query.value("question").toString());
        ui->otv1->setText(query.value("first_possible_answer").toString());
        ui->otv2->setText(query.value("second_possible_answer").toString());
        ui->otv3->setText(query.value("third_possible_answer").toString());
        ui->otv4->setText(query.value("fourth_possible_answer").toString());
        correctCurrentAnswer = query.value("correct_answer").toInt();
    }
}
void testForm::on_send_clicked()
{

    switch (correctCurrentAnswer){
    case 0:{
        if(ui->otv1Button->isChecked()){numTest[currentAnswer][1] = 1;}
    }
    case 1:{
        if(ui->otv2Button->isChecked()){numTest[currentAnswer][1] = 1;}
    }
    case 2:{
        if(ui->otv3Button->isChecked()){numTest[currentAnswer][1] = 1;}
    }
    case 3:{
        if(ui->otv4Button->isChecked()){numTest[currentAnswer][1] = 1;}
    }
    }
    if(currentAnswer <= changeTest){
        currentAnswer++;
        openQuestion(currentAnswer);
    }
    else results();
}
void testForm::results()
{

}
#include "main_window.h"
void testForm::info()
{
    //messageBox(main_window::);
    //main_window::testFIO;
    //loadQuestions();
    //openQuestion(currentAnswer);
}
