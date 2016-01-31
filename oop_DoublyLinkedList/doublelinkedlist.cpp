#include "doublelinkedlist.h"

DoubleLinkedList::DoubleLinkedList(QObject *parent) : QObject(parent)
{

}
void DoubleLinkedList::outListFromHead(){
    int count=0;
    node *tmp;
    if(!ListIsEmpty()) {
        tmp=head;
        while(tmp!=NULL){
            emit signalStr(tmp->data);
            tmp=tmp->next;
            count++;
        }
    }
}
void DoubleLinkedList::addToTail(QString str){
    node *tmp = new node;
    if(ListIsEmpty())
    {
        head=tmp;
        tail=tmp;
    }else{
        tail->next=tmp;
        tmp->prev=tail;
        tail = tmp;
    }
    tmp->next=NULL;
    tmp->data=str;
}
void DoubleLinkedList::addToHead(QString str){
    node *tmp = new node;
    if(head==NULL)
    {
        head=tmp;
        tail=tmp;
    }else{
        head->prev=tmp;
        tmp->next=head;
        tmp->prev=NULL;
        head = tmp;
    }
    tmp->data=str;
}
void DoubleLinkedList::addAfter(QString str,int position){
    node *tmp = new node;
    node *current = head;
    int num=0;
    if(!ListIsEmpty()){
        while(num<position){
            if(current->next != NULL) {
                current=current->next;
                num++;
            }else {
                tail = tmp;
                break;
            }
        }
        tmp->data=str;
        tmp->prev=current;
        tmp->next=current->next;
        tmp->next->prev=tmp;
        current->next=tmp;
    }
}

void DoubleLinkedList::addBefore(QString str,int position){
    node *tmp = new node;
    node *current = head;
    int num=0;
    if(!ListIsEmpty())
    {
        while(num<position){
            if(current->next != NULL) {
                current=current->next;
                num++;
            }else break;
        }
        tmp->data=str;
        tmp->next=current;
        tmp->prev=current->prev;
        current->prev->next=tmp;
        current->prev=tmp;
    }
}
void DoubleLinkedList::outListFromTail(){
    int count=0;
    node *tmp;
    if(!ListIsEmpty()) {
        tmp=tail;
        while(tmp!=NULL){
            emit signalStr(tmp->data);
            tmp=tmp->prev;
            count++;
        }
    }
}
/*
void DoubleLinkedList::removeElement(int position)
{
    node *tmp;
    tmp = head;
    int num=0;
    if(head!=NULL)
    {
        while(num<position){
            tmp=tmp->next;
            num++;
        }
        tmp->prev->next=tmp->next;
        tmp->next->prev=tmp->prev;
        delete tmp;
    }
    print("Элемент успешно удалён");
    system("pause");
}
void DoubleLinkedList::removeList()
{
    while(head->next!=NULL){
        head=head->next;
        head->prev=NULL;
        delete head->prev;
    }
    head=NULL;
    delete head;
    print("Список удалён");
    system("pause");
}
void DoubleLinkedList::editPosition(int position,QString data)
{
    node *tmp;
    tmp = head;
    int num=0;
    if(head!=NULL)
    {
        while(num<position){
            tmp=tmp->next;
            num++;
        }
        tmp->data=data;
    }
    print("Элемент успешно отредактирован");
    system("pause");
}
*/

bool DoubleLinkedList::ListIsEmpty()
{
    if(head == NULL){
        return true;
    }
    else return false;
}
