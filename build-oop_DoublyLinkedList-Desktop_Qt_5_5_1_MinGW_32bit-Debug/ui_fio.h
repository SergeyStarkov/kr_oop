/********************************************************************************
** Form generated from reading UI file 'fio.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIO_H
#define UI_FIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fio
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *fio_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *group;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *okPush;

    void setupUi(QDialog *fio)
    {
        if (fio->objectName().isEmpty())
            fio->setObjectName(QStringLiteral("fio"));
        fio->resize(272, 118);
        gridLayout = new QGridLayout(fio);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fio_2 = new QLineEdit(fio);
        fio_2->setObjectName(QStringLiteral("fio_2"));
        fio_2->setMinimumSize(QSize(200, 0));
        fio_2->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(fio_2);

        label = new QLabel(fio);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        group = new QLineEdit(fio);
        group->setObjectName(QStringLiteral("group"));
        group->setMinimumSize(QSize(200, 0));
        group->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(group);

        label_2 = new QLabel(fio);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        okPush = new QPushButton(fio);
        okPush->setObjectName(QStringLiteral("okPush"));

        horizontalLayout_3->addWidget(okPush);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        retranslateUi(fio);

        QMetaObject::connectSlotsByName(fio);
    } // setupUi

    void retranslateUi(QDialog *fio)
    {
        fio->setWindowTitle(QApplication::translate("fio", "Dialog", 0));
        label->setText(QApplication::translate("fio", "\320\244\320\230\320\236", 0));
        label_2->setText(QApplication::translate("fio", "\320\223\321\200\321\203\320\277\320\277\320\260", 0));
        okPush->setText(QApplication::translate("fio", "\320\236\320\232", 0));
    } // retranslateUi

};

namespace Ui {
    class fio: public Ui_fio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIO_H
