/********************************************************************************
** Form generated from reading UI file 'dialogfio.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFIO_H
#define UI_DIALOGFIO_H

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

class Ui_dialogFIO
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *FIO;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *group;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QPushButton *cansel;

    void setupUi(QDialog *dialogFIO)
    {
        if (dialogFIO->objectName().isEmpty())
            dialogFIO->setObjectName(QStringLiteral("dialogFIO"));
        dialogFIO->resize(272, 131);
        gridLayout = new QGridLayout(dialogFIO);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        FIO = new QLineEdit(dialogFIO);
        FIO->setObjectName(QStringLiteral("FIO"));
        FIO->setMinimumSize(QSize(200, 0));
        FIO->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(FIO);

        label = new QLabel(dialogFIO);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        group = new QLineEdit(dialogFIO);
        group->setObjectName(QStringLiteral("group"));
        group->setMinimumSize(QSize(200, 0));
        group->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(group);

        label_2 = new QLabel(dialogFIO);
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

        ok = new QPushButton(dialogFIO);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout_3->addWidget(ok);

        cansel = new QPushButton(dialogFIO);
        cansel->setObjectName(QStringLiteral("cansel"));

        horizontalLayout_3->addWidget(cansel);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        retranslateUi(dialogFIO);

        QMetaObject::connectSlotsByName(dialogFIO);
    } // setupUi

    void retranslateUi(QDialog *dialogFIO)
    {
        dialogFIO->setWindowTitle(QApplication::translate("dialogFIO", "Dialog", 0));
        label->setText(QApplication::translate("dialogFIO", "\320\244\320\230\320\236", 0));
        label_2->setText(QApplication::translate("dialogFIO", "\320\223\321\200\321\203\320\277\320\277\320\260", 0));
        ok->setText(QApplication::translate("dialogFIO", "\320\236\320\232", 0));
        cansel->setText(QApplication::translate("dialogFIO", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class dialogFIO: public Ui_dialogFIO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFIO_H
