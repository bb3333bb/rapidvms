/********************************************************************************
** Form generated from reading UI file 'vscuser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCUSER_H
#define UI_VSCUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "common/switchcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_VSCUser
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *user;
    QLineEdit *newPasswd;
    SwitchControl *autoFullScreen;
    QLabel *label_4;
    QLineEdit *curPasswd;
    QLineEdit *repeatPasswd;
    SwitchControl *autoLogin;
    QLabel *label_7;
    SwitchControl *changePasswd;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *VSCUser)
    {
        if (VSCUser->objectName().isEmpty())
            VSCUser->setObjectName(QStringLiteral("VSCUser"));
        VSCUser->resize(636, 373);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCUser->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSCUser);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(40);
        label_6 = new QLabel(VSCUser);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_2 = new QLabel(VSCUser);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(VSCUser);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label = new QLabel(VSCUser);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(VSCUser);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        user = new QLineEdit(VSCUser);
        user->setObjectName(QStringLiteral("user"));
        user->setReadOnly(true);

        gridLayout->addWidget(user, 0, 2, 1, 1);

        newPasswd = new QLineEdit(VSCUser);
        newPasswd->setObjectName(QStringLiteral("newPasswd"));
        newPasswd->setMaximumSize(QSize(16777215, 16777215));
        newPasswd->setEchoMode(QLineEdit::Password);
        newPasswd->setReadOnly(false);

        gridLayout->addWidget(newPasswd, 2, 2, 1, 1);

        autoFullScreen = new SwitchControl(VSCUser);
        autoFullScreen->setObjectName(QStringLiteral("autoFullScreen"));
        autoFullScreen->setMinimumSize(QSize(0, 0));
        autoFullScreen->setMaximumSize(QSize(40, 25));

        gridLayout->addWidget(autoFullScreen, 6, 2, 1, 1);

        label_4 = new QLabel(VSCUser);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        curPasswd = new QLineEdit(VSCUser);
        curPasswd->setObjectName(QStringLiteral("curPasswd"));
        curPasswd->setMaximumSize(QSize(16777215, 16777215));
        curPasswd->setEchoMode(QLineEdit::Password);
        curPasswd->setReadOnly(false);

        gridLayout->addWidget(curPasswd, 1, 2, 1, 1);

        repeatPasswd = new QLineEdit(VSCUser);
        repeatPasswd->setObjectName(QStringLiteral("repeatPasswd"));
        repeatPasswd->setMaximumSize(QSize(16777215, 16777215));
        repeatPasswd->setEchoMode(QLineEdit::Password);
        repeatPasswd->setReadOnly(false);

        gridLayout->addWidget(repeatPasswd, 3, 2, 1, 1);

        autoLogin = new SwitchControl(VSCUser);
        autoLogin->setObjectName(QStringLiteral("autoLogin"));
        autoLogin->setMinimumSize(QSize(0, 0));
        autoLogin->setMaximumSize(QSize(40, 25));

        gridLayout->addWidget(autoLogin, 5, 2, 1, 1);

        label_7 = new QLabel(VSCUser);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        changePasswd = new SwitchControl(VSCUser);
        changePasswd->setObjectName(QStringLiteral("changePasswd"));
        changePasswd->setMinimumSize(QSize(0, 0));
        changePasswd->setMaximumSize(QSize(40, 25));

        gridLayout->addWidget(changePasswd, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(VSCUser);
        pushButtonApply->setObjectName(QStringLiteral("pushButtonApply"));
        pushButtonApply->setMinimumSize(QSize(60, 30));
        pushButtonApply->setMaximumSize(QSize(60, 30));
        pushButtonApply->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));
        pushButtonApply->setIconSize(QSize(60, 40));

        horizontalLayout->addWidget(pushButtonApply);

        pushButtonCancel = new QPushButton(VSCUser);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(60, 30));
        pushButtonCancel->setMaximumSize(QSize(60, 30));
        pushButtonCancel->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}\n"
""));
        pushButtonCancel->setIconSize(QSize(60, 40));

        horizontalLayout->addWidget(pushButtonCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VSCUser);

        QMetaObject::connectSlotsByName(VSCUser);
    } // setupUi

    void retranslateUi(QWidget *VSCUser)
    {
        VSCUser->setWindowTitle(QApplication::translate("VSCUser", "Master Hard Disk Selecting", Q_NULLPTR));
        label_6->setText(QApplication::translate("VSCUser", "Auto login", Q_NULLPTR));
        label_2->setText(QApplication::translate("VSCUser", "Current Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("VSCUser", "Auto Full Screen", Q_NULLPTR));
        label->setText(QApplication::translate("VSCUser", "User", Q_NULLPTR));
        label_5->setText(QApplication::translate("VSCUser", "Repeat Password", Q_NULLPTR));
        user->setText(QApplication::translate("VSCUser", "admin", Q_NULLPTR));
        label_4->setText(QApplication::translate("VSCUser", "New Password", Q_NULLPTR));
        label_7->setText(QApplication::translate("VSCUser", "Chnage Password", Q_NULLPTR));
        pushButtonApply->setText(QApplication::translate("VSCUser", "Apply", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("VSCUser", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCUser: public Ui_VSCUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCUSER_H
