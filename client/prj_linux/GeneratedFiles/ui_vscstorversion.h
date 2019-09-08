/********************************************************************************
** Form generated from reading UI file 'vscstorversion.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCSTORVERSION_H
#define UI_VSCSTORVERSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCStorVersion
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *ver;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *info;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *VSCStorVersion)
    {
        if (VSCStorVersion->objectName().isEmpty())
            VSCStorVersion->setObjectName(QStringLiteral("VSCStorVersion"));
        VSCStorVersion->resize(591, 369);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCStorVersion->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSCStorVersion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ver = new QLineEdit(VSCStorVersion);
        ver->setObjectName(QStringLiteral("ver"));
        ver->setReadOnly(true);

        gridLayout->addWidget(ver, 0, 1, 1, 1);

        label = new QLabel(VSCStorVersion);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(VSCStorVersion);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        info = new QLineEdit(VSCStorVersion);
        info->setObjectName(QStringLiteral("info"));
        info->setMaximumSize(QSize(16777215, 16777215));
        info->setReadOnly(true);

        gridLayout->addWidget(info, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(VSCStorVersion);

        QMetaObject::connectSlotsByName(VSCStorVersion);
    } // setupUi

    void retranslateUi(QWidget *VSCStorVersion)
    {
        VSCStorVersion->setWindowTitle(QApplication::translate("VSCStorVersion", "Master Hard Disk Selecting", Q_NULLPTR));
        label->setText(QApplication::translate("VSCStorVersion", "Version", Q_NULLPTR));
        label_2->setText(QApplication::translate("VSCStorVersion", "Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCStorVersion: public Ui_VSCStorVersion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCSTORVERSION_H
