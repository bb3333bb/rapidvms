/********************************************************************************
** Form generated from reading UI file 'vsclogin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCLOGIN_H
#define UI_VSCLOGIN_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCLogin
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *passwd;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem;
    QPushButton *pbLogin;
    QPushButton *pbExit;

    void setupUi(QDialog *VSCLogin)
    {
        if (VSCLogin->objectName().isEmpty())
            VSCLogin->setObjectName(QStringLiteral("VSCLogin"));
        VSCLogin->resize(523, 283);
        VSCLogin->setMinimumSize(QSize(523, 283));
        VSCLogin->setMaximumSize(QSize(523, 283));
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCLogin->setWindowIcon(icon);
        VSCLogin->setStyleSheet(QStringLiteral(""));
        VSCLogin->setModal(true);
        verticalLayout_3 = new QVBoxLayout(VSCLogin);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(VSCLogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(64, 64));
        pushButton->setMaximumSize(QSize(64, 64));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(64, 64));
        pushButton->setAutoDefault(true);
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);

        label_3 = new QLabel(VSCLogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(VSCLogin);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget = new QWidget(VSCLogin);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(64, 64));
        widget->setMaximumSize(QSize(64, 64));

        verticalLayout_2->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(VSCLogin);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label);

        username = new QLineEdit(VSCLogin);
        username->setObjectName(QStringLiteral("username"));
        username->setMinimumSize(QSize(0, 25));
        username->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        username->setFont(font3);
        username->setStyleSheet(QStringLiteral(""));
        username->setReadOnly(true);

        verticalLayout->addWidget(username);

        label_2 = new QLabel(VSCLogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(12);
        label_2->setFont(font4);
        label_2->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_2);

        passwd = new QLineEdit(VSCLogin);
        passwd->setObjectName(QStringLiteral("passwd"));
        passwd->setMinimumSize(QSize(0, 25));
        passwd->setFont(font3);
        passwd->setStyleSheet(QStringLiteral(""));
        passwd->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passwd->setEchoMode(QLineEdit::Password);
        passwd->setReadOnly(false);

        verticalLayout->addWidget(passwd);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        pbLogin = new QPushButton(VSCLogin);
        pbLogin->setObjectName(QStringLiteral("pbLogin"));
        pbLogin->setMinimumSize(QSize(60, 30));
        pbLogin->setMaximumSize(QSize(60, 30));
        pbLogin->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}"));

        _2->addWidget(pbLogin);

        pbExit = new QPushButton(VSCLogin);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setMinimumSize(QSize(60, 30));
        pbExit->setMaximumSize(QSize(60, 30));
        pbExit->setAutoFillBackground(false);
        pbExit->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/button.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/buttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/button.png);}"));

        _2->addWidget(pbExit);


        verticalLayout->addLayout(_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(VSCLogin);
        QObject::connect(pbLogin, SIGNAL(clicked()), VSCLogin, SLOT(accept()));
        QObject::connect(pbExit, SIGNAL(clicked()), VSCLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(VSCLogin);
    } // setupUi

    void retranslateUi(QDialog *VSCLogin)
    {
        VSCLogin->setWindowTitle(QApplication::translate("VSCLogin", "Welcome rapidvms", Q_NULLPTR));
        pushButton->setText(QString());
        label_3->setText(QApplication::translate("VSCLogin", "Welcome", Q_NULLPTR));
        label_4->setText(QApplication::translate("VSCLogin", "rapidvms", Q_NULLPTR));
        label->setText(QApplication::translate("VSCLogin", "Username", Q_NULLPTR));
        username->setText(QApplication::translate("VSCLogin", "admin", Q_NULLPTR));
        label_2->setText(QApplication::translate("VSCLogin", "Password", Q_NULLPTR));
        passwd->setText(QString());
        pbLogin->setText(QApplication::translate("VSCLogin", "Login", Q_NULLPTR));
        pbExit->setText(QApplication::translate("VSCLogin", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCLogin: public Ui_VSCLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCLOGIN_H
