/********************************************************************************
** Form generated from reading UI file 'vscdashboardtaskitem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCDASHBOARDTASKITEM_H
#define UI_VSCDASHBOARDTASKITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCDashBoardTaskItem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *TaskName;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QLabel *lbProcess;
    QPushButton *pbDelete;

    void setupUi(QWidget *VSCDashBoardTaskItem)
    {
        if (VSCDashBoardTaskItem->objectName().isEmpty())
            VSCDashBoardTaskItem->setObjectName(QStringLiteral("VSCDashBoardTaskItem"));
        VSCDashBoardTaskItem->resize(669, 68);
        VSCDashBoardTaskItem->setMinimumSize(QSize(0, 0));
        VSCDashBoardTaskItem->setMaximumSize(QSize(16777215, 16777215));
        VSCDashBoardTaskItem->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(VSCDashBoardTaskItem);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TaskName = new QLabel(VSCDashBoardTaskItem);
        TaskName->setObjectName(QStringLiteral("TaskName"));

        verticalLayout->addWidget(TaskName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        progressBar = new QProgressBar(VSCDashBoardTaskItem);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(0, 25));
        progressBar->setMaximumSize(QSize(16777215, 16777215));
        progressBar->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"     background-color: rgb(41, 42, 43)\n"
"}"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setFormat(QStringLiteral(""));

        horizontalLayout->addWidget(progressBar);

        lbProcess = new QLabel(VSCDashBoardTaskItem);
        lbProcess->setObjectName(QStringLiteral("lbProcess"));
        lbProcess->setMinimumSize(QSize(30, 30));
        lbProcess->setMaximumSize(QSize(30, 30));
        lbProcess->setStyleSheet(QStringLiteral("image: url(:/action/resources/processing.gif);"));

        horizontalLayout->addWidget(lbProcess);

        pbDelete = new QPushButton(VSCDashBoardTaskItem);
        pbDelete->setObjectName(QStringLiteral("pbDelete"));
        pbDelete->setMinimumSize(QSize(30, 30));
        pbDelete->setMaximumSize(QSize(30, 30));
        pbDelete->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(85, 170, 255);}\n"
"QPushButton:pressed {\n"
"background-color: rgb(200, 200, 200);}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDelete->setIcon(icon);
        pbDelete->setIconSize(QSize(40, 40));
        pbDelete->setFlat(true);

        horizontalLayout->addWidget(pbDelete);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VSCDashBoardTaskItem);

        QMetaObject::connectSlotsByName(VSCDashBoardTaskItem);
    } // setupUi

    void retranslateUi(QWidget *VSCDashBoardTaskItem)
    {
        VSCDashBoardTaskItem->setWindowTitle(QApplication::translate("VSCDashBoardTaskItem", "Form", Q_NULLPTR));
        TaskName->setText(QApplication::translate("VSCDashBoardTaskItem", "TaskName", Q_NULLPTR));
        lbProcess->setText(QString());
        pbDelete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VSCDashBoardTaskItem: public Ui_VSCDashBoardTaskItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCDASHBOARDTASKITEM_H
