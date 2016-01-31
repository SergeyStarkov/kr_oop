#ifndef THEORYFORM_H
#define THEORYFORM_H

#include <QWidget>

namespace Ui {
class theoryForm;
}

class theoryForm : public QWidget
{
    Q_OBJECT

public:
    explicit theoryForm(QWidget *parent = 0);
    ~theoryForm();

private:
    Ui::theoryForm *ui;
};

#endif // THEORYFORM_H
