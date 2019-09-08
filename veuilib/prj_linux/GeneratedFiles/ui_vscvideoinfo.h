/********************************************************************************
** Form generated from reading UI file 'vscvideoinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCVIDEOINFO_H
#define UI_VSCVIDEOINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VSCVideoInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *labelRecording;
    QLabel *labelName;

    void setupUi(QWidget *VSCVideoInfo)
    {
        if (VSCVideoInfo->objectName().isEmpty())
            VSCVideoInfo->setObjectName(QStringLiteral("VSCVideoInfo"));
        VSCVideoInfo->setWindowModality(Qt::NonModal);
        VSCVideoInfo->resize(463, 23);
        VSCVideoInfo->setMinimumSize(QSize(0, 20));
        VSCVideoInfo->setMaximumSize(QSize(16777215, 23));
        QIcon icon;
        icon.addFile(QStringLiteral(":/action/resources/libuilogoc.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCVideoInfo->setWindowIcon(icon);
        VSCVideoInfo->setStyleSheet(QStringLiteral("background-color: rgb( 42,43,44);"));
        horizontalLayout = new QHBoxLayout(VSCVideoInfo);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelRecording = new QLabel(VSCVideoInfo);
        labelRecording->setObjectName(QStringLiteral("labelRecording"));
        labelRecording->setMinimumSize(QSize(0, 20));
        labelRecording->setMaximumSize(QSize(0, 20));
        labelRecording->setStyleSheet(QLatin1String("color : red;\n"
"font: 8pt \"Arial\";"));

        horizontalLayout->addWidget(labelRecording);

        labelName = new QLabel(VSCVideoInfo);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setMinimumSize(QSize(0, 20));
        labelName->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        labelName->setFont(font);
        labelName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        labelName->setFrameShape(QFrame::NoFrame);
        labelName->setTextFormat(Qt::AutoText);
        labelName->setScaledContents(true);
        labelName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelName->setWordWrap(true);
        labelName->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(labelName);


        retranslateUi(VSCVideoInfo);

        QMetaObject::connectSlotsByName(VSCVideoInfo);
    } // setupUi

    void retranslateUi(QWidget *VSCVideoInfo)
    {
        VSCVideoInfo->setWindowTitle(QApplication::translate("VSCVideoInfo", "OpenCVR", Q_NULLPTR));
        labelRecording->setText(QString());
        labelName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VSCVideoInfo: public Ui_VSCVideoInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCVIDEOINFO_H
