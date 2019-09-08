/********************************************************************************
** Form generated from reading UI file 'vsccamrec.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCCAMREC_H
#define UI_VSCCAMREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCCamRec
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelName;
    QComboBox *stream;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *VSCCamRec)
    {
        if (VSCCamRec->objectName().isEmpty())
            VSCCamRec->setObjectName(QStringLiteral("VSCCamRec"));
        VSCCamRec->resize(636, 373);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VSCCamRec->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(VSCCamRec);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(VSCCamRec);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelName = new QLabel(groupBox);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelName);

        stream = new QComboBox(groupBox);
        stream->setObjectName(QStringLiteral("stream"));
        stream->setEnabled(false);
        stream->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(stream);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(VSCCamRec);
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

        pushButtonCancel = new QPushButton(VSCCamRec);
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


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(VSCCamRec);

        QMetaObject::connectSlotsByName(VSCCamRec);
    } // setupUi

    void retranslateUi(QWidget *VSCCamRec)
    {
        VSCCamRec->setWindowTitle(QApplication::translate("VSCCamRec", "Master Hard Disk Selecting", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("VSCCamRec", "Recording", Q_NULLPTR));
        labelName->setText(QApplication::translate("VSCCamRec", "Stream", Q_NULLPTR));
        stream->clear();
        stream->insertItems(0, QStringList()
         << QApplication::translate("VSCCamRec", "Stream 1", Q_NULLPTR)
         << QApplication::translate("VSCCamRec", "Stream2", Q_NULLPTR)
        );
        pushButtonApply->setText(QApplication::translate("VSCCamRec", "Apply", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("VSCCamRec", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCCamRec: public Ui_VSCCamRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCCAMREC_H
