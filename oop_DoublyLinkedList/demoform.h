#ifndef DEMOFORM_H
#define DEMOFORM_H

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

private:
    Ui::demoForm *ui;
};

#endif // DEMOFORM_H
