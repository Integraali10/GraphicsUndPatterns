/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *figadd;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QGraphicsView *graphicsView;
    QLabel *x;
    QLabel *y;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *figdel;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 667);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        figadd = new QPushButton(centralWidget);
        figadd->setObjectName(QStringLiteral("figadd"));
        figadd->setGeometry(QRect(20, 510, 121, 28));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(730, 550, 121, 31));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(860, 550, 121, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(730, 600, 121, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(860, 600, 121, 21));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 20, 961, 481));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        x = new QLabel(centralWidget);
        x->setObjectName(QStringLiteral("x"));
        x->setGeometry(QRect(10, 570, 55, 16));
        y = new QLabel(centralWidget);
        y->setObjectName(QStringLiteral("y"));
        y->setGeometry(QRect(80, 570, 55, 16));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(470, 510, 241, 28));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 510, 241, 28));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(730, 510, 251, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(550, 600, 151, 20));
        figdel = new QPushButton(centralWidget);
        figdel->setObjectName(QStringLiteral("figdel"));
        figdel->setGeometry(QRect(20, 550, 121, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        figadd->setText(QApplication::translate("MainWindow", "add Figure", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">100</p></body></html>", nullptr));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">200</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "width", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "height", nullptr));
        x->setText(QString());
        y->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "load map", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "save map", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Triangle", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Rectangle", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "Circle", nullptr));

        label->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202 \321\204\320\270\320\263\321\203\321\200 A \320\270 D", nullptr));
        figdel->setText(QApplication::translate("MainWindow", "del Figure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
