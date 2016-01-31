#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>

namespace Ui {
class main_window;
}

class main_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit main_window(QWidget *parent = 0);
    ~main_window();

private:
    Ui::main_window *ui;
    void loadSubWindow(QWidget *widget);

private slots:
    void slot_theory();
    void slot_demo();
    void slot_test();
    void slot_history();
};

#endif // MAIN_WINDOW_H
