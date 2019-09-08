/********************************************************************************
** Form generated from reading UI file 'vscvwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCVWIDGET_H
#define UI_VSCVWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "videowidget.h"
#include "vscvideoinfo.h"

QT_BEGIN_NAMESPACE

class Ui_VSCVWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *videoWrapper;
    QVBoxLayout *verticalLayout;
    VSCVideoInfo *videoInfo;
    VideoWidget *video;

    void setupUi(QWidget *VSCVWidget)
    {
        if (VSCVWidget->objectName().isEmpty())
            VSCVWidget->setObjectName(QStringLiteral("VSCVWidget"));
        VSCVWidget->resize(486, 273);
        VSCVWidget->setMinimumSize(QSize(150, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/libuivsc32.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCVWidget->setWindowIcon(icon);
        VSCVWidget->setStyleSheet(QStringLiteral("background-color: rgb( 100,100,100);"));
        verticalLayout_2 = new QVBoxLayout(VSCVWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        videoWrapper = new QWidget(VSCVWidget);
        videoWrapper->setObjectName(QStringLiteral("videoWrapper"));
        videoWrapper->setContextMenuPolicy(Qt::DefaultContextMenu);
        videoWrapper->setAutoFillBackground(false);
        videoWrapper->setStyleSheet(QStringLiteral("background-color: rgb( 100,100,100);"));
        verticalLayout = new QVBoxLayout(videoWrapper);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        videoInfo = new VSCVideoInfo(videoWrapper);
        videoInfo->setObjectName(QStringLiteral("videoInfo"));
        videoInfo->setMinimumSize(QSize(0, 20));
        videoInfo->setMaximumSize(QSize(16777215, 20));
        videoInfo->setStyleSheet(QStringLiteral("background-color:rgb(42, 43, 44)"));

        verticalLayout->addWidget(videoInfo);

        video = new VideoWidget(videoWrapper);
        video->setObjectName(QStringLiteral("video"));
        video->setMinimumSize(QSize(0, 0));
        video->setMaximumSize(QSize(16777215, 16777215));
        video->setAutoFillBackground(false);
        video->setStyleSheet(QStringLiteral("background-color:rgb(42, 43, 44)"));

        verticalLayout->addWidget(video);


        verticalLayout_2->addWidget(videoWrapper);


        retranslateUi(VSCVWidget);

        QMetaObject::connectSlotsByName(VSCVWidget);
    } // setupUi

    void retranslateUi(QWidget *VSCVWidget)
    {
        VSCVWidget->setWindowTitle(QApplication::translate("VSCVWidget", "OpenCVR video", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCVWidget: public Ui_VSCVWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCVWIDGET_H
