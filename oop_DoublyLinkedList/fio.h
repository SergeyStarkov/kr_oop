#ifndef FIO_H
#define FIO_H

#include <QDialog>

namespace Ui {
class fio;
}

class fio : public QDialog
{
    Q_OBJECT

public:
    explicit fio(QWidget *parent = 0);
    ~fio();
    QString FIO = "123";

private slots:
    bool on_okPush_clicked();

private:
    Ui::fio *ui;
};

#endif // FIO_H
