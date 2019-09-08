/********************************************************************************
** Form generated from reading UI file 'vscstreamselect.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCSTREAMSELECT_H
#define UI_VSCSTREAMSELECT_H

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

class Ui_VSCStreamSelect
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelName;
    QComboBox *stream1;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelName_2;
    QComboBox *stream2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelName_3;
    SwitchControl *autoSelect;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *VSCStreamSelect)
    {
        if (VSCStreamSelect->objectName().isEmpty())
            VSCStreamSelect->setObjectName(QStringLiteral("VSCStreamSelect"));
        VSCStreamSelect->resize(636, 373);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCStreamSelect->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(VSCStreamSelect);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(VSCStreamSelect);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelName = new QLabel(groupBox);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelName);

        stream1 = new QComboBox(groupBox);
        stream1->setObjectName(QStringLiteral("stream1"));
        stream1->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(stream1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelName_2 = new QLabel(groupBox);
        labelName_2->setObjectName(QStringLiteral("labelName_2"));
        labelName_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelName_2);

        stream2 = new QComboBox(groupBox);
        stream2->setObjectName(QStringLiteral("stream2"));
        stream2->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(stream2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelName_3 = new QLabel(groupBox);
        labelName_3->setObjectName(QStringLiteral("labelName_3"));
        labelName_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelName_3);

        autoSelect = new SwitchControl(groupBox);
        autoSelect->setObjectName(QStringLiteral("autoSelect"));
        autoSelect->setMaximumSize(QSize(40, 25));

        horizontalLayout_2->addWidget(autoSelect);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(VSCStreamSelect);
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

        pushButtonCancel = new QPushButton(VSCStreamSelect);
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


        retranslateUi(VSCStreamSelect);

        QMetaObject::connectSlotsByName(VSCStreamSelect);
    } // setupUi

    void retranslateUi(QWidget *VSCStreamSelect)
    {
        VSCStreamSelect->setWindowTitle(QApplication::translate("VSCStreamSelect", "Master Hard Disk Selecting", Q_NULLPTR));
        groupBox->setTitle(QString());
        labelName->setText(QApplication::translate("VSCStreamSelect", "Stream 1", Q_NULLPTR));
        labelName_2->setText(QApplication::translate("VSCStreamSelect", "Stream 2", Q_NULLPTR));
        labelName_3->setText(QApplication::translate("VSCStreamSelect", "Auto      ", Q_NULLPTR));
        pushButtonApply->setText(QApplication::translate("VSCStreamSelect", "Apply", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("VSCStreamSelect", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCStreamSelect: public Ui_VSCStreamSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCSTREAMSELECT_H
