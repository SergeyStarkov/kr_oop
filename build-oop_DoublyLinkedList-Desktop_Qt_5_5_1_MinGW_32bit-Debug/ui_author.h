/********************************************************************************
** Form generated from reading UI file 'author.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHOR_H
#define UI_AUTHOR_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_author
{
public:
    QWebView *titul;
    QPushButton *start;
    QPushButton *pushButton;

    void setupUi(QWidget *author)
    {
        if (author->objectName().isEmpty())
            author->setObjectName(QStringLiteral("author"));
        author->resize(640, 480);
        titul = new QWebView(author);
        titul->setObjectName(QStringLiteral("titul"));
        titul->setGeometry(QRect(10, 10, 621, 421));
        titul->setUrl(QUrl(QStringLiteral("about:blank")));
        start = new QPushButton(author);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(10, 442, 281, 31));
        pushButton = new QPushButton(author);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 440, 75, 23));

        retranslateUi(author);

        QMetaObject::connectSlotsByName(author);
    } // setupUi

    void retranslateUi(QWidget *author)
    {
        author->setWindowTitle(QApplication::translate("author", "Form", 0));
        start->setText(QApplication::translate("author", "\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\264\320\273\321\217 \320\277\321\200\320\276\320\264\320\276\320\273\320\266\320\265\320\275\320\270\321\217", 0));
        pushButton->setText(QApplication::translate("author", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class author: public Ui_author {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHOR_H
