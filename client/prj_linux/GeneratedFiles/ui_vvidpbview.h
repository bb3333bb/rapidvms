/********************************************************************************
** Form generated from reading UI file 'vvidpbview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVIDPBVIEW_H
#define UI_VVIDPBVIEW_H

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

QT_BEGIN_NAMESPACE

class Ui_VVidPBView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QWidget *widgetControl;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton1;
    QPushButton *pushButton2x2;
    QPushButton *pushButton1x3;
    QPushButton *pushButton6;
    QPushButton *pushButton1p6;
    QPushButton *pushButton3x3;
    QPushButton *pushButton12p1;
    QPushButton *pushButton4x4;

    void setupUi(QWidget *VVidPBView)
    {
        if (VVidPBView->objectName().isEmpty())
            VVidPBView->setObjectName(QStringLiteral("VVidPBView"));
        VVidPBView->resize(569, 413);
        VVidPBView->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vsclogod.png"), QSize(), QIcon::Normal, QIcon::Off);
        VVidPBView->setWindowIcon(icon);
        VVidPBView->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(VVidPBView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(VVidPBView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setAcceptDrops(true);
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(widget);

        widgetControl = new QWidget(VVidPBView);
        widgetControl->setObjectName(QStringLiteral("widgetControl"));
        widgetControl->setMaximumSize(QSize(16777215, 27));
        widgetControl->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230);"));
        horizontalLayout = new QHBoxLayout(widgetControl);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(365, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/view/resources/1x1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton1->setIcon(icon1);
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/view/resources/2x2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton2x2->setIcon(icon2);
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/view/resources/1x3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton1x3->setIcon(icon3);
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/view/resources/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton6->setIcon(icon4);
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
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/view/resources/1p6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton1p6->setIcon(icon5);
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
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/view/resources/3x3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton3x3->setIcon(icon6);
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
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/view/resources/12+1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton12p1->setIcon(icon7);
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
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/view/resources/4x4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton4x4->setIcon(icon8);
        pushButton4x4->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton4x4);


        verticalLayout->addWidget(widgetControl);

        widgetControl->raise();
        widget->raise();

        retranslateUi(VVidPBView);

        QMetaObject::connectSlotsByName(VVidPBView);
    } // setupUi

    void retranslateUi(QWidget *VVidPBView)
    {
        VVidPBView->setWindowTitle(QApplication::translate("VVidPBView", "View", Q_NULLPTR));
        pushButton1->setText(QString());
        pushButton2x2->setText(QString());
        pushButton1x3->setText(QString());
        pushButton6->setText(QString());
        pushButton1p6->setText(QString());
        pushButton3x3->setText(QString());
        pushButton12p1->setText(QString());
        pushButton4x4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VVidPBView: public Ui_VVidPBView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVIDPBVIEW_H
