/********************************************************************************
** Form generated from reading UI file 'vidstoradd.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDSTORADD_H
#define UI_VIDSTORADD_H

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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VidStorAdd
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
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
    QGridLayout *gridLayout;
    QLabel *labelIP;
    QLabel *labelPort;
    QLineEdit *lineEditPassword;
    QLabel *labelName;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditName;
    QLineEdit *lineEditIP;
    QLabel *labelUser;
    QLabel *labelPassword;
    QLineEdit *lineEditPort;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *pbCancel;
    QPushButton *pbApply;
    QSpacerItem *horizontalSpacer_2;
    QWidget *Search;

    void setupUi(QWidget *VidStorAdd)
    {
        if (VidStorAdd->objectName().isEmpty())
            VidStorAdd->setObjectName(QStringLiteral("VidStorAdd"));
        VidStorAdd->resize(867, 450);
        VidStorAdd->setMinimumSize(QSize(0, 0));
        VidStorAdd->setMaximumSize(QSize(16777215, 16777215));
        VidStorAdd->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(VidStorAdd);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(VidStorAdd);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 865, 448));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
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
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(-1, 60, -1, -1);
        labelIP = new QLabel(groupBox_2);
        labelIP->setObjectName(QStringLiteral("labelIP"));
        labelIP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelIP, 5, 0, 1, 1);

        labelPort = new QLabel(groupBox_2);
        labelPort->setObjectName(QStringLiteral("labelPort"));
        labelPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPort, 6, 0, 1, 1);

        lineEditPassword = new QLineEdit(groupBox_2);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditPassword, 8, 1, 1, 1);

        labelName = new QLabel(groupBox_2);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelName, 3, 0, 1, 1);

        lineEditUser = new QLineEdit(groupBox_2);
        lineEditUser->setObjectName(QStringLiteral("lineEditUser"));
        lineEditUser->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditUser, 7, 1, 1, 1);

        lineEditName = new QLineEdit(groupBox_2);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditName, 3, 1, 1, 1);

        lineEditIP = new QLineEdit(groupBox_2);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditIP, 5, 1, 1, 1);

        labelUser = new QLabel(groupBox_2);
        labelUser->setObjectName(QStringLiteral("labelUser"));
        labelUser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelUser, 7, 0, 1, 1);

        labelPassword = new QLabel(groupBox_2);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword, 8, 0, 1, 1);

        lineEditPort = new QLineEdit(groupBox_2);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(lineEditPort, 6, 1, 1, 1);


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


        verticalLayout_4->addLayout(horizontalLayout);

        Search = new QWidget(scrollAreaWidgetContents);
        Search->setObjectName(QStringLiteral("Search"));

        verticalLayout_4->addWidget(Search);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(VidStorAdd);

        QMetaObject::connectSlotsByName(VidStorAdd);
    } // setupUi

    void retranslateUi(QWidget *VidStorAdd)
    {
        VidStorAdd->setWindowTitle(QApplication::translate("VidStorAdd", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("VidStorAdd", "Stor List", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("VidStorAdd", "Enable", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("VidStorAdd", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("VidStorAdd", "IP Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("VidStorAdd", "User", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("VidStorAdd", "Status", Q_NULLPTR));
        pbDelete->setText(QApplication::translate("VidStorAdd", "Delete", Q_NULLPTR));
        pbNew->setText(QApplication::translate("VidStorAdd", "New", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("VidStorAdd", "Stor ", Q_NULLPTR));
        labelIP->setText(QApplication::translate("VidStorAdd", "IP Address", Q_NULLPTR));
        labelPort->setText(QApplication::translate("VidStorAdd", "Port", Q_NULLPTR));
        labelName->setText(QApplication::translate("VidStorAdd", "Device Name", Q_NULLPTR));
        labelUser->setText(QApplication::translate("VidStorAdd", "User", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("VidStorAdd", "Password", Q_NULLPTR));
        pbCancel->setText(QApplication::translate("VidStorAdd", "Cancel", Q_NULLPTR));
        pbApply->setText(QApplication::translate("VidStorAdd", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VidStorAdd: public Ui_VidStorAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDSTORADD_H
