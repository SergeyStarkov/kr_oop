#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

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
public:
    explicit DoubleLinkedList(QObject *parent = 0);

    //Объявление функций и процедур для работы с ДЛС
    void addToTail(QString str);
    void addAfter(QString str,int position);
    void addToHead(QString str);
    void addBefore(QString str,int position);
//    void removeElement(int position);
//    void removeList();
//    void editPosition(int position,QString data);
    void outListFromHead();
    void outListFromTail();

    bool ListIsEmpty();

signals:
    void signalStr(QString);

public slots:
};

#endif // DOUBLELINKEDLIST_H
