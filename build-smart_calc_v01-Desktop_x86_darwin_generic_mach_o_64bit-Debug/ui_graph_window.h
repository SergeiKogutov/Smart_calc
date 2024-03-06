/********************************************************************************
** Form generated from reading UI file 'graph_window.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_WINDOW_H
#define UI_GRAPH_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_graph_window
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *functionText;
    QCustomPlot *widget;
    QLabel *label;
    QTextEdit *dFromText;
    QTextEdit *eFromText;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *dToText;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *eToText;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *graph_window)
    {
        if (graph_window->objectName().isEmpty())
            graph_window->setObjectName(QString::fromUtf8("graph_window"));
        graph_window->resize(501, 625);
        pushButton = new QPushButton(graph_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 89, 31));
        pushButton_2 = new QPushButton(graph_window);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 570, 481, 41));
        functionText = new QTextEdit(graph_window);
        functionText->setObjectName(QString::fromUtf8("functionText"));
        functionText->setGeometry(QRect(10, 510, 481, 51));
        widget = new QCustomPlot(graph_window);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 49, 481, 341));
        label = new QLabel(graph_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 490, 67, 17));
        dFromText = new QTextEdit(graph_window);
        dFromText->setObjectName(QString::fromUtf8("dFromText"));
        dFromText->setGeometry(QRect(10, 440, 111, 51));
        eFromText = new QTextEdit(graph_window);
        eFromText->setObjectName(QString::fromUtf8("eFromText"));
        eFromText->setGeometry(QRect(260, 440, 111, 51));
        label_2 = new QLabel(graph_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 400, 67, 17));
        label_3 = new QLabel(graph_window);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 400, 67, 17));
        dToText = new QTextEdit(graph_window);
        dToText->setObjectName(QString::fromUtf8("dToText"));
        dToText->setGeometry(QRect(130, 440, 111, 51));
        label_4 = new QLabel(graph_window);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 420, 41, 16));
        label_5 = new QLabel(graph_window);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 420, 31, 16));
        eToText = new QTextEdit(graph_window);
        eToText->setObjectName(QString::fromUtf8("eToText"));
        eToText->setGeometry(QRect(380, 440, 111, 51));
        label_6 = new QLabel(graph_window);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 420, 41, 16));
        label_7 = new QLabel(graph_window);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(380, 420, 31, 16));

        retranslateUi(graph_window);

        QMetaObject::connectSlotsByName(graph_window);
    } // setupUi

    void retranslateUi(QWidget *graph_window)
    {
        graph_window->setWindowTitle(QCoreApplication::translate("graph_window", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("graph_window", "<- Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("graph_window", "Plot", nullptr));
        label->setText(QCoreApplication::translate("graph_window", "f( x ) =", nullptr));
        dFromText->setHtml(QCoreApplication::translate("graph_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-3</p></body></html>", nullptr));
        eFromText->setHtml(QCoreApplication::translate("graph_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-4</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("graph_window", "D( f ) =", nullptr));
        label_3->setText(QCoreApplication::translate("graph_window", "E( f ) =", nullptr));
        dToText->setHtml(QCoreApplication::translate("graph_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("graph_window", "From:", nullptr));
        label_5->setText(QCoreApplication::translate("graph_window", "To:", nullptr));
        eToText->setHtml(QCoreApplication::translate("graph_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("graph_window", "From:", nullptr));
        label_7->setText(QCoreApplication::translate("graph_window", "To:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graph_window: public Ui_graph_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_WINDOW_H
