/********************************************************************************
** Form generated from reading UI file 'vsccaminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCCAMINFO_H
#define UI_VSCCAMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCCamInfo
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_4;
    QRadioButton *radioButtonRtsp;
    QRadioButton *radioButtonOnvif;
    QRadioButton *radioButtonFile;
    QRadioButton *radioButtonMJPEG;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *labelIP_2;
    QLabel *labelName_4;
    QLineEdit *lineEditFile;
    QLineEdit *lineEditPort;
    QLabel *labelName_3;
    QLineEdit *lineEditRtspAddr;
    QLabel *labelName;
    QLabel *labelPort_2;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditName;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *VSCCamInfo)
    {
        if (VSCCamInfo->objectName().isEmpty())
            VSCCamInfo->setObjectName(QStringLiteral("VSCCamInfo"));
        VSCCamInfo->resize(591, 369);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCCamInfo->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSCCamInfo);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(30);
        gridLayout_4->setVerticalSpacing(20);
        radioButtonRtsp = new QRadioButton(VSCCamInfo);
        radioButtonRtsp->setObjectName(QStringLiteral("radioButtonRtsp"));
        radioButtonRtsp->setEnabled(true);
        radioButtonRtsp->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/action/resources/radiobutton_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
"    image: url(:/action/resources/radiobutton_unchecked_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:pressed {\n"
"    image: url(:/action/resources/radiobutton_unchecked_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/action/resources/radiobutton_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover {\n"
"    image: url(:/action/resources/radiobutton_checked_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:pressed {\n"
"    image: url(:/action/resources/radiobutton_checked_pressed.png);\n"
"}"));
        radioButtonRtsp->setCheckable(true);

        gridLayout_4->addWidget(radioButtonRtsp, 0, 2, 1, 1);

        radioButtonOnvif = new QRadioButton(VSCCamInfo);
        radioButtonOnvif->setObjectName(QStringLiteral("radioButtonOnvif"));
        radioButtonOnvif->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/action/resources/radiobutton_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
"    image: url(:/action/resources/radiobutton_unchecked_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:pressed {\n"
"    image: url(:/action/resources/radiobutton_unchecked_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/action/resources/radiobutton_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover {\n"
"    image: url(:/action/resources/radiobutton_checked_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:pressed {\n"
"    image: url(:/action/resources/radiobutton_checked_pressed.png);\n"
"}"));
        radioButtonOnvif->setCheckable(true);

        gridLayout_4->addWidget(radioButtonOnvif, 0, 1, 1, 1);

        radioButtonFile = new QRadioButton(VSCCamInfo);
        radioButtonFile->setObjectName(QStringLiteral("radioButtonFile"));
        radioButtonFile->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/action/resources/radiobutton_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
"    image: url(:/action/resources/radiobutton_unchecked_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:pressed {\n"
"    image: url(:/action/resources/radiobutton_unchecked_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/action/resources/radiobutton_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover {\n"
"    image: url(:/action/resources/radiobutton_checked_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:pressed {\n"
"    image: url(:/action/resources/radiobutton_checked_pressed.png);\n"
"}"));
        radioButtonFile->setCheckable(true);

        gridLayout_4->addWidget(radioButtonFile, 0, 3, 1, 1);

        radioButtonMJPEG = new QRadioButton(VSCCamInfo);
        radioButtonMJPEG->setObjectName(QStringLiteral("radioButtonMJPEG"));
        radioButtonMJPEG->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/action/resources/radiobutton_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
"    image: url(:/action/resources/radiobutton_unchecked_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:pressed {\n"
"    image: url(:/action/resources/radiobutton_unchecked_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/action/resources/radiobutton_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover {\n"
"    image: url(:/action/resources/radiobutton_checked_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:pressed {\n"
"    image: url(:/action/resources/radiobutton_checked_pressed.png);\n"
"}"));
        radioButtonMJPEG->setCheckable(true);

        gridLayout_4->addWidget(radioButtonMJPEG, 0, 4, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        labelIP_2 = new QLabel(VSCCamInfo);
        labelIP_2->setObjectName(QStringLiteral("labelIP_2"));
        labelIP_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelIP_2, 4, 0, 1, 1);

        labelName_4 = new QLabel(VSCCamInfo);
        labelName_4->setObjectName(QStringLiteral("labelName_4"));
        labelName_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelName_4, 7, 0, 1, 1);

        lineEditFile = new QLineEdit(VSCCamInfo);
        lineEditFile->setObjectName(QStringLiteral("lineEditFile"));
        lineEditFile->setMaximumSize(QSize(300, 16777215));
        lineEditFile->setReadOnly(true);

        gridLayout_2->addWidget(lineEditFile, 7, 1, 1, 1);

        lineEditPort = new QLineEdit(VSCCamInfo);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setMaximumSize(QSize(300, 16777215));
        lineEditPort->setReadOnly(true);

        gridLayout_2->addWidget(lineEditPort, 5, 1, 1, 1);

        labelName_3 = new QLabel(VSCCamInfo);
        labelName_3->setObjectName(QStringLiteral("labelName_3"));
        labelName_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelName_3, 6, 0, 1, 1);

        lineEditRtspAddr = new QLineEdit(VSCCamInfo);
        lineEditRtspAddr->setObjectName(QStringLiteral("lineEditRtspAddr"));
        lineEditRtspAddr->setMaximumSize(QSize(300, 16777215));

        gridLayout_2->addWidget(lineEditRtspAddr, 6, 1, 1, 1);

        labelName = new QLabel(VSCCamInfo);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelName, 3, 0, 1, 1);

        labelPort_2 = new QLabel(VSCCamInfo);
        labelPort_2->setObjectName(QStringLiteral("labelPort_2"));
        labelPort_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelPort_2, 5, 0, 1, 1);

        lineEditIP = new QLineEdit(VSCCamInfo);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setMaximumSize(QSize(300, 16777215));
        lineEditIP->setReadOnly(true);

        gridLayout_2->addWidget(lineEditIP, 4, 1, 1, 1);

        lineEditName = new QLineEdit(VSCCamInfo);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setMaximumSize(QSize(300, 16777215));
        lineEditName->setReadOnly(true);

        gridLayout_2->addWidget(lineEditName, 3, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(VSCCamInfo);

        QMetaObject::connectSlotsByName(VSCCamInfo);
    } // setupUi

    void retranslateUi(QWidget *VSCCamInfo)
    {
        VSCCamInfo->setWindowTitle(QApplication::translate("VSCCamInfo", "Master Hard Disk Selecting", Q_NULLPTR));
        radioButtonRtsp->setText(QApplication::translate("VSCCamInfo", "RTSP", Q_NULLPTR));
        radioButtonOnvif->setText(QApplication::translate("VSCCamInfo", "ONVIF", Q_NULLPTR));
        radioButtonFile->setText(QApplication::translate("VSCCamInfo", "FILE", Q_NULLPTR));
        radioButtonMJPEG->setText(QApplication::translate("VSCCamInfo", "MJPEG", Q_NULLPTR));
        labelIP_2->setText(QApplication::translate("VSCCamInfo", "IP Address:", Q_NULLPTR));
        labelName_4->setText(QApplication::translate("VSCCamInfo", "File Name:", Q_NULLPTR));
        labelName_3->setText(QApplication::translate("VSCCamInfo", "RTSP Address:", Q_NULLPTR));
        labelName->setText(QApplication::translate("VSCCamInfo", "Camera Name:", Q_NULLPTR));
        labelPort_2->setText(QApplication::translate("VSCCamInfo", "Port:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCCamInfo: public Ui_VSCCamInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCCAMINFO_H
