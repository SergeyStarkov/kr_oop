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

private slots:
    void on_refresh_clicked();

    void on_close_clicked();

private:
    Ui::historyForm *ui;
signals:
    void messageBox(QString);
};

#endif // HISTORYFORM_H
