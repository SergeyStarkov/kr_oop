#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include <QMessageBox>

#include <QObject>

struct node {
    QString data;
    node *next;
    node *prev;
};

class DoubleLinkedList : public QObject
{
    Q_OBJECT
private:
    node *head = NULL;
    node *tail = NULL;

    QMessageBox m;
public:
    explicit DoubleLinkedList(QObject *parent = 0);

    //Объявление функций и процедур для работы с ДЛС
    void addToTail(QString str);
    void addAfter(QString str,int position);
    void addToHead(QString str);
    void addBefore(QString str,int position);
    void removeElement(int position);
    void removeList();
    void editPosition(int position,QString data);
    bool outListFromHead();
    bool outListFromTail();
    void up(int pos);
    void down(int pos);
    void moveToHead(int pos);
    void moveToTail(int pos);

    bool ListIsEmpty();

signals:
    void signalStr(QString);

public slots:
};

#endif // DOUBLELINKEDLIST_H
