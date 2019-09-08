/********************************************************************************
** Form generated from reading UI file 'vidcamsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDCAMSETTING_H
#define UI_VIDCAMSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VidCamSetting
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *storName;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QWidget *video;
    QSpacerItem *horizontalSpacer_3;
    QTabWidget *tabWidget;

    void setupUi(QWidget *VidCamSetting)
    {
        if (VidCamSetting->objectName().isEmpty())
            VidCamSetting->setObjectName(QStringLiteral("VidCamSetting"));
        VidCamSetting->resize(867, 450);
        VidCamSetting->setMinimumSize(QSize(0, 0));
        VidCamSetting->setMaximumSize(QSize(16777215, 16777215));
        VidCamSetting->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(VidCamSetting);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        storName = new QLabel(VidCamSetting);
        storName->setObjectName(QStringLiteral("storName"));

        horizontalLayout_2->addWidget(storName);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        video = new QWidget(VidCamSetting);
        video->setObjectName(QStringLiteral("video"));
        video->setMinimumSize(QSize(320, 200));

        horizontalLayout->addWidget(video);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(VidCamSetting);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        verticalLayout->addWidget(tabWidget);


        retranslateUi(VidCamSetting);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(VidCamSetting);
    } // setupUi

    void retranslateUi(QWidget *VidCamSetting)
    {
        VidCamSetting->setWindowTitle(QApplication::translate("VidCamSetting", "Form", Q_NULLPTR));
        storName->setText(QApplication::translate("VidCamSetting", "Stor Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VidCamSetting: public Ui_VidCamSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDCAMSETTING_H
