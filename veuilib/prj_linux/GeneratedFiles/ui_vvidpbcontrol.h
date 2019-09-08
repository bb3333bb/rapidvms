/********************************************************************************
** Form generated from reading UI file 'vvidpbcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVIDPBCONTROL_H
#define UI_VVIDPBCONTROL_H

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
#include "cmnui/vvidtimeline.h"

QT_BEGIN_NAMESPACE

class Ui_VVidPBControl
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *audio;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbPause;
    QPushButton *pbPlay;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbExport;
    QPushButton *pbDate;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pbZoomin1;
    QPushButton *pbZoomout1;
    VVIDTimeLineWidget *timeline;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pbZoomin2;
    QPushButton *pbZoomout2;

    void setupUi(QWidget *VVidPBControl)
    {
        if (VVidPBControl->objectName().isEmpty())
            VVidPBControl->setObjectName(QStringLiteral("VVidPBControl"));
        VVidPBControl->setWindowModality(Qt::NonModal);
        VVidPBControl->resize(699, 120);
        VVidPBControl->setMinimumSize(QSize(0, 120));
        VVidPBControl->setMaximumSize(QSize(16777215, 120));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/libuivsc32.png"), QSize(), QIcon::Normal, QIcon::Off);
        VVidPBControl->setWindowIcon(icon);
        VVidPBControl->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230);"));
        verticalLayout_5 = new QVBoxLayout(VVidPBControl);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(VVidPBControl);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 0);
        audio = new QPushButton(widget_2);
        audio->setObjectName(QStringLiteral("audio"));
        audio->setMinimumSize(QSize(24, 24));
        audio->setMaximumSize(QSize(24, 24));
        audio->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/action/resources/libuiaudio.png"), QSize(), QIcon::Normal, QIcon::Off);
        audio->setIcon(icon1);
        audio->setIconSize(QSize(24, 24));
        audio->setFlat(true);

        horizontalLayout->addWidget(audio);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbPause = new QPushButton(widget_2);
        pbPause->setObjectName(QStringLiteral("pbPause"));
        pbPause->setMinimumSize(QSize(24, 24));
        pbPause->setMaximumSize(QSize(24, 24));
        pbPause->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/action/resources/libuipause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPause->setIcon(icon2);
        pbPause->setIconSize(QSize(24, 24));
        pbPause->setFlat(true);

        horizontalLayout->addWidget(pbPause);

        pbPlay = new QPushButton(widget_2);
        pbPlay->setObjectName(QStringLiteral("pbPlay"));
        pbPlay->setMinimumSize(QSize(24, 24));
        pbPlay->setMaximumSize(QSize(24, 24));
        pbPlay->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/action/resources/libuiplay.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPlay->setIcon(icon3);
        pbPlay->setIconSize(QSize(24, 24));
        pbPlay->setFlat(true);

        horizontalLayout->addWidget(pbPlay);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pbExport = new QPushButton(widget_2);
        pbExport->setObjectName(QStringLiteral("pbExport"));
        pbExport->setMinimumSize(QSize(24, 24));
        pbExport->setMaximumSize(QSize(24, 24));
        pbExport->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/action/resources/libuiexportvideo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbExport->setIcon(icon4);
        pbExport->setIconSize(QSize(24, 24));
        pbExport->setFlat(true);

        horizontalLayout->addWidget(pbExport);

        pbDate = new QPushButton(widget_2);
        pbDate->setObjectName(QStringLiteral("pbDate"));
        pbDate->setMinimumSize(QSize(24, 24));
        pbDate->setMaximumSize(QSize(24, 24));
        pbDate->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/action/resources/libuidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDate->setIcon(icon5);
        pbDate->setIconSize(QSize(24, 24));
        pbDate->setFlat(true);

        horizontalLayout->addWidget(pbDate);


        verticalLayout_5->addWidget(widget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        widget = new QWidget(VVidPBControl);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pbZoomin1 = new QPushButton(widget);
        pbZoomin1->setObjectName(QStringLiteral("pbZoomin1"));
        pbZoomin1->setMinimumSize(QSize(24, 24));
        pbZoomin1->setMaximumSize(QSize(24, 24));
        pbZoomin1->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/action/resources/libuitimelinein.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbZoomin1->setIcon(icon6);
        pbZoomin1->setIconSize(QSize(24, 24));
        pbZoomin1->setFlat(true);

        verticalLayout->addWidget(pbZoomin1);

        pbZoomout1 = new QPushButton(widget);
        pbZoomout1->setObjectName(QStringLiteral("pbZoomout1"));
        pbZoomout1->setMaximumSize(QSize(24, 24));
        pbZoomout1->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/action/resources/libuitimelineout.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbZoomout1->setIcon(icon7);
        pbZoomout1->setIconSize(QSize(24, 24));
        pbZoomout1->setFlat(true);

        verticalLayout->addWidget(pbZoomout1);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(widget);

        timeline = new VVIDTimeLineWidget(VVidPBControl);
        timeline->setObjectName(QStringLiteral("timeline"));
        timeline->setStyleSheet(QStringLiteral(""));
        timeline->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(timeline);

        widget_3 = new QWidget(VVidPBControl);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        pbZoomin2 = new QPushButton(widget_3);
        pbZoomin2->setObjectName(QStringLiteral("pbZoomin2"));
        pbZoomin2->setMinimumSize(QSize(24, 24));
        pbZoomin2->setMaximumSize(QSize(24, 24));
        pbZoomin2->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        pbZoomin2->setIcon(icon6);
        pbZoomin2->setIconSize(QSize(24, 24));
        pbZoomin2->setFlat(true);

        verticalLayout_4->addWidget(pbZoomin2);

        pbZoomout2 = new QPushButton(widget_3);
        pbZoomout2->setObjectName(QStringLiteral("pbZoomout2"));
        pbZoomout2->setMaximumSize(QSize(24, 24));
        pbZoomout2->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        pbZoomout2->setIcon(icon7);
        pbZoomout2->setIconSize(QSize(24, 24));
        pbZoomout2->setFlat(true);

        verticalLayout_4->addWidget(pbZoomout2);


        verticalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_2->addWidget(widget_3);


        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(VVidPBControl);

        QMetaObject::connectSlotsByName(VVidPBControl);
    } // setupUi

    void retranslateUi(QWidget *VVidPBControl)
    {
        VVidPBControl->setWindowTitle(QApplication::translate("VVidPBControl", "OpenCVR", Q_NULLPTR));
        audio->setText(QString());
        pbPause->setText(QString());
        pbPlay->setText(QString());
        pbExport->setText(QString());
        pbDate->setText(QString());
        pbZoomin1->setText(QString());
        pbZoomout1->setText(QString());
        pbZoomin2->setText(QString());
        pbZoomout2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VVidPBControl: public Ui_VVidPBControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVIDPBCONTROL_H
