/********************************************************************************
** Form generated from reading UI file 'demoform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOFORM_H
#define UI_DEMOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demoForm
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *refreshList;
    QCheckBox *reversCheckBox;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *toHead;
    QRadioButton *toTail;
    QRadioButton *beforePosition;
    QRadioButton *afterPosition;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addPosition;
    QPushButton *addDemo;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *edit;
    QPushButton *remove;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *upRadioButton;
    QRadioButton *downRadioButton;
    QRadioButton *toHeadRadioButton;
    QRadioButton *toTailRadioButton;
    QVBoxLayout *verticalLayout_6;
    QPushButton *move;
    QPushButton *removeAll;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *demoForm)
    {
        if (demoForm->objectName().isEmpty())
            demoForm->setObjectName(QStringLiteral("demoForm"));
        demoForm->resize(704, 526);
        gridLayout_6 = new QGridLayout(demoForm);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox = new QGroupBox(demoForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(300, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        refreshList = new QPushButton(groupBox);
        refreshList->setObjectName(QStringLiteral("refreshList"));

        horizontalLayout_4->addWidget(refreshList);

        reversCheckBox = new QCheckBox(groupBox);
        reversCheckBox->setObjectName(QStringLiteral("reversCheckBox"));

        horizontalLayout_4->addWidget(reversCheckBox);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(demoForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(400, 200));
        tabWidget->setMaximumSize(QSize(400, 200));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        gridLayout_4 = new QGridLayout(tab_1);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_2 = new QGroupBox(tab_1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toHead = new QRadioButton(groupBox_2);
        toHead->setObjectName(QStringLiteral("toHead"));

        verticalLayout_2->addWidget(toHead);

        toTail = new QRadioButton(groupBox_2);
        toTail->setObjectName(QStringLiteral("toTail"));

        verticalLayout_2->addWidget(toTail);

        beforePosition = new QRadioButton(groupBox_2);
        beforePosition->setObjectName(QStringLiteral("beforePosition"));
        beforePosition->setEnabled(false);

        verticalLayout_2->addWidget(beforePosition);

        afterPosition = new QRadioButton(groupBox_2);
        afterPosition->setObjectName(QStringLiteral("afterPosition"));
        afterPosition->setEnabled(false);

        verticalLayout_2->addWidget(afterPosition);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        addPosition = new QPushButton(groupBox_2);
        addPosition->setObjectName(QStringLiteral("addPosition"));
        addPosition->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addPosition->sizePolicy().hasHeightForWidth());
        addPosition->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(addPosition);

        addDemo = new QPushButton(groupBox_2);
        addDemo->setObjectName(QStringLiteral("addDemo"));

        verticalLayout_4->addWidget(addDemo);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        edit = new QPushButton(groupBox_3);
        edit->setObjectName(QStringLiteral("edit"));
        edit->setEnabled(false);

        verticalLayout_3->addWidget(edit);

        remove = new QPushButton(groupBox_3);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setEnabled(false);

        verticalLayout_3->addWidget(remove);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        upRadioButton = new QRadioButton(groupBox_3);
        upRadioButton->setObjectName(QStringLiteral("upRadioButton"));
        upRadioButton->setEnabled(true);

        verticalLayout_5->addWidget(upRadioButton);

        downRadioButton = new QRadioButton(groupBox_3);
        downRadioButton->setObjectName(QStringLiteral("downRadioButton"));
        downRadioButton->setEnabled(true);

        verticalLayout_5->addWidget(downRadioButton);

        toHeadRadioButton = new QRadioButton(groupBox_3);
        toHeadRadioButton->setObjectName(QStringLiteral("toHeadRadioButton"));
        toHeadRadioButton->setEnabled(true);

        verticalLayout_5->addWidget(toHeadRadioButton);

        toTailRadioButton = new QRadioButton(groupBox_3);
        toTailRadioButton->setObjectName(QStringLiteral("toTailRadioButton"));
        toTailRadioButton->setEnabled(true);

        verticalLayout_5->addWidget(toTailRadioButton);


        gridLayout_5->addLayout(verticalLayout_5, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        move = new QPushButton(groupBox_3);
        move->setObjectName(QStringLiteral("move"));
        move->setEnabled(true);

        verticalLayout_6->addWidget(move);

        removeAll = new QPushButton(groupBox_3);
        removeAll->setObjectName(QStringLiteral("removeAll"));

        verticalLayout_6->addWidget(removeAll);


        gridLayout_5->addLayout(verticalLayout_6, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        textBrowser = new QTextBrowser(demoForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        gridLayout_6->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(demoForm);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(demoForm);
    } // setupUi

    void retranslateUi(QWidget *demoForm)
    {
        demoForm->setWindowTitle(QApplication::translate("demoForm", "Form", 0));
        groupBox->setTitle(QApplication::translate("demoForm", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\224\320\233\320\241", 0));
        refreshList->setText(QApplication::translate("demoForm", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        reversCheckBox->setText(QApplication::translate("demoForm", "\320\222\321\213\320\262\320\276\320\264 \321\201 \320\272\320\276\320\275\321\206\320\260 \321\201\320\277\320\270\321\201\320\272\320\260", 0));
        groupBox_2->setTitle(QApplication::translate("demoForm", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\203\320\267\320\273\320\276\320\262 \320\262 \320\224\320\233\320\241", 0));
        toHead->setText(QApplication::translate("demoForm", "\320\222 \320\275\320\260\321\207\320\260\320\273\320\276 \321\201\320\277\320\270\321\201\320\272\320\260", 0));
        toTail->setText(QApplication::translate("demoForm", "\320\222 \320\272\320\276\320\275\320\265\321\206 \321\201\320\277\320\270\321\201\320\272\320\260", 0));
        beforePosition->setText(QApplication::translate("demoForm", "\320\237\320\265\321\200\320\265\320\264 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\274", 0));
        afterPosition->setText(QApplication::translate("demoForm", "\320\237\320\276\321\201\320\273\320\265 \320\262\321\213\320\261\321\200\320\260\320\275\320\276\320\263\320\276", 0));
        addPosition->setText(QApplication::translate("demoForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        addDemo->setText(QApplication::translate("demoForm", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\264\320\265\320\274\320\276-\320\264\320\260\320\275\320\275\321\213\320\265 \320\270\320\267 \320\261\320\260\320\267\321\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("demoForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        groupBox_3->setTitle(QApplication::translate("demoForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\203\320\267\320\273\320\260 \320\224\320\233\320\241", 0));
        edit->setText(QApplication::translate("demoForm", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214", 0));
        remove->setText(QApplication::translate("demoForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        upRadioButton->setText(QApplication::translate("demoForm", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\321\210\320\265", 0));
        downRadioButton->setText(QApplication::translate("demoForm", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\275\320\270\320\266\320\265", 0));
        toHeadRadioButton->setText(QApplication::translate("demoForm", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\262 \320\275\320\260\321\207\320\260\320\273\320\276", 0));
        toTailRadioButton->setText(QApplication::translate("demoForm", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\262 \320\272\320\276\320\275\320\265\321\206", 0));
        move->setText(QApplication::translate("demoForm", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214", 0));
        removeAll->setText(QApplication::translate("demoForm", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\320\265\321\201\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("demoForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class demoForm: public Ui_demoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOFORM_H
