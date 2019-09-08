/********************************************************************************
** Form generated from reading UI file 'vschedconf.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCHEDCONF_H
#define UI_VSCHEDCONF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "vschedtable.hpp"

QT_BEGIN_NAMESPACE

class Ui_VSchedConf
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbOff;
    QPushButton *pbSched;
    QPushButton *pbEvent;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbAllDay;
    QPushButton *pbWorkDay;
    QPushButton *pbClear;
    VSchedTable *widget;

    void setupUi(QWidget *VSchedConf)
    {
        if (VSchedConf->objectName().isEmpty())
            VSchedConf->setObjectName(QStringLiteral("VSchedConf"));
        VSchedConf->resize(738, 314);
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/libuivsc32.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSchedConf->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSchedConf);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(VSchedConf);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 80));
        groupBox_2->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pbOff = new QPushButton(groupBox_2);
        pbOff->setObjectName(QStringLiteral("pbOff"));
        pbOff->setMinimumSize(QSize(60, 30));
        pbOff->setMaximumSize(QSize(60, 30));
        pbOff->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
""));
        pbOff->setIconSize(QSize(60, 40));

        horizontalLayout_2->addWidget(pbOff);

        pbSched = new QPushButton(groupBox_2);
        pbSched->setObjectName(QStringLiteral("pbSched"));
        pbSched->setMinimumSize(QSize(60, 30));
        pbSched->setMaximumSize(QSize(60, 30));
        QFont font;
        font.setPointSize(8);
        pbSched->setFont(font);
        pbSched->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
""));
        pbSched->setIconSize(QSize(60, 40));

        horizontalLayout_2->addWidget(pbSched);

        pbEvent = new QPushButton(groupBox_2);
        pbEvent->setObjectName(QStringLiteral("pbEvent"));
        pbEvent->setMinimumSize(QSize(60, 30));
        pbEvent->setMaximumSize(QSize(60, 30));
        pbEvent->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
""));
        pbEvent->setIconSize(QSize(60, 40));

        horizontalLayout_2->addWidget(pbEvent);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pbAllDay = new QPushButton(groupBox_2);
        pbAllDay->setObjectName(QStringLiteral("pbAllDay"));
        pbAllDay->setMinimumSize(QSize(60, 30));
        pbAllDay->setMaximumSize(QSize(60, 30));
        pbAllDay->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
""));
        pbAllDay->setIconSize(QSize(60, 40));

        horizontalLayout_2->addWidget(pbAllDay);

        pbWorkDay = new QPushButton(groupBox_2);
        pbWorkDay->setObjectName(QStringLiteral("pbWorkDay"));
        pbWorkDay->setMinimumSize(QSize(60, 30));
        pbWorkDay->setMaximumSize(QSize(60, 30));
        pbWorkDay->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
""));
        pbWorkDay->setIconSize(QSize(60, 40));

        horizontalLayout_2->addWidget(pbWorkDay);

        pbClear = new QPushButton(groupBox_2);
        pbClear->setObjectName(QStringLiteral("pbClear"));
        pbClear->setMinimumSize(QSize(60, 30));
        pbClear->setMaximumSize(QSize(60, 30));
        pbClear->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
""));
        pbClear->setIconSize(QSize(60, 40));

        horizontalLayout_2->addWidget(pbClear);


        verticalLayout->addWidget(groupBox_2);

        widget = new VSchedTable(VSchedConf);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(720, 210));

        verticalLayout->addWidget(widget);


        retranslateUi(VSchedConf);

        QMetaObject::connectSlotsByName(VSchedConf);
    } // setupUi

    void retranslateUi(QWidget *VSchedConf)
    {
        VSchedConf->setWindowTitle(QApplication::translate("VSchedConf", "OpenCVR video", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("VSchedConf", "Setting", Q_NULLPTR));
        pbOff->setText(QApplication::translate("VSchedConf", "Off", Q_NULLPTR));
        pbSched->setText(QApplication::translate("VSchedConf", "Sched", Q_NULLPTR));
        pbEvent->setText(QApplication::translate("VSchedConf", "Event", Q_NULLPTR));
        pbAllDay->setText(QApplication::translate("VSchedConf", "All Day", Q_NULLPTR));
        pbWorkDay->setText(QApplication::translate("VSchedConf", "Work Day", Q_NULLPTR));
        pbClear->setText(QApplication::translate("VSchedConf", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSchedConf: public Ui_VSchedConf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCHEDCONF_H
