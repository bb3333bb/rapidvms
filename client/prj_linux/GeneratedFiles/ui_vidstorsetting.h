/********************************************************************************
** Form generated from reading UI file 'vidstorsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDSTORSETTING_H
#define UI_VIDSTORSETTING_H

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

class Ui_VidStorSetting
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *storName;
    QSpacerItem *horizontalSpacer_4;
    QTabWidget *tabWidget;

    void setupUi(QWidget *VidStorSetting)
    {
        if (VidStorSetting->objectName().isEmpty())
            VidStorSetting->setObjectName(QStringLiteral("VidStorSetting"));
        VidStorSetting->resize(867, 450);
        VidStorSetting->setMinimumSize(QSize(0, 0));
        VidStorSetting->setMaximumSize(QSize(16777215, 16777215));
        VidStorSetting->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(VidStorSetting);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        storName = new QLabel(VidStorSetting);
        storName->setObjectName(QStringLiteral("storName"));

        horizontalLayout_2->addWidget(storName);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(VidStorSetting);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        verticalLayout->addWidget(tabWidget);


        retranslateUi(VidStorSetting);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(VidStorSetting);
    } // setupUi

    void retranslateUi(QWidget *VidStorSetting)
    {
        VidStorSetting->setWindowTitle(QApplication::translate("VidStorSetting", "Form", Q_NULLPTR));
        storName->setText(QApplication::translate("VidStorSetting", "Stor Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VidStorSetting: public Ui_VidStorSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDSTORSETTING_H
