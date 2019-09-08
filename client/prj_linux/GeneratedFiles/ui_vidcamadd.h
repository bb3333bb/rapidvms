/********************************************************************************
** Form generated from reading UI file 'vidcamadd.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDCAMADD_H
#define UI_VIDCAMADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VidCamAdd
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *storName;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout_3;
    QPushButton *pbDelete;
    QPushButton *pbNew;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QRadioButton *radioButtonFile;
    QRadioButton *radioButtonOnvif;
    QRadioButton *radioButtonRtsp;
    QRadioButton *radioButtonMJPEG;
    QGridLayout *gridLayout;
    QLineEdit *lineEditRtspAddr;
    QLabel *labelIP_2;
    QLineEdit *lineEditFile;
    QLabel *labelName_4;
    QLabel *labelName_3;
    QLabel *labelPort_2;
    QLineEdit *lineEditPort;
    QLineEdit *lineEditPassword;
    QLabel *labelName;
    QLabel *labelUser_2;
    QLabel *labelPassword_2;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditName;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *pbCancel;
    QPushButton *pbApply;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonSelect;
    QPushButton *pushButtonAdd;
    QSpacerItem *horizontalSpacer_5;
    QTableWidget *tableSearch;

    void setupUi(QWidget *VidCamAdd)
    {
        if (VidCamAdd->objectName().isEmpty())
            VidCamAdd->setObjectName(QStringLiteral("VidCamAdd"));
        VidCamAdd->resize(847, 705);
        VidCamAdd->setMinimumSize(QSize(0, 0));
        VidCamAdd->setMaximumSize(QSize(16777215, 16777215));
        VidCamAdd->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(VidCamAdd);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea = new QScrollArea(VidCamAdd);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 810, 756));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        storName = new QLabel(scrollAreaWidgetContents);
        storName->setObjectName(QStringLiteral("storName"));

        horizontalLayout_2->addWidget(storName);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setLayoutDirection(Qt::LeftToRight);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setTextElideMode(Qt::ElideMiddle);
        tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->setWordWrap(false);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setColumnCount(5);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(50);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(true);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(tableWidget);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(20);
        gridLayout_3->setVerticalSpacing(0);
        pbDelete = new QPushButton(groupBox);
        pbDelete->setObjectName(QStringLiteral("pbDelete"));
        pbDelete->setMinimumSize(QSize(60, 30));
        pbDelete->setMaximumSize(QSize(60, 30));
        pbDelete->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}"));
        pbDelete->setIconSize(QSize(60, 40));

        gridLayout_3->addWidget(pbDelete, 0, 3, 1, 1);

        pbNew = new QPushButton(groupBox);
        pbNew->setObjectName(QStringLiteral("pbNew"));
        pbNew->setMinimumSize(QSize(60, 30));
        pbNew->setMaximumSize(QSize(60, 30));
        pbNew->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}"));
        pbNew->setIconSize(QSize(60, 40));

        gridLayout_3->addWidget(pbNew, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        radioButtonFile = new QRadioButton(groupBox_2);
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

        gridLayout_4->addWidget(radioButtonFile, 0, 3, 1, 1);

        radioButtonOnvif = new QRadioButton(groupBox_2);
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

        gridLayout_4->addWidget(radioButtonOnvif, 0, 1, 1, 1);

        radioButtonRtsp = new QRadioButton(groupBox_2);
        radioButtonRtsp->setObjectName(QStringLiteral("radioButtonRtsp"));
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

        gridLayout_4->addWidget(radioButtonRtsp, 0, 2, 1, 1);

        radioButtonMJPEG = new QRadioButton(groupBox_2);
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

        gridLayout_4->addWidget(radioButtonMJPEG, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        lineEditRtspAddr = new QLineEdit(groupBox_2);
        lineEditRtspAddr->setObjectName(QStringLiteral("lineEditRtspAddr"));
        lineEditRtspAddr->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditRtspAddr, 8, 1, 1, 1);

        labelIP_2 = new QLabel(groupBox_2);
        labelIP_2->setObjectName(QStringLiteral("labelIP_2"));
        labelIP_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelIP_2, 4, 0, 1, 1);

        lineEditFile = new QLineEdit(groupBox_2);
        lineEditFile->setObjectName(QStringLiteral("lineEditFile"));
        lineEditFile->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditFile, 10, 1, 1, 1);

        labelName_4 = new QLabel(groupBox_2);
        labelName_4->setObjectName(QStringLiteral("labelName_4"));
        labelName_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelName_4, 10, 0, 1, 1);

        labelName_3 = new QLabel(groupBox_2);
        labelName_3->setObjectName(QStringLiteral("labelName_3"));
        labelName_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelName_3, 8, 0, 1, 1);

        labelPort_2 = new QLabel(groupBox_2);
        labelPort_2->setObjectName(QStringLiteral("labelPort_2"));
        labelPort_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPort_2, 5, 0, 1, 1);

        lineEditPort = new QLineEdit(groupBox_2);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditPort, 5, 1, 1, 1);

        lineEditPassword = new QLineEdit(groupBox_2);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditPassword, 7, 1, 1, 1);

        labelName = new QLabel(groupBox_2);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelName, 3, 0, 1, 1);

        labelUser_2 = new QLabel(groupBox_2);
        labelUser_2->setObjectName(QStringLiteral("labelUser_2"));
        labelUser_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelUser_2, 6, 0, 1, 1);

        labelPassword_2 = new QLabel(groupBox_2);
        labelPassword_2->setObjectName(QStringLiteral("labelPassword_2"));
        labelPassword_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword_2, 7, 0, 1, 1);

        lineEditIP = new QLineEdit(groupBox_2);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditIP, 4, 1, 1, 1);

        lineEditUser = new QLineEdit(groupBox_2);
        lineEditUser->setObjectName(QStringLiteral("lineEditUser"));
        lineEditUser->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditUser, 6, 1, 1, 1);

        lineEditName = new QLineEdit(groupBox_2);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditName, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(20);
        gridLayout_2->setVerticalSpacing(0);
        pbCancel = new QPushButton(groupBox_2);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        pbCancel->setMinimumSize(QSize(60, 30));
        pbCancel->setMaximumSize(QSize(60, 30));
        pbCancel->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}"));
        pbCancel->setIconSize(QSize(60, 40));

        gridLayout_2->addWidget(pbCancel, 0, 2, 1, 1);

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


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(30);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonStart = new QPushButton(groupBox_3);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        pushButtonStart->setMinimumSize(QSize(60, 30));
        pushButtonStart->setMaximumSize(QSize(60, 30));
        pushButtonStart->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));

        horizontalLayout_3->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(groupBox_3);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setMinimumSize(QSize(60, 30));
        pushButtonStop->setMaximumSize(QSize(60, 30));
        pushButtonStop->setAutoFillBackground(false);
        pushButtonStop->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));

        horizontalLayout_3->addWidget(pushButtonStop);

        pushButtonSelect = new QPushButton(groupBox_3);
        pushButtonSelect->setObjectName(QStringLiteral("pushButtonSelect"));
        pushButtonSelect->setMinimumSize(QSize(60, 30));
        pushButtonSelect->setMaximumSize(QSize(60, 30));
        pushButtonSelect->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));

        horizontalLayout_3->addWidget(pushButtonSelect);

        pushButtonAdd = new QPushButton(groupBox_3);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setMinimumSize(QSize(60, 30));
        pushButtonAdd->setMaximumSize(QSize(60, 30));
        pushButtonAdd->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));

        horizontalLayout_3->addWidget(pushButtonAdd);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_3);

        tableSearch = new QTableWidget(groupBox_3);
        if (tableSearch->columnCount() < 8)
            tableSearch->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        tableSearch->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(7, __qtablewidgetitem12);
        tableSearch->setObjectName(QStringLiteral("tableSearch"));
        tableSearch->setMinimumSize(QSize(0, 300));
        tableSearch->setFrameShape(QFrame::StyledPanel);
        tableSearch->setFrameShadow(QFrame::Sunken);
        tableSearch->setLineWidth(1);
        tableSearch->setAutoScroll(true);
        tableSearch->setTextElideMode(Qt::ElideLeft);
        tableSearch->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableSearch->setWordWrap(true);
        tableSearch->horizontalHeader()->setDefaultSectionSize(100);
        tableSearch->horizontalHeader()->setMinimumSectionSize(23);
        tableSearch->horizontalHeader()->setStretchLastSection(true);
        tableSearch->verticalHeader()->setVisible(true);
        tableSearch->verticalHeader()->setCascadingSectionResizes(true);
        tableSearch->verticalHeader()->setDefaultSectionSize(23);
        tableSearch->verticalHeader()->setMinimumSectionSize(23);
        tableSearch->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableSearch->verticalHeader()->setStretchLastSection(false);

        verticalLayout_4->addWidget(tableSearch);


        verticalLayout_5->addWidget(groupBox_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(VidCamAdd);

        QMetaObject::connectSlotsByName(VidCamAdd);
    } // setupUi

    void retranslateUi(QWidget *VidCamAdd)
    {
        VidCamAdd->setWindowTitle(QApplication::translate("VidCamAdd", "Form", Q_NULLPTR));
        storName->setText(QApplication::translate("VidCamAdd", "Stor Name", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("VidCamAdd", "Camera List", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("VidCamAdd", "Enable", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("VidCamAdd", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("VidCamAdd", "IP Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("VidCamAdd", "User", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("VidCamAdd", "Status", Q_NULLPTR));
        pbDelete->setText(QApplication::translate("VidCamAdd", "Delete", Q_NULLPTR));
        pbNew->setText(QApplication::translate("VidCamAdd", "New", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("VidCamAdd", "Camera", Q_NULLPTR));
        radioButtonFile->setText(QApplication::translate("VidCamAdd", "FILE", Q_NULLPTR));
        radioButtonOnvif->setText(QApplication::translate("VidCamAdd", "ONVIF", Q_NULLPTR));
        radioButtonRtsp->setText(QApplication::translate("VidCamAdd", "RTSP", Q_NULLPTR));
        radioButtonMJPEG->setText(QApplication::translate("VidCamAdd", "MJPEG", Q_NULLPTR));
        labelIP_2->setText(QApplication::translate("VidCamAdd", "IP Address:", Q_NULLPTR));
        labelName_4->setText(QApplication::translate("VidCamAdd", "File Name:", Q_NULLPTR));
        labelName_3->setText(QApplication::translate("VidCamAdd", "URL Address:", Q_NULLPTR));
        labelPort_2->setText(QApplication::translate("VidCamAdd", "Port:", Q_NULLPTR));
        labelName->setText(QApplication::translate("VidCamAdd", "Camera Name:", Q_NULLPTR));
        labelUser_2->setText(QApplication::translate("VidCamAdd", "User:", Q_NULLPTR));
        labelPassword_2->setText(QApplication::translate("VidCamAdd", "Password:", Q_NULLPTR));
        pbCancel->setText(QApplication::translate("VidCamAdd", "Cancel", Q_NULLPTR));
        pbApply->setText(QApplication::translate("VidCamAdd", "Apply", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("VidCamAdd", "Camera Search", Q_NULLPTR));
        pushButtonStart->setText(QApplication::translate("VidCamAdd", "Start", Q_NULLPTR));
        pushButtonStop->setText(QApplication::translate("VidCamAdd", "Stop", Q_NULLPTR));
        pushButtonSelect->setText(QApplication::translate("VidCamAdd", "Select", Q_NULLPTR));
        pushButtonAdd->setText(QApplication::translate("VidCamAdd", "Add", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableSearch->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("VidCamAdd", "IP Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableSearch->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("VidCamAdd", "Port", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableSearch->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("VidCamAdd", "Model", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableSearch->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("VidCamAdd", "ONVIF Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableSearch->horizontalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("VidCamAdd", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableSearch->horizontalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("VidCamAdd", "User", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableSearch->horizontalHeaderItem(7);
        ___qtablewidgetitem11->setText(QApplication::translate("VidCamAdd", "Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VidCamAdd: public Ui_VidCamAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDCAMADD_H
