/********************************************************************************
** Form generated from reading UI file 'vsclicense.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCLICENSE_H
#define UI_VSCLICENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCLicense
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *hostId;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *type;
    QLineEdit *channel;
    QLabel *label;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QDateTimeEdit *startTime;
    QPushButton *pushButton;
    QDateTimeEdit *endTime;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonImport;
    QPushButton *pushButtonDefault;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *lic;

    void setupUi(QWidget *VSCLicense)
    {
        if (VSCLicense->objectName().isEmpty())
            VSCLicense->setObjectName(QStringLiteral("VSCLicense"));
        VSCLicense->resize(591, 369);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCLicense->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSCLicense);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hostId = new QLineEdit(VSCLicense);
        hostId->setObjectName(QStringLiteral("hostId"));
        hostId->setReadOnly(true);

        gridLayout->addWidget(hostId, 0, 1, 1, 1);

        label_2 = new QLabel(VSCLicense);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(VSCLicense);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        type = new QLineEdit(VSCLicense);
        type->setObjectName(QStringLiteral("type"));
        type->setEnabled(true);
        type->setMaximumSize(QSize(16777215, 16777215));
        type->setReadOnly(true);

        gridLayout->addWidget(type, 2, 1, 1, 1);

        channel = new QLineEdit(VSCLicense);
        channel->setObjectName(QStringLiteral("channel"));
        channel->setEnabled(true);
        channel->setMaximumSize(QSize(100, 16777215));
        channel->setReadOnly(true);

        gridLayout->addWidget(channel, 1, 1, 1, 1);

        label = new QLabel(VSCLicense);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(VSCLicense);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        startTime = new QDateTimeEdit(VSCLicense);
        startTime->setObjectName(QStringLiteral("startTime"));
        startTime->setStyleSheet(QStringLiteral(""));
        startTime->setWrapping(false);
        startTime->setReadOnly(true);
        startTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        startTime->setAccelerated(false);
        startTime->setProperty("showGroupSeparator", QVariant(false));
        startTime->setDateTime(QDateTime(QDate(2015, 7, 1), QTime(0, 0, 0)));
        startTime->setCalendarPopup(false);

        horizontalLayout_2->addWidget(startTime);

        pushButton = new QPushButton(VSCLicense);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(21, 21));
        pushButton->setMaximumSize(QSize(21, 21));
        pushButton->setStyleSheet(QLatin1String("background-color:rgb(60, 60, 60);\n"
"border:none;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/date/resources/date/libuinextm.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton);

        endTime = new QDateTimeEdit(VSCLicense);
        endTime->setObjectName(QStringLiteral("endTime"));
        endTime->setStyleSheet(QStringLiteral(""));
        endTime->setReadOnly(true);
        endTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        endTime->setDateTime(QDateTime(QDate(2015, 7, 1), QTime(0, 0, 0)));
        endTime->setCalendarPopup(false);

        horizontalLayout_2->addWidget(endTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonImport = new QPushButton(VSCLicense);
        pushButtonImport->setObjectName(QStringLiteral("pushButtonImport"));
        pushButtonImport->setMinimumSize(QSize(60, 30));
        pushButtonImport->setMaximumSize(QSize(60, 30));
        pushButtonImport->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));
        pushButtonImport->setIconSize(QSize(60, 40));

        horizontalLayout->addWidget(pushButtonImport);

        pushButtonDefault = new QPushButton(VSCLicense);
        pushButtonDefault->setObjectName(QStringLiteral("pushButtonDefault"));
        pushButtonDefault->setMinimumSize(QSize(60, 30));
        pushButtonDefault->setMaximumSize(QSize(60, 30));
        pushButtonDefault->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
""));
        pushButtonDefault->setIconSize(QSize(60, 40));

        horizontalLayout->addWidget(pushButtonDefault);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        lic = new QTextEdit(VSCLicense);
        lic->setObjectName(QStringLiteral("lic"));
        lic->setStyleSheet(QStringLiteral("font: 10pt \"Arial\";"));
        lic->setReadOnly(true);

        verticalLayout->addWidget(lic);


        retranslateUi(VSCLicense);

        QMetaObject::connectSlotsByName(VSCLicense);
    } // setupUi

    void retranslateUi(QWidget *VSCLicense)
    {
        VSCLicense->setWindowTitle(QApplication::translate("VSCLicense", "Master Hard Disk Selecting", Q_NULLPTR));
        label_2->setText(QApplication::translate("VSCLicense", "Channel", Q_NULLPTR));
        label_3->setText(QApplication::translate("VSCLicense", "Type", Q_NULLPTR));
        label->setText(QApplication::translate("VSCLicense", "Host ID", Q_NULLPTR));
        label_4->setText(QApplication::translate("VSCLicense", "Time", Q_NULLPTR));
        startTime->setDisplayFormat(QApplication::translate("VSCLicense", "yyyy/M/d H:mm:ss", Q_NULLPTR));
        pushButton->setText(QString());
        endTime->setDisplayFormat(QApplication::translate("VSCLicense", "yyyy/M/d H:mm:ss", Q_NULLPTR));
        pushButtonImport->setText(QApplication::translate("VSCLicense", "Import", Q_NULLPTR));
        pushButtonDefault->setText(QApplication::translate("VSCLicense", "Default", Q_NULLPTR));
        lic->setHtml(QApplication::translate("VSCLicense", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCLicense: public Ui_VSCLicense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCLICENSE_H
