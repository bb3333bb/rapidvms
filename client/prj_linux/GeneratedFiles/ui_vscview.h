/********************************************************************************
** Form generated from reading UI file 'vscview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCVIEW_H
#define UI_VSCVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "common/switchcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_VSCView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QWidget *widgetControl;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonView;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbhwdecode;
    SwitchControl *hwdecode;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbTourPlay;
    QPushButton *pbTourStop;
    QComboBox *tourInterval;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton1;
    QPushButton *pushButton2x2;
    QPushButton *pushButton1x3;
    QPushButton *pushButton6;
    QPushButton *pushButton1p6;
    QPushButton *pushButton3x3;
    QPushButton *pushButton12p1;
    QPushButton *pushButton4x4;
    QPushButton *pushButton5x5;
    QPushButton *pushButton6x6;
    QPushButton *pushButton8x8;

    void setupUi(QWidget *VSCView)
    {
        if (VSCView->objectName().isEmpty())
            VSCView->setObjectName(QStringLiteral("VSCView"));
        VSCView->resize(696, 413);
        VSCView->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vsclogod.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCView->setWindowIcon(icon);
        VSCView->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(VSCView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(VSCView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setAcceptDrops(true);
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(widget);

        widgetControl = new QWidget(VSCView);
        widgetControl->setObjectName(QStringLiteral("widgetControl"));
        widgetControl->setMaximumSize(QSize(16777215, 27));
        widgetControl->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230);"));
        horizontalLayout = new QHBoxLayout(widgetControl);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonView = new QPushButton(widgetControl);
        pushButtonView->setObjectName(QStringLiteral("pushButtonView"));
        pushButtonView->setMinimumSize(QSize(25, 25));
        pushButtonView->setMaximumSize(QSize(30, 30));
        pushButtonView->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/device/resources/view.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonView->setIcon(icon1);
        pushButtonView->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButtonView);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lbhwdecode = new QLabel(widgetControl);
        lbhwdecode->setObjectName(QStringLiteral("lbhwdecode"));

        horizontalLayout->addWidget(lbhwdecode);

        hwdecode = new SwitchControl(widgetControl);
        hwdecode->setObjectName(QStringLiteral("hwdecode"));
        hwdecode->setMaximumSize(QSize(80, 25));

        horizontalLayout->addWidget(hwdecode);

        horizontalSpacer = new QSpacerItem(365, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbTourPlay = new QPushButton(widgetControl);
        pbTourPlay->setObjectName(QStringLiteral("pbTourPlay"));
        pbTourPlay->setMinimumSize(QSize(25, 25));
        pbTourPlay->setMaximumSize(QSize(25, 25));
        pbTourPlay->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/action/resources/tourplay.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbTourPlay->setIcon(icon2);
        pbTourPlay->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pbTourPlay);

        pbTourStop = new QPushButton(widgetControl);
        pbTourStop->setObjectName(QStringLiteral("pbTourStop"));
        pbTourStop->setMinimumSize(QSize(25, 25));
        pbTourStop->setMaximumSize(QSize(25, 25));
        pbTourStop->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/action/resources/tourstop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbTourStop->setIcon(icon3);
        pbTourStop->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pbTourStop);

        tourInterval = new QComboBox(widgetControl);
        tourInterval->setObjectName(QStringLiteral("tourInterval"));

        horizontalLayout->addWidget(tourInterval);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton1 = new QPushButton(widgetControl);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setMinimumSize(QSize(25, 25));
        pushButton1->setMaximumSize(QSize(25, 25));
        pushButton1->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/view/resources/1x1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton1->setIcon(icon4);
        pushButton1->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton1);

        pushButton2x2 = new QPushButton(widgetControl);
        pushButton2x2->setObjectName(QStringLiteral("pushButton2x2"));
        pushButton2x2->setMinimumSize(QSize(25, 25));
        pushButton2x2->setMaximumSize(QSize(25, 25));
        pushButton2x2->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/view/resources/2x2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton2x2->setIcon(icon5);
        pushButton2x2->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton2x2);

        pushButton1x3 = new QPushButton(widgetControl);
        pushButton1x3->setObjectName(QStringLiteral("pushButton1x3"));
        pushButton1x3->setMinimumSize(QSize(25, 25));
        pushButton1x3->setMaximumSize(QSize(25, 25));
        pushButton1x3->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/view/resources/1x3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton1x3->setIcon(icon6);
        pushButton1x3->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton1x3);

        pushButton6 = new QPushButton(widgetControl);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setMinimumSize(QSize(25, 25));
        pushButton6->setMaximumSize(QSize(25, 25));
        pushButton6->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/view/resources/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton6->setIcon(icon7);
        pushButton6->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton6);

        pushButton1p6 = new QPushButton(widgetControl);
        pushButton1p6->setObjectName(QStringLiteral("pushButton1p6"));
        pushButton1p6->setMinimumSize(QSize(25, 25));
        pushButton1p6->setMaximumSize(QSize(25, 25));
        pushButton1p6->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/view/resources/1p6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton1p6->setIcon(icon8);
        pushButton1p6->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton1p6);

        pushButton3x3 = new QPushButton(widgetControl);
        pushButton3x3->setObjectName(QStringLiteral("pushButton3x3"));
        pushButton3x3->setMinimumSize(QSize(25, 25));
        pushButton3x3->setMaximumSize(QSize(25, 25));
        pushButton3x3->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/view/resources/3x3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton3x3->setIcon(icon9);
        pushButton3x3->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton3x3);

        pushButton12p1 = new QPushButton(widgetControl);
        pushButton12p1->setObjectName(QStringLiteral("pushButton12p1"));
        pushButton12p1->setMaximumSize(QSize(25, 25));
        pushButton12p1->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/view/resources/12+1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton12p1->setIcon(icon10);
        pushButton12p1->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton12p1);

        pushButton4x4 = new QPushButton(widgetControl);
        pushButton4x4->setObjectName(QStringLiteral("pushButton4x4"));
        pushButton4x4->setMinimumSize(QSize(25, 25));
        pushButton4x4->setMaximumSize(QSize(25, 25));
        pushButton4x4->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/view/resources/4x4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton4x4->setIcon(icon11);
        pushButton4x4->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton4x4);

        pushButton5x5 = new QPushButton(widgetControl);
        pushButton5x5->setObjectName(QStringLiteral("pushButton5x5"));
        pushButton5x5->setMaximumSize(QSize(25, 25));
        pushButton5x5->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/view/resources/5x5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton5x5->setIcon(icon12);
        pushButton5x5->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton5x5);

        pushButton6x6 = new QPushButton(widgetControl);
        pushButton6x6->setObjectName(QStringLiteral("pushButton6x6"));
        pushButton6x6->setMaximumSize(QSize(25, 25));
        pushButton6x6->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/view/resources/6x6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton6x6->setIcon(icon13);
        pushButton6x6->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton6x6);

        pushButton8x8 = new QPushButton(widgetControl);
        pushButton8x8->setObjectName(QStringLiteral("pushButton8x8"));
        pushButton8x8->setMinimumSize(QSize(25, 25));
        pushButton8x8->setMaximumSize(QSize(25, 25));
        pushButton8x8->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/view/resources/8x8.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton8x8->setIcon(icon14);
        pushButton8x8->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton8x8);


        verticalLayout->addWidget(widgetControl);

        widgetControl->raise();
        widget->raise();

        retranslateUi(VSCView);

        QMetaObject::connectSlotsByName(VSCView);
    } // setupUi

    void retranslateUi(QWidget *VSCView)
    {
        VSCView->setWindowTitle(QApplication::translate("VSCView", "View", Q_NULLPTR));
        pushButtonView->setText(QString());
        lbhwdecode->setText(QApplication::translate("VSCView", "HW ", Q_NULLPTR));
        pbTourPlay->setText(QString());
        pbTourStop->setText(QString());
        tourInterval->clear();
        tourInterval->insertItems(0, QStringList()
         << QApplication::translate("VSCView", "20s", Q_NULLPTR)
         << QApplication::translate("VSCView", "40s", Q_NULLPTR)
         << QApplication::translate("VSCView", "1mins", Q_NULLPTR)
         << QApplication::translate("VSCView", "3mins", Q_NULLPTR)
         << QApplication::translate("VSCView", "5mins", Q_NULLPTR)
        );
        pushButton1->setText(QString());
        pushButton2x2->setText(QString());
        pushButton1x3->setText(QString());
        pushButton6->setText(QString());
        pushButton1p6->setText(QString());
        pushButton3x3->setText(QString());
        pushButton12p1->setText(QString());
        pushButton4x4->setText(QString());
        pushButton5x5->setText(QString());
        pushButton6x6->setText(QString());
        pushButton8x8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VSCView: public Ui_VSCView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCVIEW_H
