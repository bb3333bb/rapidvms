/********************************************************************************
** Form generated from reading UI file 'vsclanguage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCLANGUAGE_H
#define UI_VSCLANGUAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCLanguage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonZH;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButtonEN;
    QLabel *label_3;
    QRadioButton *radioButtonAuto;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *VSCLanguage)
    {
        if (VSCLanguage->objectName().isEmpty())
            VSCLanguage->setObjectName(QStringLiteral("VSCLanguage"));
        VSCLanguage->resize(591, 369);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCLanguage->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSCLanguage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(40);
        radioButtonZH = new QRadioButton(VSCLanguage);
        radioButtonZH->setObjectName(QStringLiteral("radioButtonZH"));
        radioButtonZH->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
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

        gridLayout->addWidget(radioButtonZH, 4, 1, 1, 1);

        label = new QLabel(VSCLanguage);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(VSCLanguage);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        radioButtonEN = new QRadioButton(VSCLanguage);
        radioButtonEN->setObjectName(QStringLiteral("radioButtonEN"));
        radioButtonEN->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
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

        gridLayout->addWidget(radioButtonEN, 2, 1, 1, 1);

        label_3 = new QLabel(VSCLanguage);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        radioButtonAuto = new QRadioButton(VSCLanguage);
        radioButtonAuto->setObjectName(QStringLiteral("radioButtonAuto"));
        radioButtonAuto->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
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

        gridLayout->addWidget(radioButtonAuto, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(VSCLanguage);
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

        pushButtonCancel = new QPushButton(VSCLanguage);
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


        retranslateUi(VSCLanguage);

        QMetaObject::connectSlotsByName(VSCLanguage);
    } // setupUi

    void retranslateUi(QWidget *VSCLanguage)
    {
        VSCLanguage->setWindowTitle(QApplication::translate("VSCLanguage", "Master Hard Disk Selecting", Q_NULLPTR));
        radioButtonZH->setText(QString());
        label->setText(QApplication::translate("VSCLanguage", "English", Q_NULLPTR));
        label_2->setText(QApplication::translate("VSCLanguage", "\347\256\200\344\275\223\344\270\255\346\226\207", Q_NULLPTR));
        radioButtonEN->setText(QString());
        label_3->setText(QApplication::translate("VSCLanguage", "Auto", Q_NULLPTR));
        radioButtonAuto->setText(QString());
        pushButtonApply->setText(QApplication::translate("VSCLanguage", "Apply", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("VSCLanguage", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCLanguage: public Ui_VSCLanguage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCLANGUAGE_H
