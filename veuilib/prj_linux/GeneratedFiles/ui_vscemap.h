/********************************************************************************
** Form generated from reading UI file 'vscemap.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCEMAP_H
#define UI_VSCEMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "vscimageviewer.h"

QT_BEGIN_NAMESPACE

class Ui_VSCEMap
{
public:
    QVBoxLayout *verticalLayout;
    VSCImageViewer *widget;

    void setupUi(QWidget *VSCEMap)
    {
        if (VSCEMap->objectName().isEmpty())
            VSCEMap->setObjectName(QStringLiteral("VSCEMap"));
        VSCEMap->resize(818, 482);
        VSCEMap->setMinimumSize(QSize(300, 300));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/libuimap.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCEMap->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VSCEMap);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new VSCImageViewer(VSCEMap);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);


        retranslateUi(VSCEMap);

        QMetaObject::connectSlotsByName(VSCEMap);
    } // setupUi

    void retranslateUi(QWidget *VSCEMap)
    {
        VSCEMap->setWindowTitle(QApplication::translate("VSCEMap", "eMap", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCEMap: public Ui_VSCEMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCEMAP_H
