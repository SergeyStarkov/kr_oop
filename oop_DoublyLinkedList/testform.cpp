#include "testform.h"
#include "ui_testform.h"
#include "main_window.h"
#include <QMessageBox>
#include <QDateTime>

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
    //this->deleteLater();
    parent()->deleteLater();
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
    for(int i = 0; i < changeTest-1; i++){
        do {//Генерируем случайные номера вопросов
            bool repited = false;
            int n = qrand()%questCount+1;
            for(int y = 0; y < changeTest-1; y++){
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
{ui->send->setText(QString::number(currentAnswer));
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
#include <QRadioButton>
void testForm::on_send_clicked()
{
    if(ui->otv1Button->isChecked())     {
        checkOtv(0);
        ui->otv1Button->setChecked(false);
    }
    if(ui->otv2Button->isChecked())     {
        checkOtv(1);
         ui->otv2Button->setChecked(false);
    }
    if(ui->otv3Button->isChecked())     {
        checkOtv(2);
         ui->otv3Button->setChecked(false);
    }
    if(ui->otv4Button->isChecked())     {
        checkOtv(3);
        ui->otv4Button->setChecked(false);
    }
}
void testForm::checkOtv(int otv)
{
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
    //Подводим результаты
    int proc = 0;
    for(int i = 0; i < changeTest; i++)    {
        if(numTest[i][1] == 1) proc++;
    }
    proc = (proc*100)/changeTest;

    //Формируем запрос на добавление записи о резульататх тестирования в базу
    QString q = "INSERT INTO history (name,gr,evaluation,time_and_date) VALUES (";
    q.append("'"+testFIO+"',");
    q.append("'"+testGroup+"',");
    q.append(QString::number(proc)+",");
    q.append(+"'"+QDateTime::currentDateTime().toString("h:m:s d.M.yyyy") + "');");
    QSqlQuery query(q);//записываем в базу

    QMessageBox m;

    m.setText("Вы ответили правильно на " + QString::number(proc) + "% вопросов из 100%.");
    QString res="Тестирование закончено на ";
    if(proc >= 90) res.append("отлично!");
    else if(proc >= 70 && proc < 90) res.append("хорошо.");
    else if(proc >= 50 && proc < 70) res.append("удовлетворительно.");
    else res.append("неудовлетворительно.");
    m.setWindowTitle(res);
    m.exec();
    this->deleteLater();
    parent()->deleteLater();

}



void testForm::nextQuestion()
{   ui->otv1Button->setChecked(false);
    if(currentAnswer <= changeTest){

        currentAnswer++;
        //ui->progress->setValue(currentAnswer);
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
