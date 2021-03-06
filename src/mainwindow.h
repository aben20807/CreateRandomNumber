#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QDebug>
#include <time.h>//for qsrand

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_create_clicked();

    void on_btn_reset_clicked();

private:
    Ui::MainWindow *ui;
    int i_from;
    int i_to;
    int i_num;
};

#endif // MAINWINDOW_H
