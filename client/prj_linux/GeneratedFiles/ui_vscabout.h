/********************************************************************************
** Form generated from reading UI file 'vscabout.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSCABOUT_H
#define UI_VSCABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VSCAbout
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem;
    QPushButton *pbCancel;

    void setupUi(QDialog *VSCAbout)
    {
        if (VSCAbout->objectName().isEmpty())
            VSCAbout->setObjectName(QStringLiteral("VSCAbout"));
        VSCAbout->resize(686, 252);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/resources/vscsmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        VSCAbout->setWindowIcon(icon);
        VSCAbout->setModal(true);
        verticalLayout = new QVBoxLayout(VSCAbout);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textBrowser = new QTextBrowser(VSCAbout);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(VSCAbout);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(textBrowser_2);


        verticalLayout->addLayout(horizontalLayout);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        pbCancel = new QPushButton(VSCAbout);
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


        retranslateUi(VSCAbout);
        QObject::connect(pbCancel, SIGNAL(clicked()), VSCAbout, SLOT(reject()));

        QMetaObject::connectSlotsByName(VSCAbout);
    } // setupUi

    void retranslateUi(QDialog *VSCAbout)
    {
        VSCAbout->setWindowTitle(QApplication::translate("VSCAbout", "User", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("VSCAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://github.com/xsmart/opencvr\"><span style=\" font-size:22pt; text-decoration: underline; color:#0000ff;\">OpenCVR</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">License </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">* The source code which is opened is licnesed by MIT, and the whole appli"
                        "cation use the blow license</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">* OpenCVR enterprise license is for comany or organization users. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">* OpenCVR Individual license is for personal such as home users.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">* The licnese is a yearly fee.</span></p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("VSCAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://veyesys.com/\"><span style=\" font-size:26pt; text-decoration: underline; color:#0000ff;\">Pay Now</span></a></p></body></html>", Q_NULLPTR));
        pbCancel->setText(QApplication::translate("VSCAbout", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VSCAbout: public Ui_VSCAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSCABOUT_H
