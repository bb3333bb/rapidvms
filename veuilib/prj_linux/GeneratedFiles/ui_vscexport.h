/********************************************************************************
** Form generated from reading UI file 'vscexport.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCEXPORT_H
#define UI_VSCEXPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VSCExport
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QDateTimeEdit *startTime;
    QPushButton *pushButton;
    QDateTimeEdit *endTime;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbStart;
    QPushButton *pbClose;

    void setupUi(QDialog *VSCExport)
    {
        if (VSCExport->objectName().isEmpty())
            VSCExport->setObjectName(QStringLiteral("VSCExport"));
        VSCExport->setWindowModality(Qt::WindowModal);
        VSCExport->resize(421, 120);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCExport->setWindowIcon(icon);
        VSCExport->setModal(true);
        verticalLayout = new QVBoxLayout(VSCExport);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 0, 0);
        label = new QLabel(VSCExport);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(120);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(VSCExport);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(VSCExport);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        startTime = new QDateTimeEdit(VSCExport);
        startTime->setObjectName(QStringLiteral("startTime"));
        startTime->setStyleSheet(QLatin1String("QDateTimeEdit:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QDateTimeEdit:pressed {\n"
"background-color: rgb(200, 200, 200);}\n"
""));
        startTime->setWrapping(false);
        startTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        startTime->setAccelerated(false);
        startTime->setProperty("showGroupSeparator", QVariant(false));
        startTime->setDateTime(QDateTime(QDate(2015, 7, 1), QTime(0, 0, 0)));
        startTime->setCalendarPopup(false);

        horizontalLayout_2->addWidget(startTime);

        pushButton = new QPushButton(VSCExport);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(21, 21));
        pushButton->setMaximumSize(QSize(21, 21));
        pushButton->setStyleSheet(QLatin1String("background-color:rgb(60, 60, 60);\n"
"border:none;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/date/resources/date/libuinextm.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton);

        endTime = new QDateTimeEdit(VSCExport);
        endTime->setObjectName(QStringLiteral("endTime"));
        endTime->setStyleSheet(QLatin1String("QDateTimeEdit:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QDateTimeEdit:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        endTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        endTime->setDateTime(QDateTime(QDate(2015, 7, 1), QTime(0, 0, 0)));
        endTime->setCalendarPopup(false);

        horizontalLayout_2->addWidget(endTime);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbStart = new QPushButton(VSCExport);
        pbStart->setObjectName(QStringLiteral("pbStart"));
        pbStart->setMinimumSize(QSize(60, 30));
        pbStart->setMaximumSize(QSize(60, 30));
        pbStart->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibutton.png);}\n"
""));

        horizontalLayout->addWidget(pbStart);

        pbClose = new QPushButton(VSCExport);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        pbClose->setMinimumSize(QSize(60, 30));
        pbClose->setMaximumSize(QSize(60, 30));
        pbClose->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
""));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VSCExport);
        QObject::connect(pbClose, SIGNAL(clicked()), VSCExport, SLOT(reject()));

        QMetaObject::connectSlotsByName(VSCExport);
    } // setupUi

    void retranslateUi(QDialog *VSCExport)
    {
        VSCExport->setWindowTitle(QApplication::translate("VSCExport", "Export", Q_NULLPTR));
        label->setText(QApplication::translate("VSCExport", "Export task is in the dashboard, you can view the process", Q_NULLPTR));
        label_2->setText(QApplication::translate("VSCExport", "Start time", Q_NULLPTR));
        label_3->setText(QApplication::translate("VSCExport", "End time", Q_NULLPTR));
        startTime->setDisplayFormat(QApplication::translate("VSCExport", "yyyy/M/d H:mm:ss", Q_NULLPTR));
        pushButton->setText(QString());
        endTime->setDisplayFormat(QApplication::translate("VSCExport", "yyyy/M/d H:mm:ss", Q_NULLPTR));
        pbStart->setText(QApplication::translate("VSCExport", "Start", Q_NULLPTR));
        pbClose->setText(QApplication::translate("VSCExport", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCExport: public Ui_VSCExport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCEXPORT_H
