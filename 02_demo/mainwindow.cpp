#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPushButton>
#include <QComboBox>
#include <QDebug>
#include <QFile>
#include <QPoint>


void MainWindow::floyd(){    //  floyd计算最短路
    for(int k=0;k<70;k++){
        for(int i=0;i<70;i++){
            for(int j=0;j<70;j++){
                 if(dis[i][k]!=inf&&dis[k][j]!=inf&&dis[i][k]+dis[k][j]<dis[i][j]){
                     dis[i][j]=dis[i][k]+dis[k][j];
                     pre[i][j]=pre[k][j];    //记录前驱节点
                 }
            }
        }
    }
   // qDebug()<<pre[0][0];
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowTitle(tr("校园导航系统"));
    this->setWindowIcon(QIcon("../img/icon_03.png"));  //程序图标

    for(int i=0;i<70;i++){     //   初始化  dis  pre
        for(int j=0;j<70;j++){
            if(i!=j)dis[i][j]=inf;
            else dis[i][j]=0;
            pre[i][j]=i;
        }
    }
    QFile file1("../distance.txt");  //载入边权
    if(!file1.open(QIODevice::ReadOnly|QIODevice::Text)){
        qDebug()<<"ok";
    }else{
       // qDebug()<<"ERROR";
    }
    QTextStream in1(&file1);
    while(!in1.atEnd()){
        int x = in1.readLine().toInt();
        int y = in1.readLine().toInt();
        int v = in1.readLine().toInt();
        dis[x][y]=dis[y][x]=v;   //边权赋值
        qDebug()<<x<<"  "<<y<<" "<<v;
    }
    QFile file("../plane.txt");  //载入景点坐标
    int i = 0;
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
        qDebug()<<"ok";
    }else{
        qDebug()<<"ERROR";
    }
     QTextStream in(&file);
    while (!in.atEnd()) {  // 存储坐标
       pos[i].setX(in.readLine().toInt());
       pos[i].setY(in.readLine().toInt());
       qDebug()<<pos[i];
       i++;
    }
    floyd();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawPixmap(10,60,width()-20,height()-70,QPixmap("../img/p1_01.PNG"));
    /*for(int i=50;i<=1000;i+=50){
        p.drawLine(i,0,i,650);
        p.drawText(i+2,20,QString::number(i) );
    }
    for(int i=50;i<=650;i+=50){
         p.drawText(10,i-2,QString::number(i) );
        p.drawLine(0,i,1000,i);
      }

    for(int i=0 ; i<27;i++){
        p.drawPoint(pos[i]);
    }
    pen.setWidth(5);
    pen.setColor(Qt::red);
    p.setPen(pen);
    for(int i=27 ; i<70;i++){
        p.drawPoint(pos[i]);
    }*/
    QPen pen;   //绘制路线
    pen.setWidth(3);  //设置画笔宽度
    pen.setColor(Qt::red);  //设置画笔颜色
    p.setPen(pen);
    for(int i=0;i<ans.size()-1;i++){
        p.drawLine(pos[ans[i]],pos[ans[i+1]]);   //倒序绘制地图
    }
   // p.drawLine(50,50,500,500);
      // printf("%d %d\n",st,ed);

}

void MainWindow::on_pushButton_clicked()   //点击查询
{
    int st = ui->comboBox->currentIndex();   //获取起点id
    int ed = ui->comboBox_2->currentIndex();  //获取终点id
   // res.show();
   // qDebug()<<s1<<"  "<<s2;
    qDebug()<<st<<"   "<<ed;
    ans.clear();
    ans.push_back(ed);
    int k = ed;
    qDebug()<<k;
    while(pre[st][k]!=st){
        k = pre[st][k];
        ans.push_back(k);
        qDebug()<<k;
    }
    ans.push_back(st);
    update();    //重绘地图
   // printf("st = %d ed = %d \n",st,ed);
}

void MainWindow::on_pushButton_2_clicked()
{
    jdid = ui->comboBox_3->currentIndex();
    Subwindow *res = new Subwindow;
    res->sendid(jdid);
    res->show();
}

