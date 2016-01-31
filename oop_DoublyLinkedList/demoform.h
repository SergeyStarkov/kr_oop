#ifndef DEMOFORM_H
#define DEMOFORM_H

#include "doublelinkedlist.h"
#include <QWidget>

namespace Ui {
class demoForm;
}

class demoForm : public QWidget
{
    Q_OBJECT

public:
    explicit demoForm(QWidget *parent = 0);
    ~demoForm();



private slots:
    void on_addDemo_clicked();

    void on_refreshList_clicked();

    void outList(QString);



    void on_lineEdit_textChanged(const QString &arg1);

    void on_addPosition_clicked();

    void on_toHead_clicked();

    void on_toTail_clicked();

    void on_beforePosition_clicked();

    void on_afterPosition_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_lineEdit_2_textChanged(const QString &arg1);

private:
    Ui::demoForm *ui;

    DoubleLinkedList *dll;

signals:
    void messageBox(QString);
};

#endif // DEMOFORM_H
