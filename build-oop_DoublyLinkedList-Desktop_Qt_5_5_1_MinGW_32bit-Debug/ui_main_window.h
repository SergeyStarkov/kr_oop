/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_window
{
public:
    QAction *action_theory;
    QAction *action_demo;
    QAction *action_test;
    QAction *action_history;
    QAction *action_base;
    QAction *action;
    QAction *action_exit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main_window)
    {
        if (main_window->objectName().isEmpty())
            main_window->setObjectName(QStringLiteral("main_window"));
        main_window->resize(800, 600);
        action_theory = new QAction(main_window);
        action_theory->setObjectName(QStringLiteral("action_theory"));
        action_demo = new QAction(main_window);
        action_demo->setObjectName(QStringLiteral("action_demo"));
        action_test = new QAction(main_window);
        action_test->setObjectName(QStringLiteral("action_test"));
        action_history = new QAction(main_window);
        action_history->setObjectName(QStringLiteral("action_history"));
        action_base = new QAction(main_window);
        action_base->setObjectName(QStringLiteral("action_base"));
        action = new QAction(main_window);
        action->setObjectName(QStringLiteral("action"));
        action_exit = new QAction(main_window);
        action_exit->setObjectName(QStringLiteral("action_exit"));
        centralwidget = new QWidget(main_window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        horizontalLayout->addWidget(mdiArea);

        main_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        main_window->setMenuBar(menubar);
        statusbar = new QStatusBar(main_window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        main_window->setStatusBar(statusbar);

        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu->menuAction());
        menu->addAction(action_theory);
        menu->addAction(action_demo);
        menu->addAction(action_test);
        menu->addAction(action_history);
        menu->addSeparator();
        menu->addAction(action);
        menu_2->addAction(action_base);
        menu_2->addSeparator();
        menu_2->addAction(action_exit);

        retranslateUi(main_window);

        QMetaObject::connectSlotsByName(main_window);
    } // setupUi

    void retranslateUi(QMainWindow *main_window)
    {
        main_window->setWindowTitle(QApplication::translate("main_window", "MainWindow", 0));
        action_theory->setText(QApplication::translate("main_window", "\320\242\320\265\320\276\321\200\320\270\321\217", 0));
        action_demo->setText(QApplication::translate("main_window", "\320\237\321\200\320\260\320\272\321\202\320\270\320\272\320\260", 0));
        action_test->setText(QApplication::translate("main_window", "\320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        action_history->setText(QApplication::translate("main_window", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", 0));
        action_base->setText(QApplication::translate("main_window", "\320\241\320\243\320\221\320\224", 0));
        action->setText(QApplication::translate("main_window", "\320\222\321\213\321\205\320\276\320\264", 0));
        action_exit->setText(QApplication::translate("main_window", "\320\222\321\213\321\205\320\276\320\264", 0));
        menu->setTitle(QApplication::translate("main_window", "\320\240\320\260\320\267\320\264\320\265\320\273\321\213", 0));
        menu_2->setTitle(QApplication::translate("main_window", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
