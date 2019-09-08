/********************************************************************************
** Form generated from reading UI file 'vscptzcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCPTZCONTROL_H
#define UI_VSCPTZCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VSCPTZControl
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *pbDown;
    QPushButton *pbUp;
    QPushButton *pbLeft;
    QPushButton *pbRight;
    QVBoxLayout *verticalLayout;
    QPushButton *pbZoomin;
    QPushButton *pbZoomout;
    QSlider *speedControl;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem;
    QPushButton *pbClose;

    void setupUi(QDialog *VSCPTZControl)
    {
        if (VSCPTZControl->objectName().isEmpty())
            VSCPTZControl->setObjectName(QStringLiteral("VSCPTZControl"));
        VSCPTZControl->setWindowModality(Qt::NonModal);
        VSCPTZControl->resize(331, 218);
        VSCPTZControl->setMinimumSize(QSize(120, 120));
        VSCPTZControl->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/libuilogoc.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCPTZControl->setWindowIcon(icon);
        VSCPTZControl->setStyleSheet(QStringLiteral(""));
        VSCPTZControl->setModal(true);
        verticalLayout_3 = new QVBoxLayout(VSCPTZControl);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbDown = new QPushButton(VSCPTZControl);
        pbDown->setObjectName(QStringLiteral("pbDown"));
        pbDown->setMinimumSize(QSize(28, 28));
        pbDown->setMaximumSize(QSize(28, 28));
        pbDown->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/action/resources/ptz-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDown->setIcon(icon1);
        pbDown->setIconSize(QSize(32, 32));
        pbDown->setFlat(true);

        gridLayout->addWidget(pbDown, 2, 1, 1, 1);

        pbUp = new QPushButton(VSCPTZControl);
        pbUp->setObjectName(QStringLiteral("pbUp"));
        pbUp->setMinimumSize(QSize(28, 28));
        pbUp->setMaximumSize(QSize(28, 28));
        pbUp->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/action/resources/ptz-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUp->setIcon(icon2);
        pbUp->setIconSize(QSize(32, 32));
        pbUp->setFlat(true);

        gridLayout->addWidget(pbUp, 0, 1, 1, 1);

        pbLeft = new QPushButton(VSCPTZControl);
        pbLeft->setObjectName(QStringLiteral("pbLeft"));
        pbLeft->setMinimumSize(QSize(28, 28));
        pbLeft->setMaximumSize(QSize(28, 28));
        pbLeft->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/action/resources/ptz-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLeft->setIcon(icon3);
        pbLeft->setIconSize(QSize(32, 32));
        pbLeft->setFlat(true);

        gridLayout->addWidget(pbLeft, 1, 0, 1, 1);

        pbRight = new QPushButton(VSCPTZControl);
        pbRight->setObjectName(QStringLiteral("pbRight"));
        pbRight->setMinimumSize(QSize(28, 28));
        pbRight->setMaximumSize(QSize(28, 28));
        pbRight->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/action/resources/ptz-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbRight->setIcon(icon4);
        pbRight->setIconSize(QSize(28, 28));
        pbRight->setFlat(true);

        gridLayout->addWidget(pbRight, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pbZoomin = new QPushButton(VSCPTZControl);
        pbZoomin->setObjectName(QStringLiteral("pbZoomin"));
        pbZoomin->setMinimumSize(QSize(28, 28));
        pbZoomin->setMaximumSize(QSize(28, 28));
        pbZoomin->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/action/resources/ptzzoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbZoomin->setIcon(icon5);
        pbZoomin->setIconSize(QSize(28, 28));
        pbZoomin->setFlat(true);

        verticalLayout->addWidget(pbZoomin);

        pbZoomout = new QPushButton(VSCPTZControl);
        pbZoomout->setObjectName(QStringLiteral("pbZoomout"));
        pbZoomout->setMinimumSize(QSize(28, 28));
        pbZoomout->setMaximumSize(QSize(28, 28));
        pbZoomout->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/action/resources/ptzzoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbZoomout->setIcon(icon6);
        pbZoomout->setIconSize(QSize(28, 28));
        pbZoomout->setFlat(true);

        verticalLayout->addWidget(pbZoomout);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        speedControl = new QSlider(VSCPTZControl);
        speedControl->setObjectName(QStringLiteral("speedControl"));
        speedControl->setAutoFillBackground(false);
        speedControl->setStyleSheet(QLatin1String("	QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"border-radius: 3px;\n"
"}"));
        speedControl->setMinimum(1);
        speedControl->setMaximum(100);
        speedControl->setSingleStep(1);
        speedControl->setOrientation(Qt::Horizontal);
        speedControl->setInvertedAppearance(false);
        speedControl->setInvertedControls(false);
        speedControl->setTickPosition(QSlider::NoTicks);

        verticalLayout_2->addWidget(speedControl);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        pbClose = new QPushButton(VSCPTZControl);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        pbClose->setMinimumSize(QSize(60, 30));
        pbClose->setMaximumSize(QSize(60, 30));
        pbClose->setAutoFillBackground(false);
        pbClose->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}"));

        _2->addWidget(pbClose);


        verticalLayout_3->addLayout(_2);


        retranslateUi(VSCPTZControl);
        QObject::connect(pbClose, SIGNAL(clicked()), VSCPTZControl, SLOT(reject()));

        QMetaObject::connectSlotsByName(VSCPTZControl);
    } // setupUi

    void retranslateUi(QDialog *VSCPTZControl)
    {
        VSCPTZControl->setWindowTitle(QApplication::translate("VSCPTZControl", "OpenCVR", Q_NULLPTR));
        pbDown->setText(QString());
        pbUp->setText(QString());
        pbLeft->setText(QString());
        pbRight->setText(QString());
        pbZoomin->setText(QString());
        pbZoomout->setText(QString());
        pbClose->setText(QApplication::translate("VSCPTZControl", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCPTZControl: public Ui_VSCPTZControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCPTZCONTROL_H
