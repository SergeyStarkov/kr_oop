#include "author.h"
#include <QApplication>

#include <QMessageBox>

#include "sql.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMessageBox m;
    sql s;
    author titul;
    titul.show();
    if(!s.init()){
         m.setText("Ошибка подключения к базе данных");
         m.exec();
         return 0;
    }
    return a.exec();
}
