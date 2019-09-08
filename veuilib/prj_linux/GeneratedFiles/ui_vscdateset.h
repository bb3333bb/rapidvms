/********************************************************************************
** Form generated from reading UI file 'vscdateset.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCDATESET_H
#define UI_VSCDATESET_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VSCDateSet
{
public:
    QVBoxLayout *verticalLayout;
    QCalendarWidget *calendar;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbClose;

    void setupUi(QDialog *VSCDateSet)
    {
        if (VSCDateSet->objectName().isEmpty())
            VSCDateSet->setObjectName(QStringLiteral("VSCDateSet"));
        VSCDateSet->setWindowModality(Qt::ApplicationModal);
        VSCDateSet->resize(238, 255);
        VSCDateSet->setMinimumSize(QSize(0, 0));
        VSCDateSet->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        VSCDateSet->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCDateSet->setWindowIcon(icon);
        VSCDateSet->setStyleSheet(QStringLiteral(""));
        VSCDateSet->setModal(true);
        verticalLayout = new QVBoxLayout(VSCDateSet);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, 0, 5);
        calendar = new QCalendarWidget(VSCDateSet);
        calendar->setObjectName(QStringLiteral("calendar"));
        calendar->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        calendar->setInputMethodHints(Qt::ImhNone);
        calendar->setSelectedDate(QDate(2016, 2, 29));
        calendar->setGridVisible(false);
        calendar->setSelectionMode(QCalendarWidget::SingleSelection);
        calendar->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendar->setNavigationBarVisible(true);
        calendar->setDateEditEnabled(false);

        verticalLayout->addWidget(calendar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pbClose = new QPushButton(VSCDateSet);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        pbClose->setMinimumSize(QSize(60, 30));
        pbClose->setMaximumSize(QSize(60, 30));
        pbClose->setStyleSheet(QLatin1String("QPushButton { \n"
"border:none;\n"
"color:white;\n"
"background-image: url(:/action/resources/libuibutton.png);}\n"
"QPushButton:hover {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/action/resources/libuibuttonpress.png);}\n"
""));

        horizontalLayout_2->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(VSCDateSet);
        QObject::connect(pbClose, SIGNAL(clicked()), VSCDateSet, SLOT(reject()));

        QMetaObject::connectSlotsByName(VSCDateSet);
    } // setupUi

    void retranslateUi(QDialog *VSCDateSet)
    {
        VSCDateSet->setWindowTitle(QApplication::translate("VSCDateSet", "Records", Q_NULLPTR));
        pbClose->setText(QApplication::translate("VSCDateSet", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCDateSet: public Ui_VSCDateSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCDATESET_H
