/********************************************************************************
** Form generated from reading UI file 'vscuserstatus.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCUSERSTATUS_H
#define UI_VSCUSERSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VSCUserStatus
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditName;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem;
    QPushButton *pbLogout;
    QPushButton *pbCancel;

    void setupUi(QDialog *VSCUserStatus)
    {
        if (VSCUserStatus->objectName().isEmpty())
            VSCUserStatus->setObjectName(QStringLiteral("VSCUserStatus"));
        VSCUserStatus->resize(468, 138);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCUserStatus->setWindowIcon(icon);
        VSCUserStatus->setStyleSheet(QStringLiteral("background-color: rgb(220, 220, 220);"));
        VSCUserStatus->setModal(true);
        verticalLayout = new QVBoxLayout(VSCUserStatus);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(VSCUserStatus);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 12pt \"Arial\";"));

        horizontalLayout->addWidget(label);

        lineEditName = new QLineEdit(VSCUserStatus);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setStyleSheet(QStringLiteral("font: 12pt \"Arial\";"));
        lineEditName->setReadOnly(true);

        horizontalLayout->addWidget(lineEditName);


        verticalLayout->addLayout(horizontalLayout);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        pbLogout = new QPushButton(VSCUserStatus);
        pbLogout->setObjectName(QStringLiteral("pbLogout"));
        pbLogout->setMinimumSize(QSize(60, 30));
        pbLogout->setMaximumSize(QSize(60, 30));
        pbLogout->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}"));

        _2->addWidget(pbLogout);

        pbCancel = new QPushButton(VSCUserStatus);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        pbCancel->setMinimumSize(QSize(60, 30));
        pbCancel->setMaximumSize(QSize(60, 30));
        pbCancel->setAutoFillBackground(false);
        pbCancel->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}"));

        _2->addWidget(pbCancel);


        verticalLayout->addLayout(_2);


        retranslateUi(VSCUserStatus);
        QObject::connect(pbLogout, SIGNAL(clicked()), VSCUserStatus, SLOT(accept()));
        QObject::connect(pbCancel, SIGNAL(clicked()), VSCUserStatus, SLOT(reject()));

        QMetaObject::connectSlotsByName(VSCUserStatus);
    } // setupUi

    void retranslateUi(QDialog *VSCUserStatus)
    {
        VSCUserStatus->setWindowTitle(QApplication::translate("VSCUserStatus", "User", Q_NULLPTR));
        label->setText(QApplication::translate("VSCUserStatus", "User", Q_NULLPTR));
        lineEditName->setText(QApplication::translate("VSCUserStatus", "admin", Q_NULLPTR));
        pbLogout->setText(QApplication::translate("VSCUserStatus", "Logout", Q_NULLPTR));
        pbCancel->setText(QApplication::translate("VSCUserStatus", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCUserStatus: public Ui_VSCUserStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCUSERSTATUS_H
