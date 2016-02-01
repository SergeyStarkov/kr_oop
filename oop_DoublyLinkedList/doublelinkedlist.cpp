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
    else emit signalStr("Список пуст");
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

void DoubleLinkedList::up(int pos)
{
    node *tmp;
    tmp = head;
    int num = 0;
    if(!ListIsEmpty() && pos >= 0)
    {
        while(num<pos)
        {
            if(tmp->next != NULL){
                tmp = tmp->next;
                num++;
            }else break;
        }
        if(tmp != head)
        {
            if(tmp != tail)
            {
                if(tmp->prev->prev != NULL){
                    tmp->prev->next = tmp->next;
                    tmp->next->prev = tmp->prev;
                    tmp->next = tmp->prev;
                    tmp->prev->prev->next = tmp;
                    tmp->prev = tmp->prev->prev;
                    tmp->next->prev = tmp;
                }else {
                    head->next = tmp->next;
                    head->prev = tmp;
                    tmp->next->prev = head;
                    tmp->next = head;
                    tmp->prev = NULL;
                    head = tmp;
                }
            }
            else if(tmp->prev != head){
                tail = tmp->prev;
                tail->prev->next = tmp;
                tmp->prev = tail->prev;
                tail->prev = tmp;
                tail->next = NULL;
                tmp->next = tail;
            }
            else {
                tail->prev = NULL;
                tail->next = head;
                head->next = NULL;
                head->prev = tail;
                tmp = head;
                head = tail;
                tail = tmp;
            }
        }
    }
}
void DoubleLinkedList::down(int pos)
{
    node *tmp;
    tmp = head;
    int num = 0;
    if(!ListIsEmpty() && pos >= 0)
    {
        while(num<pos)
        {
            if(tmp->next != NULL){
                tmp = tmp->next;
                num++;
            }
        }
        if(tmp != tail)
        {
            if(tmp != head)
            {
                if(tmp->next->next != NULL){
                    tmp->next->prev = tmp->prev;
                    tmp->prev->next = tmp->next;
                    tmp->next->next->prev = tmp;
                    tmp->prev = tmp->next;
                    tmp->next = tmp->next->next;
                    tmp->prev->next = tmp;
                }else {
                    tail->prev = tmp->prev;
                    tail->next = tmp;
                    tmp->prev->next = tail;
                    tmp->prev = tail;
                    tmp->next = NULL;
                    tail = tmp;
                }
            }
            else if(tmp->next != tail){

            }
            else {

            }
        }
    }
}


void DoubleLinkedList::removeElement(int position)
{
    node *tmp;
    tmp = head;
    int num=0;
    if(!ListIsEmpty() && position >= 0)
    {
        while(num<position){
            if(tmp->next != NULL){
                tmp=tmp->next;
                num++;
            }else break;
        }
        if(tmp->next == NULL && tmp->prev == NULL)removeList();
        else if(tmp->next != NULL)
        {
            if(tmp->prev !=NULL)
            {
                tmp->prev->next=tmp->next;
                tmp->next->prev=tmp->prev;
            }
            else{
                head = tmp->next;
                head->prev = NULL;
            }
        }
        else {
            tail = tmp->prev;
            tail->next = NULL;
        }
        delete tmp;
    }
}
void DoubleLinkedList::editPosition(int position,QString data)
{
    node *tmp;
    tmp = head;
    int num=0;
    if(head!=NULL)
    {
        while(num<position){
            if(tmp->next != NULL){
                tmp=tmp->next;
                num++;
            }else break;
        }
        tmp->data=data;
    }
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
}

bool DoubleLinkedList::ListIsEmpty()
{
    if(head == NULL){
        return true;
    }
    else return false;
}
