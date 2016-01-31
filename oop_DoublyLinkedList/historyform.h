#ifndef HISTORYFORM_H
#define HISTORYFORM_H

#include <QWidget>

namespace Ui {
class historyForm;
}

class historyForm : public QWidget
{
    Q_OBJECT

public:
    explicit historyForm(QWidget *parent = 0);
    ~historyForm();

private:
    Ui::historyForm *ui;
};

#endif // HISTORYFORM_H
