#include "sql.h"



sql::sql(QObject *parent) : QObject(parent)
{

}

bool sql::init()
{
    //Создаём переменную для подключения базы
    QSqlDatabase db;
    //Путь до файла базы
    QString pathToDB = QDir::currentPath() + QString("/base.db");
    //Указываем драйвер базы
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(pathToDB);
    QFileInfo checkFile(pathToDB);
    if(checkFile.isFile()){
        if(db.open()){
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}
