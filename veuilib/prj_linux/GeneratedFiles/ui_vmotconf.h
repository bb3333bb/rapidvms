/********************************************************************************
** Form generated from reading UI file 'vmotconf.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMOTCONF_H
#define UI_VMOTCONF_H

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
#include "vmottable.hpp"

QT_BEGIN_NAMESPACE

class Ui_VMotConf
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbOff;
    QPushButton *pbOn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbAll;
    QPushButton *pbClear;
    VMotTable *widget;

    void setupUi(QWidget *VMotConf)
    {
        if (VMotConf->objectName().isEmpty())
            VMotConf->setObjectName(QStringLiteral("VMotConf"));
        VMotConf->resize(794, 546);
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/libuivsc32.png"), QSize(), QIcon::Normal, QIcon::Off);
        VMotConf->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VMotConf);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(VMotConf);
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

        pbOn = new QPushButton(groupBox_2);
        pbOn->setObjectName(QStringLiteral("pbOn"));
        pbOn->setMinimumSize(QSize(60, 30));
        pbOn->setMaximumSize(QSize(60, 30));
        pbOn->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
""));
        pbOn->setIconSize(QSize(60, 40));

        horizontalLayout_2->addWidget(pbOn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pbAll = new QPushButton(groupBox_2);
        pbAll->setObjectName(QStringLiteral("pbAll"));
        pbAll->setMinimumSize(QSize(60, 30));
        pbAll->setMaximumSize(QSize(60, 30));
        pbAll->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
""));
        pbAll->setIconSize(QSize(60, 40));

        horizontalLayout_2->addWidget(pbAll);

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

        widget = new VMotTable(VMotConf);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(320, 240));

        verticalLayout->addWidget(widget);


        retranslateUi(VMotConf);

        QMetaObject::connectSlotsByName(VMotConf);
    } // setupUi

    void retranslateUi(QWidget *VMotConf)
    {
        VMotConf->setWindowTitle(QApplication::translate("VMotConf", "Motion Region", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("VMotConf", "Setting", Q_NULLPTR));
        pbOff->setText(QApplication::translate("VMotConf", "Off", Q_NULLPTR));
        pbOn->setText(QApplication::translate("VMotConf", "On", Q_NULLPTR));
        pbAll->setText(QApplication::translate("VMotConf", "All", Q_NULLPTR));
        pbClear->setText(QApplication::translate("VMotConf", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VMotConf: public Ui_VMotConf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMOTCONF_H
