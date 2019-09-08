/********************************************************************************
** Form generated from reading UI file 'vscdashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCDASHBOARD_H
#define UI_VSCDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCDashBoard
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbTasklist;
    QLabel *label_3;
    QWidget *TaskWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *TaskLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *VSCDashBoard)
    {
        if (VSCDashBoard->objectName().isEmpty())
            VSCDashBoard->setObjectName(QStringLiteral("VSCDashBoard"));
        VSCDashBoard->resize(738, 839);
        VSCDashBoard->setMinimumSize(QSize(0, 0));
        VSCDashBoard->setMaximumSize(QSize(16777215, 16777215));
        VSCDashBoard->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(VSCDashBoard);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(VSCDashBoard);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 736, 837));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_9->setSpacing(15);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(20, 20, 20, 0);
        widget_10 = new QWidget(scrollAreaWidgetContents);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(0, 35));
        widget_10->setMaximumSize(QSize(16777215, 35));
        widget_10->setStyleSheet(QStringLiteral("background-color: rgb(41, 42, 43);"));
        horizontalLayout_5 = new QHBoxLayout(widget_10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(widget_10);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_9->addWidget(widget_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        pbTasklist = new QPushButton(scrollAreaWidgetContents);
        pbTasklist->setObjectName(QStringLiteral("pbTasklist"));
        pbTasklist->setMinimumSize(QSize(30, 30));
        pbTasklist->setMaximumSize(QSize(30, 30));
        pbTasklist->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbTasklist->setIcon(icon);
        pbTasklist->setIconSize(QSize(30, 30));
        pbTasklist->setFlat(true);

        horizontalLayout_3->addWidget(pbTasklist);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout_9->addLayout(horizontalLayout_3);

        TaskWidget = new QWidget(scrollAreaWidgetContents);
        TaskWidget->setObjectName(QStringLiteral("TaskWidget"));
        verticalLayout_5 = new QVBoxLayout(TaskWidget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        TaskLayout = new QVBoxLayout();
        TaskLayout->setObjectName(QStringLiteral("TaskLayout"));
        TaskLayout->setContentsMargins(20, -1, -1, -1);

        verticalLayout_5->addLayout(TaskLayout);


        verticalLayout_9->addWidget(TaskWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);
        widget_10->raise();
        TaskWidget->raise();

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(VSCDashBoard);

        QMetaObject::connectSlotsByName(VSCDashBoard);
    } // setupUi

    void retranslateUi(QWidget *VSCDashBoard)
    {
        VSCDashBoard->setWindowTitle(QApplication::translate("VSCDashBoard", "Form", Q_NULLPTR));
        label_7->setText(QApplication::translate("VSCDashBoard", "Task", Q_NULLPTR));
        pbTasklist->setText(QString());
        label_3->setText(QApplication::translate("VSCDashBoard", "Update task list", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCDashBoard: public Ui_VSCDashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCDASHBOARD_H
