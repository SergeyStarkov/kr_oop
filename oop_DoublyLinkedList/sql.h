#ifndef SQL_H
#define SQL_H

#include <QObject>
#include <QSqlDatabase>

#include <QDir>

class sql : public QObject
{
    Q_OBJECT
public:
    explicit sql(QObject *parent = 0);

signals:

public slots:
    bool init();
private:

};

#endif // SQL_H
