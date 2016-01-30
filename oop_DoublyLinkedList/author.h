#ifndef AUTHOR_H
#define AUTHOR_H

#include <QWidget>

#include <QTimer>

namespace Ui {
class author;
}

class author : public QWidget
{
    Q_OBJECT

public:
    explicit author(QWidget *parent = 0);
    ~author();

private slots:
    void on_start_clicked();

private:
    Ui::author *ui;

    QTimer *timer;
    int sec;

private slots:
    void slot_timer();
};

#endif // AUTHOR_H
