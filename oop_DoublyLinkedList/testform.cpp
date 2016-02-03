#include "testform.h"
#include "ui_testform.h"
#include "main_window.h"

testForm::testForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testForm)
{
    ui->setupUi(this);
    correctCurrentAnswer = 0;
    currentAnswer = 0;
    //loadQuestions();

}

testForm::~testForm()
{
    emit blockWindow(true);
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
    int otv = -1;
    if(ui->otv1Button->isChecked())     {
        otv = 0;
        ui->otv1Button->toggled(false);
    }
    if(ui->otv2Button->isChecked())     {
        otv = 1;
        ui->otv2Button->setChecked(false);
    }
    if(ui->otv3Button->isChecked())     {
        otv = 2;
        ui->otv3Button->setChecked(false);
    }
    if(ui->otv4Button->isChecked())     {
        otv = 3;
        ui->otv4Button->setChecked(false);
    }

    if(otv == correctCurrentAnswer) {
        numTest[currentAnswer][1] = 1;
        nextQuestion();
    }
    else{
        numTest[currentAnswer][1] = 0;
        nextQuestion();
    }
}
void testForm::results()
{

}

void testForm::nextQuestion()
{   ui->otv1Button->setChecked(false);
    if(currentAnswer <= changeTest){
        currentAnswer++;
        openQuestion(currentAnswer);
    }
    else results();
}

void testForm::testing()
{
    loadQuestions();
    openQuestion(numTest[0][0]);
    emit blockWindow(false);
}
