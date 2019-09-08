/********************************************************************************
** Form generated from reading UI file 'vscvidlist.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCVIDLIST_H
#define UI_VSCVIDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "vscvidlistframe.h"

QT_BEGIN_NAMESPACE

class Ui_VSCVidList
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *FrameFilter;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_2;
    QLineEdit *filterText;
    QPushButton *pbFilterCancel;
    QWidget *ListWidget;
    VSCVidListFrame *pbCamera;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_5;
    QLabel *lbRecorder_4;
    QSpacerItem *horizontalSpacer_4;
    VSCVidListFrame *pbGroup;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_4;
    QLabel *lbRecorder;
    QSpacerItem *horizontalSpacer;
    VSCVidListFrame *pbView;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QLabel *lbRecorder_2;
    QSpacerItem *horizontalSpacer_2;
    VSCVidListFrame *pbEmap;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_4;
    QLabel *lbRecorder_3;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *VSCVidList)
    {
        if (VSCVidList->objectName().isEmpty())
            VSCVidList->setObjectName(QStringLiteral("VSCVidList"));
        VSCVidList->resize(280, 371);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VSCVidList->sizePolicy().hasHeightForWidth());
        VSCVidList->setSizePolicy(sizePolicy);
        VSCVidList->setMinimumSize(QSize(280, 0));
        VSCVidList->setMaximumSize(QSize(16777215, 16777215));
        VSCVidList->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(VSCVidList);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 3, 1, 1);
        FrameFilter = new QFrame(VSCVidList);
        FrameFilter->setObjectName(QStringLiteral("FrameFilter"));
        FrameFilter->setMinimumSize(QSize(0, 30));
        FrameFilter->setMaximumSize(QSize(16777215, 30));
        FrameFilter->setLayoutDirection(Qt::LeftToRight);
        FrameFilter->setStyleSheet(QStringLiteral(""));
        FrameFilter->setFrameShape(QFrame::Box);
        FrameFilter->setFrameShadow(QFrame::Plain);
        horizontalLayout_4 = new QHBoxLayout(FrameFilter);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(FrameFilter);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(30, 30));
        widget_2->setMaximumSize(QSize(30, 30));
        widget_2->setStyleSheet(QStringLiteral("image: url(:/action/resources/search.png);"));

        horizontalLayout_4->addWidget(widget_2);

        filterText = new QLineEdit(FrameFilter);
        filterText->setObjectName(QStringLiteral("filterText"));
        filterText->setFrame(false);

        horizontalLayout_4->addWidget(filterText);

        pbFilterCancel = new QPushButton(FrameFilter);
        pbFilterCancel->setObjectName(QStringLiteral("pbFilterCancel"));
        pbFilterCancel->setMinimumSize(QSize(30, 30));
        pbFilterCancel->setMaximumSize(QSize(30, 30));
        pbFilterCancel->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFilterCancel->setIcon(icon);
        pbFilterCancel->setIconSize(QSize(30, 30));
        pbFilterCancel->setFlat(true);

        horizontalLayout_4->addWidget(pbFilterCancel);


        verticalLayout->addWidget(FrameFilter);

        ListWidget = new QWidget(VSCVidList);
        ListWidget->setObjectName(QStringLiteral("ListWidget"));

        verticalLayout->addWidget(ListWidget);

        pbCamera = new VSCVidListFrame(VSCVidList);
        pbCamera->setObjectName(QStringLiteral("pbCamera"));
        pbCamera->setMinimumSize(QSize(0, 30));
        pbCamera->setMaximumSize(QSize(16777215, 30));
        pbCamera->setStyleSheet(QLatin1String("QWidget:hover {\n"
"background-color: rgb(200, 200, 200);}\n"
"QWidget:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        pbCamera->setFrameShape(QFrame::Box);
        pbCamera->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(pbCamera);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(45, 0, 0, 0);
        widget_5 = new QWidget(pbCamera);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(30, 30));
        widget_5->setMaximumSize(QSize(30, 30));
        widget_5->setAutoFillBackground(false);
        widget_5->setStyleSheet(QStringLiteral("image: url(:/device/resources/camera.png);"));

        horizontalLayout_5->addWidget(widget_5);

        lbRecorder_4 = new QLabel(pbCamera);
        lbRecorder_4->setObjectName(QStringLiteral("lbRecorder_4"));
        lbRecorder_4->setStyleSheet(QStringLiteral(""));
        lbRecorder_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbRecorder_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(pbCamera);

        pbGroup = new VSCVidListFrame(VSCVidList);
        pbGroup->setObjectName(QStringLiteral("pbGroup"));
        pbGroup->setMinimumSize(QSize(0, 30));
        pbGroup->setMaximumSize(QSize(16777215, 30));
        pbGroup->setStyleSheet(QLatin1String("QWidget:hover {\n"
"background-color: rgb(200, 200, 200);}\n"
"QWidget:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        pbGroup->setFrameShape(QFrame::Box);
        pbGroup->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(pbGroup);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(45, 0, 0, 0);
        widget_4 = new QWidget(pbGroup);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(30, 30));
        widget_4->setMaximumSize(QSize(30, 30));
        widget_4->setAutoFillBackground(false);
        widget_4->setStyleSheet(QStringLiteral("image: url(:/device/resources/camgroup.png);"));

        horizontalLayout->addWidget(widget_4);

        lbRecorder = new QLabel(pbGroup);
        lbRecorder->setObjectName(QStringLiteral("lbRecorder"));
        lbRecorder->setStyleSheet(QStringLiteral(""));
        lbRecorder->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbRecorder);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(pbGroup);

        pbView = new VSCVidListFrame(VSCVidList);
        pbView->setObjectName(QStringLiteral("pbView"));
        pbView->setMinimumSize(QSize(0, 30));
        pbView->setMaximumSize(QSize(16777215, 30));
        pbView->setStyleSheet(QLatin1String("QWidget:hover {\n"
"background-color: rgb(200, 200, 200);}\n"
"QWidget:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        pbView->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(pbView);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(45, 0, 0, 0);
        widget = new QWidget(pbView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(30, 30));
        widget->setMaximumSize(QSize(30, 30));
        widget->setStyleSheet(QStringLiteral("image: url(:/device/resources/view.png);"));

        horizontalLayout_2->addWidget(widget);

        lbRecorder_2 = new QLabel(pbView);
        lbRecorder_2->setObjectName(QStringLiteral("lbRecorder_2"));
        lbRecorder_2->setStyleSheet(QStringLiteral(""));
        lbRecorder_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbRecorder_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(pbView);

        pbEmap = new VSCVidListFrame(VSCVidList);
        pbEmap->setObjectName(QStringLiteral("pbEmap"));
        pbEmap->setMinimumSize(QSize(0, 30));
        pbEmap->setMaximumSize(QSize(16777215, 30));
        pbEmap->setStyleSheet(QLatin1String("QWidget:hover {\n"
"background-color: rgb(200, 200, 200);}\n"
"QWidget:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        pbEmap->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(pbEmap);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(45, 0, 0, 0);
        frame_4 = new QFrame(pbEmap);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setMinimumSize(QSize(30, 30));
        frame_4->setMaximumSize(QSize(30, 30));
        frame_4->setStyleSheet(QStringLiteral("image: url(:/action/resources/map.png);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frame_4);

        lbRecorder_3 = new QLabel(pbEmap);
        lbRecorder_3->setObjectName(QStringLiteral("lbRecorder_3"));
        lbRecorder_3->setStyleSheet(QStringLiteral(""));
        lbRecorder_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lbRecorder_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(pbEmap);


        retranslateUi(VSCVidList);

        QMetaObject::connectSlotsByName(VSCVidList);
    } // setupUi

    void retranslateUi(QWidget *VSCVidList)
    {
        VSCVidList->setWindowTitle(QString());
        filterText->setText(QString());
        filterText->setPlaceholderText(QApplication::translate("VSCVidList", "Filter", Q_NULLPTR));
        pbFilterCancel->setText(QString());
        lbRecorder_4->setText(QApplication::translate("VSCVidList", "Camera", Q_NULLPTR));
        lbRecorder->setText(QApplication::translate("VSCVidList", "Group", Q_NULLPTR));
        lbRecorder_2->setText(QApplication::translate("VSCVidList", "Views", Q_NULLPTR));
        lbRecorder_3->setText(QApplication::translate("VSCVidList", "Emap", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCVidList: public Ui_VSCVidList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCVIDLIST_H
