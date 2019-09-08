/********************************************************************************
** Form generated from reading UI file 'vscvideventsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCVIDEVENTSEARCH_H
#define UI_VSCVIDEVENTSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCVidEventSearch
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QDateTimeEdit *startTime;
    QPushButton *pushButton;
    QDateTimeEdit *endTime;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbSearch;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelPort_2;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelIP_2;
    QLineEdit *lineEditTime;
    QLineEdit *lineEditDesc;
    QLineEdit *lineEditMark;
    QLabel *labelPassword_2;
    QLineEdit *lineEditType;
    QLabel *labelPassword_3;
    QLabel *labelName_2;
    QLineEdit *lineEditStorName;
    QGridLayout *gridLayout_2;
    QPushButton *pbApply;
    QSpacerItem *horizontalSpacer_2;
    QWidget *video;

    void setupUi(QWidget *VSCVidEventSearch)
    {
        if (VSCVidEventSearch->objectName().isEmpty())
            VSCVidEventSearch->setObjectName(QStringLiteral("VSCVidEventSearch"));
        VSCVidEventSearch->resize(788, 530);
        VSCVidEventSearch->setMinimumSize(QSize(0, 0));
        VSCVidEventSearch->setMaximumSize(QSize(16777215, 16777215));
        VSCVidEventSearch->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(VSCVidEventSearch);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidget = new QTableWidget(VSCVidEventSearch);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setTextElideMode(Qt::ElideMiddle);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        startTime = new QDateTimeEdit(VSCVidEventSearch);
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

        pushButton = new QPushButton(VSCVidEventSearch);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(21, 21));
        pushButton->setMaximumSize(QSize(21, 21));
        pushButton->setStyleSheet(QLatin1String("background-color:rgb(60, 60, 60);\n"
"border:none;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/date/resources/date/libuinextm.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton);

        endTime = new QDateTimeEdit(VSCVidEventSearch);
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


        verticalLayout_3->addLayout(horizontalLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(20);
        gridLayout_3->setVerticalSpacing(0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pbSearch = new QPushButton(VSCVidEventSearch);
        pbSearch->setObjectName(QStringLiteral("pbSearch"));
        pbSearch->setMinimumSize(QSize(60, 30));
        pbSearch->setMaximumSize(QSize(60, 30));
        pbSearch->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}"));
        pbSearch->setIconSize(QSize(60, 40));

        gridLayout_3->addWidget(pbSearch, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(VSCVidEventSearch);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        labelPort_2 = new QLabel(groupBox_2);
        labelPort_2->setObjectName(QStringLiteral("labelPort_2"));
        labelPort_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPort_2, 6, 0, 1, 1);

        labelName = new QLabel(groupBox_2);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelName, 4, 0, 1, 1);

        lineEditName = new QLineEdit(groupBox_2);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setMaximumSize(QSize(300, 16777215));
        lineEditName->setReadOnly(true);

        gridLayout->addWidget(lineEditName, 4, 1, 1, 1);

        labelIP_2 = new QLabel(groupBox_2);
        labelIP_2->setObjectName(QStringLiteral("labelIP_2"));
        labelIP_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelIP_2, 5, 0, 1, 1);

        lineEditTime = new QLineEdit(groupBox_2);
        lineEditTime->setObjectName(QStringLiteral("lineEditTime"));
        lineEditTime->setMaximumSize(QSize(300, 16777215));
        lineEditTime->setReadOnly(true);

        gridLayout->addWidget(lineEditTime, 6, 1, 1, 1);

        lineEditDesc = new QLineEdit(groupBox_2);
        lineEditDesc->setObjectName(QStringLiteral("lineEditDesc"));
        lineEditDesc->setMaximumSize(QSize(300, 16777215));
        lineEditDesc->setReadOnly(true);

        gridLayout->addWidget(lineEditDesc, 7, 1, 1, 1);

        lineEditMark = new QLineEdit(groupBox_2);
        lineEditMark->setObjectName(QStringLiteral("lineEditMark"));
        lineEditMark->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditMark, 8, 1, 1, 1);

        labelPassword_2 = new QLabel(groupBox_2);
        labelPassword_2->setObjectName(QStringLiteral("labelPassword_2"));
        labelPassword_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword_2, 7, 0, 1, 1);

        lineEditType = new QLineEdit(groupBox_2);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setMaximumSize(QSize(300, 16777215));
        lineEditType->setReadOnly(true);

        gridLayout->addWidget(lineEditType, 5, 1, 1, 1);

        labelPassword_3 = new QLabel(groupBox_2);
        labelPassword_3->setObjectName(QStringLiteral("labelPassword_3"));
        labelPassword_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword_3, 8, 0, 1, 1);

        labelName_2 = new QLabel(groupBox_2);
        labelName_2->setObjectName(QStringLiteral("labelName_2"));
        labelName_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelName_2, 3, 0, 1, 1);

        lineEditStorName = new QLineEdit(groupBox_2);
        lineEditStorName->setObjectName(QStringLiteral("lineEditStorName"));
        lineEditStorName->setMaximumSize(QSize(300, 16777215));
        lineEditStorName->setReadOnly(true);

        gridLayout->addWidget(lineEditStorName, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(20);
        gridLayout_2->setVerticalSpacing(0);
        pbApply = new QPushButton(groupBox_2);
        pbApply->setObjectName(QStringLiteral("pbApply"));
        pbApply->setMinimumSize(QSize(60, 30));
        pbApply->setMaximumSize(QSize(60, 30));
        pbApply->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}"));
        pbApply->setIconSize(QSize(60, 40));

        gridLayout_2->addWidget(pbApply, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox_2);

        video = new QWidget(VSCVidEventSearch);
        video->setObjectName(QStringLiteral("video"));
        video->setMinimumSize(QSize(320, 200));

        verticalLayout_2->addWidget(video);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(VSCVidEventSearch);

        QMetaObject::connectSlotsByName(VSCVidEventSearch);
    } // setupUi

    void retranslateUi(QWidget *VSCVidEventSearch)
    {
        VSCVidEventSearch->setWindowTitle(QApplication::translate("VSCVidEventSearch", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("VSCVidEventSearch", "Stor", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("VSCVidEventSearch", "Camera", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("VSCVidEventSearch", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("VSCVidEventSearch", "Time", Q_NULLPTR));
        startTime->setDisplayFormat(QApplication::translate("VSCVidEventSearch", "yyyy/M/d H:mm:ss", Q_NULLPTR));
        pushButton->setText(QString());
        endTime->setDisplayFormat(QApplication::translate("VSCVidEventSearch", "yyyy/M/d H:mm:ss", Q_NULLPTR));
        pbSearch->setText(QApplication::translate("VSCVidEventSearch", "Search", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("VSCVidEventSearch", "Event", Q_NULLPTR));
        labelPort_2->setText(QApplication::translate("VSCVidEventSearch", "Event Time:", Q_NULLPTR));
        labelName->setText(QApplication::translate("VSCVidEventSearch", "Camera Name:", Q_NULLPTR));
        labelIP_2->setText(QApplication::translate("VSCVidEventSearch", "Event Type:", Q_NULLPTR));
        labelPassword_2->setText(QApplication::translate("VSCVidEventSearch", "Description:", Q_NULLPTR));
        labelPassword_3->setText(QApplication::translate("VSCVidEventSearch", "Mark:", Q_NULLPTR));
        labelName_2->setText(QApplication::translate("VSCVidEventSearch", "Stor Name:", Q_NULLPTR));
        pbApply->setText(QApplication::translate("VSCVidEventSearch", "Mark", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCVidEventSearch: public Ui_VSCVidEventSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCVIDEVENTSEARCH_H
