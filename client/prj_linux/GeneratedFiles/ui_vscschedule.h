/********************************************************************************
** Form generated from reading UI file 'vscschedule.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCSCHEDULE_H
#define UI_VSCSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "vschedconf.hpp"

QT_BEGIN_NAMESPACE

class Ui_VSCSchedule
{
public:
    QVBoxLayout *verticalLayout;
    VSchedConf *conf;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *VSCSchedule)
    {
        if (VSCSchedule->objectName().isEmpty())
            VSCSchedule->setObjectName(QStringLiteral("VSCSchedule"));
        VSCSchedule->resize(636, 450);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCSchedule->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSCSchedule);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        conf = new VSchedConf(VSCSchedule);
        conf->setObjectName(QStringLiteral("conf"));

        verticalLayout->addWidget(conf);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(VSCSchedule);
        pushButtonApply->setObjectName(QStringLiteral("pushButtonApply"));
        pushButtonApply->setMinimumSize(QSize(60, 30));
        pushButtonApply->setMaximumSize(QSize(60, 30));
        pushButtonApply->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));
        pushButtonApply->setIconSize(QSize(60, 40));

        horizontalLayout->addWidget(pushButtonApply);

        pushButtonCancel = new QPushButton(VSCSchedule);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(60, 30));
        pushButtonCancel->setMaximumSize(QSize(60, 30));
        pushButtonCancel->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));
        pushButtonCancel->setIconSize(QSize(60, 40));

        horizontalLayout->addWidget(pushButtonCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VSCSchedule);

        QMetaObject::connectSlotsByName(VSCSchedule);
    } // setupUi

    void retranslateUi(QWidget *VSCSchedule)
    {
        VSCSchedule->setWindowTitle(QApplication::translate("VSCSchedule", "Master Hard Disk Selecting", Q_NULLPTR));
        pushButtonApply->setText(QApplication::translate("VSCSchedule", "Apply", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("VSCSchedule", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCSchedule: public Ui_VSCSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCSCHEDULE_H
