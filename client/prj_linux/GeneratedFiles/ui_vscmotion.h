/********************************************************************************
** Form generated from reading UI file 'vscmotion.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCMOTION_H
#define UI_VSCMOTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "common/switchcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_VSCMotion
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelName;
    QComboBox *stream;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelName_3;
    SwitchControl *enable;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelName_2;
    QPushButton *setupMot;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *VSCMotion)
    {
        if (VSCMotion->objectName().isEmpty())
            VSCMotion->setObjectName(QStringLiteral("VSCMotion"));
        VSCMotion->resize(636, 373);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCMotion->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(VSCMotion);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(VSCMotion);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelName = new QLabel(groupBox);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelName);

        stream = new QComboBox(groupBox);
        stream->setObjectName(QStringLiteral("stream"));
        stream->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(stream);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelName_3 = new QLabel(groupBox);
        labelName_3->setObjectName(QStringLiteral("labelName_3"));
        labelName_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelName_3);

        enable = new SwitchControl(groupBox);
        enable->setObjectName(QStringLiteral("enable"));
        enable->setMaximumSize(QSize(40, 25));

        horizontalLayout_2->addWidget(enable);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelName_2 = new QLabel(groupBox);
        labelName_2->setObjectName(QStringLiteral("labelName_2"));
        labelName_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelName_2);

        setupMot = new QPushButton(groupBox);
        setupMot->setObjectName(QStringLiteral("setupMot"));
        setupMot->setEnabled(true);
        setupMot->setMinimumSize(QSize(60, 30));
        setupMot->setMaximumSize(QSize(60, 30));
        setupMot->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));
        setupMot->setIconSize(QSize(60, 40));

        horizontalLayout_4->addWidget(setupMot);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(VSCMotion);
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

        pushButtonCancel = new QPushButton(VSCMotion);
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


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(VSCMotion);

        QMetaObject::connectSlotsByName(VSCMotion);
    } // setupUi

    void retranslateUi(QWidget *VSCMotion)
    {
        VSCMotion->setWindowTitle(QApplication::translate("VSCMotion", "Master Hard Disk Selecting", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("VSCMotion", "Server Based Motion", Q_NULLPTR));
        labelName->setText(QApplication::translate("VSCMotion", "Stream", Q_NULLPTR));
        stream->clear();
        stream->insertItems(0, QStringList()
         << QApplication::translate("VSCMotion", "Stream 1", Q_NULLPTR)
         << QApplication::translate("VSCMotion", "Stream2", Q_NULLPTR)
        );
        labelName_3->setText(QApplication::translate("VSCMotion", "Enable ", Q_NULLPTR));
        labelName_2->setText(QApplication::translate("VSCMotion", "Motion Region", Q_NULLPTR));
        setupMot->setText(QApplication::translate("VSCMotion", "Setup", Q_NULLPTR));
        pushButtonApply->setText(QApplication::translate("VSCMotion", "Apply", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("VSCMotion", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCMotion: public Ui_VSCMotion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCMOTION_H
