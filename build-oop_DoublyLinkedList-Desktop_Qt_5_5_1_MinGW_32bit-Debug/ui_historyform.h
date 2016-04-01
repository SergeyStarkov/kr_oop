/********************************************************************************
** Form generated from reading UI file 'historyform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYFORM_H
#define UI_HISTORYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_historyForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *refresh;
    QPushButton *close;

    void setupUi(QWidget *historyForm)
    {
        if (historyForm->objectName().isEmpty())
            historyForm->setObjectName(QStringLiteral("historyForm"));
        historyForm->resize(561, 398);
        gridLayout = new QGridLayout(historyForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(historyForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setShowGrid(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(historyForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refresh = new QPushButton(historyForm);
        refresh->setObjectName(QStringLiteral("refresh"));

        horizontalLayout->addWidget(refresh);

        close = new QPushButton(historyForm);
        close->setObjectName(QStringLiteral("close"));

        horizontalLayout->addWidget(close);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(historyForm);

        QMetaObject::connectSlotsByName(historyForm);
    } // setupUi

    void retranslateUi(QWidget *historyForm)
    {
        historyForm->setWindowTitle(QApplication::translate("historyForm", "Form", 0));
        groupBox->setTitle(QApplication::translate("historyForm", "\320\227\320\260\320\277\320\270\321\201\320\270 \321\200\320\260\320\275\320\265\320\265 \320\277\321\200\320\276\320\271\320\264\320\265\320\275\320\275\321\213\321\205 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("historyForm", "\320\230\320\274\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("historyForm", "\320\223\321\200\321\203\320\277\320\277\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("historyForm", "\320\221\320\260\320\273\320\273\321\213", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("historyForm", "\320\222\321\200\320\265\320\274\321\217", 0));
        label->setText(QApplication::translate("historyForm", "\320\232\320\276\320\273\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\260\320\277\320\270\321\201\320\265\320\271 \320\262 \320\261\320\260\320\267\320\265 \320\275\320\265\320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276", 0));
        refresh->setText(QApplication::translate("historyForm", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        close->setText(QApplication::translate("historyForm", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class historyForm: public Ui_historyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYFORM_H
