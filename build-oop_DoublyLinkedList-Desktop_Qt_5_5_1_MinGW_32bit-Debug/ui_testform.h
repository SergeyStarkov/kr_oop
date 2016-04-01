/********************************************************************************
** Form generated from reading UI file 'testform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTFORM_H
#define UI_TESTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testForm
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextBrowser *questText;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *otv1Button;
    QRadioButton *otv2Button;
    QTextBrowser *otv1;
    QTextBrowser *otv2;
    QRadioButton *otv3Button;
    QRadioButton *otv4Button;
    QTextBrowser *otv3;
    QTextBrowser *otv4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QProgressBar *progress;
    QProgressBar *time;
    QPushButton *send;

    void setupUi(QWidget *testForm)
    {
        if (testForm->objectName().isEmpty())
            testForm->setObjectName(QStringLiteral("testForm"));
        testForm->resize(675, 455);
        gridLayout_3 = new QGridLayout(testForm);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_2 = new QGroupBox(testForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        questText = new QTextBrowser(groupBox_2);
        questText->setObjectName(QStringLiteral("questText"));

        gridLayout_2->addWidget(questText, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(testForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 200));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        otv1Button = new QRadioButton(groupBox);
        otv1Button->setObjectName(QStringLiteral("otv1Button"));
        otv1Button->setAutoExclusive(false);

        gridLayout->addWidget(otv1Button, 0, 0, 1, 1);

        otv2Button = new QRadioButton(groupBox);
        otv2Button->setObjectName(QStringLiteral("otv2Button"));
        otv2Button->setAutoExclusive(false);

        gridLayout->addWidget(otv2Button, 0, 1, 1, 1);

        otv1 = new QTextBrowser(groupBox);
        otv1->setObjectName(QStringLiteral("otv1"));

        gridLayout->addWidget(otv1, 1, 0, 1, 1);

        otv2 = new QTextBrowser(groupBox);
        otv2->setObjectName(QStringLiteral("otv2"));

        gridLayout->addWidget(otv2, 1, 1, 1, 1);

        otv3Button = new QRadioButton(groupBox);
        otv3Button->setObjectName(QStringLiteral("otv3Button"));
        otv3Button->setAutoExclusive(false);

        gridLayout->addWidget(otv3Button, 2, 0, 1, 1);

        otv4Button = new QRadioButton(groupBox);
        otv4Button->setObjectName(QStringLiteral("otv4Button"));
        otv4Button->setAutoExclusive(false);

        gridLayout->addWidget(otv4Button, 2, 1, 1, 1);

        otv3 = new QTextBrowser(groupBox);
        otv3->setObjectName(QStringLiteral("otv3"));

        gridLayout->addWidget(otv3, 3, 0, 1, 1);

        otv4 = new QTextBrowser(groupBox);
        otv4->setObjectName(QStringLiteral("otv4"));

        gridLayout->addWidget(otv4, 3, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        progress = new QProgressBar(testForm);
        progress->setObjectName(QStringLiteral("progress"));
        progress->setMaximum(10);
        progress->setValue(0);

        verticalLayout->addWidget(progress);

        time = new QProgressBar(testForm);
        time->setObjectName(QStringLiteral("time"));
        time->setMaximum(120);
        time->setValue(120);
        time->setTextVisible(true);

        verticalLayout->addWidget(time);


        horizontalLayout->addLayout(verticalLayout);

        send = new QPushButton(testForm);
        send->setObjectName(QStringLiteral("send"));

        horizontalLayout->addWidget(send);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(testForm);

        QMetaObject::connectSlotsByName(testForm);
    } // setupUi

    void retranslateUi(QWidget *testForm)
    {
        testForm->setWindowTitle(QApplication::translate("testForm", "Form", 0));
        groupBox_2->setTitle(QApplication::translate("testForm", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\320\271\321\202\320\265 \320\262\320\275\320\270\320\274\320\260\321\202\320\265\320\273\321\214\320\275\320\276 \320\262\320\276\320\277\321\200\320\276\321\201", 0));
        groupBox->setTitle(QApplication::translate("testForm", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\320\264\320\270\320\275 \320\270\320\267 \320\262\320\260\321\200\320\270\320\260\320\275\321\202\320\276\320\262 \320\276\321\202\320\262\320\265\321\202\320\276\320\262 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 \320\276\321\202\320\262\320\265\321\202\320\270\321\202\321\214", 0));
        otv1Button->setText(QApplication::translate("testForm", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 1", 0));
        otv2Button->setText(QApplication::translate("testForm", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 2", 0));
        otv3Button->setText(QApplication::translate("testForm", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 3", 0));
        otv4Button->setText(QApplication::translate("testForm", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 4", 0));
        send->setText(QApplication::translate("testForm", "\320\236\321\202\320\262\320\265\321\202\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class testForm: public Ui_testForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTFORM_H
