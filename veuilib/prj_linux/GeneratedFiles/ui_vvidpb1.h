/********************************************************************************
** Form generated from reading UI file 'vvidpb1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVIDPB1_H
#define UI_VVIDPB1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "vvidpbcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_VVidPB1
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *video;
    VVidPBControl *pbControl;

    void setupUi(QWidget *VVidPB1)
    {
        if (VVidPB1->objectName().isEmpty())
            VVidPB1->setObjectName(QStringLiteral("VVidPB1"));
        VVidPB1->setWindowModality(Qt::NonModal);
        VVidPB1->resize(767, 490);
        VVidPB1->setMinimumSize(QSize(0, 0));
        VVidPB1->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/libuivsc32.png"), QSize(), QIcon::Normal, QIcon::Off);
        VVidPB1->setWindowIcon(icon);
        VVidPB1->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(VVidPB1);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        video = new QWidget(VVidPB1);
        video->setObjectName(QStringLiteral("video"));
        video->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(video);

        pbControl = new VVidPBControl(VVidPB1);
        pbControl->setObjectName(QStringLiteral("pbControl"));

        verticalLayout->addWidget(pbControl);


        retranslateUi(VVidPB1);

        QMetaObject::connectSlotsByName(VVidPB1);
    } // setupUi

    void retranslateUi(QWidget *VVidPB1)
    {
        VVidPB1->setWindowTitle(QApplication::translate("VVidPB1", "OpenCVR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VVidPB1: public Ui_VVidPB1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVIDPB1_H
