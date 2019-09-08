/********************************************************************************
** Form generated from reading UI file 'vsctoolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCTOOLBAR_H
#define UI_VSCTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCToolBar
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbVidLive;
    QPushButton *pbVidSearch;
    QPushButton *pbVidConf;
    QPushButton *pbVidLiveView;
    QPushButton *pbVidPb;
    QPushButton *pbVidEventSearch;
    QPushButton *pbVidMotionSearch;
    QSpacerItem *horizontalSpacer_2;
    QLabel *time;
    QLabel *cpu;
    QLabel *lbProcess;
    QPushButton *pbVidDashBoard;
    QPushButton *pbAlarm;
    QPushButton *pbFullScreen;
    QPushButton *pbUser;
    QPushButton *pbAbout;

    void setupUi(QWidget *VSCToolBar)
    {
        if (VSCToolBar->objectName().isEmpty())
            VSCToolBar->setObjectName(QStringLiteral("VSCToolBar"));
        VSCToolBar->resize(869, 37);
        VSCToolBar->setMaximumSize(QSize(100000, 60));
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCToolBar->setWindowIcon(icon);
        VSCToolBar->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(VSCToolBar);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        pbVidLive = new QPushButton(VSCToolBar);
        pbVidLive->setObjectName(QStringLiteral("pbVidLive"));
        pbVidLive->setMinimumSize(QSize(30, 30));
        pbVidLive->setMaximumSize(QSize(30, 30));
        pbVidLive->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/action/resources/panel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbVidLive->setIcon(icon1);
        pbVidLive->setIconSize(QSize(30, 30));
        pbVidLive->setFlat(true);

        horizontalLayout->addWidget(pbVidLive);

        pbVidSearch = new QPushButton(VSCToolBar);
        pbVidSearch->setObjectName(QStringLiteral("pbVidSearch"));
        pbVidSearch->setMinimumSize(QSize(30, 30));
        pbVidSearch->setMaximumSize(QSize(30, 30));
        pbVidSearch->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/action/resources/searchplayback.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbVidSearch->setIcon(icon2);
        pbVidSearch->setIconSize(QSize(30, 30));
        pbVidSearch->setFlat(true);

        horizontalLayout->addWidget(pbVidSearch);

        pbVidConf = new QPushButton(VSCToolBar);
        pbVidConf->setObjectName(QStringLiteral("pbVidConf"));
        pbVidConf->setMinimumSize(QSize(30, 30));
        pbVidConf->setMaximumSize(QSize(30, 30));
        pbVidConf->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/action/resources/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbVidConf->setIcon(icon3);
        pbVidConf->setIconSize(QSize(30, 30));
        pbVidConf->setFlat(true);

        horizontalLayout->addWidget(pbVidConf);

        pbVidLiveView = new QPushButton(VSCToolBar);
        pbVidLiveView->setObjectName(QStringLiteral("pbVidLiveView"));
        pbVidLiveView->setMaximumSize(QSize(30, 30));
        pbVidLiveView->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/action/resources/surveillance.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbVidLiveView->setIcon(icon4);
        pbVidLiveView->setIconSize(QSize(30, 30));
        pbVidLiveView->setFlat(true);

        horizontalLayout->addWidget(pbVidLiveView);

        pbVidPb = new QPushButton(VSCToolBar);
        pbVidPb->setObjectName(QStringLiteral("pbVidPb"));
        pbVidPb->setMinimumSize(QSize(30, 30));
        pbVidPb->setMaximumSize(QSize(30, 30));
        pbVidPb->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/action/resources/videosearch3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbVidPb->setIcon(icon5);
        pbVidPb->setIconSize(QSize(30, 30));
        pbVidPb->setFlat(true);

        horizontalLayout->addWidget(pbVidPb);

        pbVidEventSearch = new QPushButton(VSCToolBar);
        pbVidEventSearch->setObjectName(QStringLiteral("pbVidEventSearch"));
        pbVidEventSearch->setMinimumSize(QSize(30, 30));
        pbVidEventSearch->setMaximumSize(QSize(30, 30));
        pbVidEventSearch->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/action/resources/alarm_search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbVidEventSearch->setIcon(icon6);
        pbVidEventSearch->setIconSize(QSize(30, 30));
        pbVidEventSearch->setFlat(true);

        horizontalLayout->addWidget(pbVidEventSearch);

        pbVidMotionSearch = new QPushButton(VSCToolBar);
        pbVidMotionSearch->setObjectName(QStringLiteral("pbVidMotionSearch"));
        pbVidMotionSearch->setMinimumSize(QSize(30, 30));
        pbVidMotionSearch->setMaximumSize(QSize(30, 30));
        pbVidMotionSearch->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/action/resources/motion_search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbVidMotionSearch->setIcon(icon7);
        pbVidMotionSearch->setIconSize(QSize(30, 30));
        pbVidMotionSearch->setFlat(true);

        horizontalLayout->addWidget(pbVidMotionSearch);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        time = new QLabel(VSCToolBar);
        time->setObjectName(QStringLiteral("time"));

        horizontalLayout->addWidget(time);

        cpu = new QLabel(VSCToolBar);
        cpu->setObjectName(QStringLiteral("cpu"));
        cpu->setMinimumSize(QSize(180, 30));
        cpu->setMaximumSize(QSize(180, 30));

        horizontalLayout->addWidget(cpu);

        lbProcess = new QLabel(VSCToolBar);
        lbProcess->setObjectName(QStringLiteral("lbProcess"));
        lbProcess->setMinimumSize(QSize(30, 30));
        lbProcess->setMaximumSize(QSize(30, 30));
        lbProcess->setStyleSheet(QStringLiteral("image: url(:/action/resources/processing.gif);"));

        horizontalLayout->addWidget(lbProcess);

        pbVidDashBoard = new QPushButton(VSCToolBar);
        pbVidDashBoard->setObjectName(QStringLiteral("pbVidDashBoard"));
        pbVidDashBoard->setMinimumSize(QSize(30, 30));
        pbVidDashBoard->setMaximumSize(QSize(30, 30));
        pbVidDashBoard->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/action/resources/dashboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbVidDashBoard->setIcon(icon8);
        pbVidDashBoard->setIconSize(QSize(30, 30));
        pbVidDashBoard->setFlat(true);

        horizontalLayout->addWidget(pbVidDashBoard);

        pbAlarm = new QPushButton(VSCToolBar);
        pbAlarm->setObjectName(QStringLiteral("pbAlarm"));
        pbAlarm->setEnabled(true);
        pbAlarm->setMinimumSize(QSize(30, 30));
        pbAlarm->setMaximumSize(QSize(30, 30));
        pbAlarm->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/action/resources/alarm.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAlarm->setIcon(icon9);
        pbAlarm->setIconSize(QSize(30, 30));
        pbAlarm->setFlat(true);

        horizontalLayout->addWidget(pbAlarm);

        pbFullScreen = new QPushButton(VSCToolBar);
        pbFullScreen->setObjectName(QStringLiteral("pbFullScreen"));
        pbFullScreen->setMinimumSize(QSize(30, 30));
        pbFullScreen->setMaximumSize(QSize(30, 30));
        pbFullScreen->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/action/resources/view-fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFullScreen->setIcon(icon10);
        pbFullScreen->setIconSize(QSize(27, 27));
        pbFullScreen->setFlat(true);

        horizontalLayout->addWidget(pbFullScreen);

        pbUser = new QPushButton(VSCToolBar);
        pbUser->setObjectName(QStringLiteral("pbUser"));
        pbUser->setMinimumSize(QSize(30, 30));
        pbUser->setMaximumSize(QSize(30, 30));
        pbUser->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/action/resources/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUser->setIcon(icon11);
        pbUser->setIconSize(QSize(30, 30));
        pbUser->setFlat(true);

        horizontalLayout->addWidget(pbUser);

        pbAbout = new QPushButton(VSCToolBar);
        pbAbout->setObjectName(QStringLiteral("pbAbout"));
        pbAbout->setMinimumSize(QSize(30, 30));
        pbAbout->setMaximumSize(QSize(30, 30));
        pbAbout->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/logo/resources/vscsmall2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAbout->setIcon(icon12);
        pbAbout->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pbAbout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(VSCToolBar);

        QMetaObject::connectSlotsByName(VSCToolBar);
    } // setupUi

    void retranslateUi(QWidget *VSCToolBar)
    {
        VSCToolBar->setWindowTitle(QApplication::translate("VSCToolBar", "VSC", Q_NULLPTR));
        pbVidLive->setText(QString());
        pbVidSearch->setText(QString());
        pbVidConf->setText(QString());
        pbVidLiveView->setText(QString());
        pbVidPb->setText(QString());
        pbVidEventSearch->setText(QString());
        pbVidMotionSearch->setText(QString());
        time->setText(QApplication::translate("VSCToolBar", "2014-03-08 14:11:00", Q_NULLPTR));
        cpu->setText(QString());
        lbProcess->setText(QString());
        pbVidDashBoard->setText(QString());
        pbAlarm->setText(QString());
        pbFullScreen->setText(QString());
        pbUser->setText(QString());
        pbAbout->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VSCToolBar: public Ui_VSCToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCTOOLBAR_H
