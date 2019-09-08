/********************************************************************************
** Form generated from reading UI file 'vscmainwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCMAINWINDOWS_H
#define UI_VSCMAINWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCMainWindowsClass
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *VSCMainWindowsClass)
    {
        if (VSCMainWindowsClass->objectName().isEmpty())
            VSCMainWindowsClass->setObjectName(QStringLiteral("VSCMainWindowsClass"));
        VSCMainWindowsClass->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        VSCMainWindowsClass->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCMainWindowsClass->setWindowIcon(icon);
        VSCMainWindowsClass->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(VSCMainWindowsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VSCMainWindowsClass->setCentralWidget(centralWidget);

        retranslateUi(VSCMainWindowsClass);

        QMetaObject::connectSlotsByName(VSCMainWindowsClass);
    } // setupUi

    void retranslateUi(QMainWindow *VSCMainWindowsClass)
    {
        VSCMainWindowsClass->setWindowTitle(QApplication::translate("VSCMainWindowsClass", "OpenCVR  2015 R1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCMainWindowsClass: public Ui_VSCMainWindowsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCMAINWINDOWS_H
