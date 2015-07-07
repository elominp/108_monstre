/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qt-plugins/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *plot;
    QGroupBox *grp_opt;
    QGridLayout *gridLayout_2;
    QSpinBox *spb_nmax;
    QLabel *lbl_nmax;
    QLabel *lbl_a;
    QDoubleSpinBox *spb_a;
    QPushButton *btn_draw;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(342, 327);
        gridLayout = new QGridLayout(MainWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plot = new QCustomPlot(MainWidget);
        plot->setObjectName(QStringLiteral("plot"));

        gridLayout->addWidget(plot, 2, 0, 1, 2);

        grp_opt = new QGroupBox(MainWidget);
        grp_opt->setObjectName(QStringLiteral("grp_opt"));
        grp_opt->setMaximumSize(QSize(16777215, 100));
        gridLayout_2 = new QGridLayout(grp_opt);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        spb_nmax = new QSpinBox(grp_opt);
        spb_nmax->setObjectName(QStringLiteral("spb_nmax"));
        spb_nmax->setMaximum(2147483647);

        gridLayout_2->addWidget(spb_nmax, 1, 3, 1, 1);

        lbl_nmax = new QLabel(grp_opt);
        lbl_nmax->setObjectName(QStringLiteral("lbl_nmax"));
        lbl_nmax->setMaximumSize(QSize(16777215, 20));
        lbl_nmax->setTextFormat(Qt::AutoText);

        gridLayout_2->addWidget(lbl_nmax, 0, 3, 1, 1);

        lbl_a = new QLabel(grp_opt);
        lbl_a->setObjectName(QStringLiteral("lbl_a"));
        lbl_a->setMaximumSize(QSize(16777215, 20));

        gridLayout_2->addWidget(lbl_a, 0, 2, 1, 1);

        spb_a = new QDoubleSpinBox(grp_opt);
        spb_a->setObjectName(QStringLiteral("spb_a"));
        spb_a->setMinimum(2);
        spb_a->setMaximum(2.14748e+09);

        gridLayout_2->addWidget(spb_a, 1, 2, 1, 1);


        gridLayout->addWidget(grp_opt, 0, 0, 1, 2);

        btn_draw = new QPushButton(MainWidget);
        btn_draw->setObjectName(QStringLiteral("btn_draw"));

        gridLayout->addWidget(btn_draw, 5, 0, 1, 2);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", 0));
        grp_opt->setTitle(QApplication::translate("MainWidget", "Parameters", 0));
        lbl_nmax->setText(QApplication::translate("MainWidget", "nmax :", 0));
        lbl_a->setText(QApplication::translate("MainWidget", "a :", 0));
        btn_draw->setText(QApplication::translate("MainWidget", "Draw", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
