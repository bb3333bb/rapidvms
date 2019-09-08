/********************************************************************************
** Form generated from reading UI file 'vscmotreg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCMOTREG_H
#define UI_VSCMOTREG_H

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
#include "vmotconf.hpp"

QT_BEGIN_NAMESPACE

class Ui_VSCMotRegConf
{
public:
    QVBoxLayout *verticalLayout;
    VMotConf *conf;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *VSCMotRegConf)
    {
        if (VSCMotRegConf->objectName().isEmpty())
            VSCMotRegConf->setObjectName(QStringLiteral("VSCMotRegConf"));
        VSCMotRegConf->resize(636, 450);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall32.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCMotRegConf->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSCMotRegConf);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        conf = new VMotConf(VSCMotRegConf);
        conf->setObjectName(QStringLiteral("conf"));

        verticalLayout->addWidget(conf);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(VSCMotRegConf);
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

        pushButtonCancel = new QPushButton(VSCMotRegConf);
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


        retranslateUi(VSCMotRegConf);

        QMetaObject::connectSlotsByName(VSCMotRegConf);
    } // setupUi

    void retranslateUi(QWidget *VSCMotRegConf)
    {
        VSCMotRegConf->setWindowTitle(QApplication::translate("VSCMotRegConf", "Motion Region", Q_NULLPTR));
        pushButtonApply->setText(QApplication::translate("VSCMotRegConf", "Apply", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("VSCMotRegConf", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCMotRegConf: public Ui_VSCMotRegConf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCMOTREG_H
