/********************************************************************************
** Form generated from reading UI file 'vscstoruser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCSTORUSER_H
#define UI_VSCSTORUSER_H

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

QT_BEGIN_NAMESPACE

class Ui_VSCStorUser
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *newPasswd;
    QLineEdit *user;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *curPasswd;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *repeatPasswd;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *VSCStorUser)
    {
        if (VSCStorUser->objectName().isEmpty())
            VSCStorUser->setObjectName(QStringLiteral("VSCStorUser"));
        VSCStorUser->resize(636, 373);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCStorUser->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSCStorUser);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(40);
        newPasswd = new QLineEdit(VSCStorUser);
        newPasswd->setObjectName(QStringLiteral("newPasswd"));
        newPasswd->setMaximumSize(QSize(16777215, 16777215));
        newPasswd->setEchoMode(QLineEdit::Password);
        newPasswd->setReadOnly(false);

        gridLayout->addWidget(newPasswd, 2, 2, 1, 1);

        user = new QLineEdit(VSCStorUser);
        user->setObjectName(QStringLiteral("user"));
        user->setReadOnly(true);

        gridLayout->addWidget(user, 0, 2, 1, 1);

        label = new QLabel(VSCStorUser);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(VSCStorUser);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        curPasswd = new QLineEdit(VSCStorUser);
        curPasswd->setObjectName(QStringLiteral("curPasswd"));
        curPasswd->setMaximumSize(QSize(16777215, 16777215));
        curPasswd->setEchoMode(QLineEdit::Password);
        curPasswd->setReadOnly(false);

        gridLayout->addWidget(curPasswd, 1, 2, 1, 1);

        label_4 = new QLabel(VSCStorUser);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(VSCStorUser);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        repeatPasswd = new QLineEdit(VSCStorUser);
        repeatPasswd->setObjectName(QStringLiteral("repeatPasswd"));
        repeatPasswd->setMaximumSize(QSize(16777215, 16777215));
        repeatPasswd->setEchoMode(QLineEdit::Password);
        repeatPasswd->setReadOnly(false);

        gridLayout->addWidget(repeatPasswd, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(VSCStorUser);
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

        pushButtonCancel = new QPushButton(VSCStorUser);
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


        retranslateUi(VSCStorUser);

        QMetaObject::connectSlotsByName(VSCStorUser);
    } // setupUi

    void retranslateUi(QWidget *VSCStorUser)
    {
        VSCStorUser->setWindowTitle(QApplication::translate("VSCStorUser", "Master Hard Disk Selecting", Q_NULLPTR));
        user->setText(QApplication::translate("VSCStorUser", "admin", Q_NULLPTR));
        label->setText(QApplication::translate("VSCStorUser", "User", Q_NULLPTR));
        label_2->setText(QApplication::translate("VSCStorUser", "Current Password", Q_NULLPTR));
        label_4->setText(QApplication::translate("VSCStorUser", "New Password", Q_NULLPTR));
        label_5->setText(QApplication::translate("VSCStorUser", "Repeat Password", Q_NULLPTR));
        pushButtonApply->setText(QApplication::translate("VSCStorUser", "Apply", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("VSCStorUser", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCStorUser: public Ui_VSCStorUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCSTORUSER_H
