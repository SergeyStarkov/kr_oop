#ifndef TESTFORM_H
#define TESTFORM_H

#include <QWidget>

namespace Ui {
class testForm;
}

class testForm : public QWidget
{
    Q_OBJECT

public:
    explicit testForm(QWidget *parent = 0);
    ~testForm();

private:
    Ui::testForm *ui;
signals:
    void  messageBox(QString);

private slots:
    void on_pushButton_clicked();
};

#endif // TESTFORM_H
