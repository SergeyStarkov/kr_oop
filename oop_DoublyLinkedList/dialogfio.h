#ifndef DIALOGFIO_H
#define DIALOGFIO_H

#include <QDialog>

namespace Ui {
class dialogFIO;
}

class dialogFIO : public QDialog
{
    Q_OBJECT

public:
    explicit dialogFIO(QWidget *parent = 0);
    ~dialogFIO();

    QString FIO;
    QString gr;

private slots:
    void on_buttonBox_accepted();

    void on_ok_clicked();

    void on_cansel_clicked();

private:
    Ui::dialogFIO *ui;
};

#endif // DIALOGFIO_H
