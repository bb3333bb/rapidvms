/********************************************************************************
** Form generated from reading UI file 'vidclientsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDCLIENTSETTING_H
#define UI_VIDCLIENTSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VidClientSetting
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *VidClientSetting)
    {
        if (VidClientSetting->objectName().isEmpty())
            VidClientSetting->setObjectName(QStringLiteral("VidClientSetting"));
        VidClientSetting->resize(867, 450);
        VidClientSetting->setMinimumSize(QSize(0, 0));
        VidClientSetting->setMaximumSize(QSize(16777215, 16777215));
        VidClientSetting->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(VidClientSetting);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(VidClientSetting);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        verticalLayout->addWidget(tabWidget);


        retranslateUi(VidClientSetting);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(VidClientSetting);
    } // setupUi

    void retranslateUi(QWidget *VidClientSetting)
    {
        VidClientSetting->setWindowTitle(QApplication::translate("VidClientSetting", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VidClientSetting: public Ui_VidClientSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDCLIENTSETTING_H
