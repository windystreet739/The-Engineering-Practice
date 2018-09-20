#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "subwindow.h" //子窗口头文件
#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QVector>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <QLabel>
#include <QString>
#include <QPainter>
#include <QComboBox>
#include <QPoint>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *);
    void floyd();

private slots:
    void on_pushButton_clicked();
   // void on_comboBox_activated(const QString &arg1); //设置起点
   // void on_comboBox_2_activated(const QString &arg1);  // 设置终点
    //void on_comboBox_activated(int index);
   // void on_comboBox_2_activated(int index);

    void on_pushButton_2_clicked();

private:
    static const int MAXN = 100;  //点的数量
    static const int inf = 1e9;
    Ui::MainWindow *ui;
    int dis[MAXN][MAXN];
    int pre[MAXN][MAXN];
    int jdid;
    QVector<int>ans;        //记录路径
    //int st = 0,ed = 0;
    QPoint pos[MAXN];   //记录景点坐标
};



#endif // MAINWINDOW_H
