/********************************************************************************
** Form generated from reading UI file 'theoryform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEORYFORM_H
#define UI_THEORYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_theoryForm
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QPushButton *prevPage;
    QPushButton *nextPage;

    void setupUi(QWidget *theoryForm)
    {
        if (theoryForm->objectName().isEmpty())
            theoryForm->setObjectName(QStringLiteral("theoryForm"));
        theoryForm->resize(459, 318);
        gridLayout = new QGridLayout(theoryForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(theoryForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 2);

        prevPage = new QPushButton(theoryForm);
        prevPage->setObjectName(QStringLiteral("prevPage"));

        gridLayout->addWidget(prevPage, 1, 0, 1, 1);

        nextPage = new QPushButton(theoryForm);
        nextPage->setObjectName(QStringLiteral("nextPage"));

        gridLayout->addWidget(nextPage, 1, 1, 1, 1);


        retranslateUi(theoryForm);

        QMetaObject::connectSlotsByName(theoryForm);
    } // setupUi

    void retranslateUi(QWidget *theoryForm)
    {
        theoryForm->setWindowTitle(QApplication::translate("theoryForm", "Form", 0));
        prevPage->setText(QApplication::translate("theoryForm", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271", 0));
        nextPage->setText(QApplication::translate("theoryForm", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271", 0));
    } // retranslateUi

};

namespace Ui {
    class theoryForm: public Ui_theoryForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEORYFORM_H
