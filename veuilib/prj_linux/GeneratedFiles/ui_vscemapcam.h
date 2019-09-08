/********************************************************************************
** Form generated from reading UI file 'vscemapcam.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCEMAPCAM_H
#define UI_VSCEMAPCAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "vscemapbutton.h"

QT_BEGIN_NAMESPACE

class Ui_VSCEmapCam
{
public:
    QHBoxLayout *horizontalLayout;
    VSCEmapButton *play;
    QLabel *name;

    void setupUi(QWidget *VSCEmapCam)
    {
        if (VSCEmapCam->objectName().isEmpty())
            VSCEmapCam->setObjectName(QStringLiteral("VSCEmapCam"));
        VSCEmapCam->resize(265, 32);
        VSCEmapCam->setMinimumSize(QSize(0, 32));
        VSCEmapCam->setMaximumSize(QSize(16777215, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/libuivsc32.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCEmapCam->setWindowIcon(icon);
        VSCEmapCam->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(VSCEmapCam);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        play = new VSCEmapButton(VSCEmapCam);
        play->setObjectName(QStringLiteral("play"));
        play->setMinimumSize(QSize(32, 32));
        play->setMaximumSize(QSize(32, 32));
        play->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuidome.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuidomehover.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuidome.png);}"));
        play->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(play);

        name = new QLabel(VSCEmapCam);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));

        horizontalLayout->addWidget(name);


        retranslateUi(VSCEmapCam);

        QMetaObject::connectSlotsByName(VSCEmapCam);
    } // setupUi

    void retranslateUi(QWidget *VSCEmapCam)
    {
        VSCEmapCam->setWindowTitle(QApplication::translate("VSCEmapCam", "OpenCVR", Q_NULLPTR));
        play->setText(QString());
        name->setText(QApplication::translate("VSCEmapCam", "Camera", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCEmapCam: public Ui_VSCEmapCam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCEMAPCAM_H
