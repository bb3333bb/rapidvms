/********************************************************************************
** Form generated from reading UI file 'vschddedit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCHDDEDIT_H
#define UI_VSCHDDEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCHddEdit
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *storName;
    QSpacerItem *horizontalSpacer_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *VSCHddEdit)
    {
        if (VSCHddEdit->objectName().isEmpty())
            VSCHddEdit->setObjectName(QStringLiteral("VSCHddEdit"));
        VSCHddEdit->resize(591, 369);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        VSCHddEdit->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCHddEdit->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(VSCHddEdit);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        storName = new QLabel(VSCHddEdit);
        storName->setObjectName(QStringLiteral("storName"));

        horizontalLayout_2->addWidget(storName);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(VSCHddEdit);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 571, 320));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(VSCHddEdit);

        QMetaObject::connectSlotsByName(VSCHddEdit);
    } // setupUi

    void retranslateUi(QWidget *VSCHddEdit)
    {
        VSCHddEdit->setWindowTitle(QApplication::translate("VSCHddEdit", "Master Hard Disk Selecting", Q_NULLPTR));
        storName->setText(QApplication::translate("VSCHddEdit", "Stor Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCHddEdit: public Ui_VSCHddEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCHDDEDIT_H
