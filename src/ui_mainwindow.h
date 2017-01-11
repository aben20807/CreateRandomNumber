/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btn_create;
    QLabel *l_num;
    QLabel *l_result;
    QLineEdit *lEdit_num;
    QLabel *result_print;
    QRadioButton *radioBtn_repeat;
    QPushButton *btn_reset;
    QLabel *l_from;
    QLabel *l_to;
    QLineEdit *lEdit_to;
    QLineEdit *lEdit_from;
    QTextEdit *textEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(526, 381);
        QFont font;
        font.setFamily(QStringLiteral("Noto Sans T Chinese Medium"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_create = new QPushButton(centralWidget);
        btn_create->setObjectName(QStringLiteral("btn_create"));
        btn_create->setGeometry(QRect(420, 50, 75, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Noto Sans CJK TC Medium"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        btn_create->setFont(font1);
        l_num = new QLabel(centralWidget);
        l_num->setObjectName(QStringLiteral("l_num"));
        l_num->setGeometry(QRect(20, 48, 121, 31));
        l_num->setFont(font1);
        l_result = new QLabel(centralWidget);
        l_result->setObjectName(QStringLiteral("l_result"));
        l_result->setGeometry(QRect(20, 82, 91, 23));
        l_result->setFont(font1);
        lEdit_num = new QLineEdit(centralWidget);
        lEdit_num->setObjectName(QStringLiteral("lEdit_num"));
        lEdit_num->setGeometry(QRect(150, 50, 91, 28));
        QFont font2;
        font2.setFamily(QStringLiteral("Noto Sans CJK TC Medium"));
        font2.setPointSize(10);
        lEdit_num->setFont(font2);
        lEdit_num->setAlignment(Qt::AlignCenter);
        result_print = new QLabel(centralWidget);
        result_print->setObjectName(QStringLiteral("result_print"));
        result_print->setGeometry(QRect(20, 120, 411, 161));
        QFont font3;
        font3.setFamily(QStringLiteral("Noto Sans T Chinese Medium"));
        font3.setPointSize(10);
        result_print->setFont(font3);
        result_print->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        result_print->setWordWrap(true);
        radioBtn_repeat = new QRadioButton(centralWidget);
        radioBtn_repeat->setObjectName(QStringLiteral("radioBtn_repeat"));
        radioBtn_repeat->setGeometry(QRect(249, 48, 171, 31));
        radioBtn_repeat->setFont(font1);
        radioBtn_repeat->setChecked(true);
        btn_reset = new QPushButton(centralWidget);
        btn_reset->setObjectName(QStringLiteral("btn_reset"));
        btn_reset->setGeometry(QRect(420, 320, 75, 31));
        btn_reset->setFont(font1);
        l_from = new QLabel(centralWidget);
        l_from->setObjectName(QStringLiteral("l_from"));
        l_from->setGeometry(QRect(20, 13, 71, 23));
        l_from->setFont(font1);
        l_to = new QLabel(centralWidget);
        l_to->setObjectName(QStringLiteral("l_to"));
        l_to->setGeometry(QRect(290, 13, 31, 23));
        l_to->setFont(font1);
        lEdit_to = new QLineEdit(centralWidget);
        lEdit_to->setObjectName(QStringLiteral("lEdit_to"));
        lEdit_to->setGeometry(QRect(324, 13, 170, 28));
        lEdit_to->setFont(font2);
        lEdit_to->setAlignment(Qt::AlignCenter);
        lEdit_from = new QLineEdit(centralWidget);
        lEdit_from->setObjectName(QStringLiteral("lEdit_from"));
        lEdit_from->setGeometry(QRect(100, 13, 170, 28));
        lEdit_from->setFont(font2);
        lEdit_from->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 120, 481, 191));
        textEdit->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Create Random Numbers", Q_NULLPTR));
        btn_create->setText(QApplication::translate("MainWindow", "create", Q_NULLPTR));
        l_num->setText(QApplication::translate("MainWindow", "How many?", Q_NULLPTR));
        l_result->setText(QApplication::translate("MainWindow", "result\357\274\232", Q_NULLPTR));
        lEdit_num->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        result_print->setText(QString());
        radioBtn_repeat->setText(QApplication::translate("MainWindow", "Allow repeat", Q_NULLPTR));
        btn_reset->setText(QApplication::translate("MainWindow", "reset", Q_NULLPTR));
        l_from->setText(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        l_to->setText(QApplication::translate("MainWindow", "to", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
