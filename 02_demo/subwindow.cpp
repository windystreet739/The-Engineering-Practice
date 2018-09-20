#include "subwindow.h"
#include<QPainter>

Subwindow::Subwindow(QWidget *parent) : QMainWindow(parent)
{
    Subwindow::setWindowTitle(tr("查询结果"));
    this->setWindowIcon(QIcon("../img/icon_02.png"));   //程序图标
    this->setMinimumSize(1000, 565);    //设置窗口尺寸的最小值
    this->setMaximumSize(1000, 700);    //设置窗口尺寸最大值


}

void Subwindow::sendid(int id)
{
    jdid = id;
}

void Subwindow::paintEvent(QPaintEvent *){
    QPainter p1(this);

    if(jdid==0){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/正门.PNG"));
    }else if(jdid==1){
       p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/汇海.JPG"));
    }else if(jdid==2){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/图书馆.JPG"));
    }else if(jdid==3){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/体育馆.JPG"));
    }else if(jdid==4){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/梅香园.JPG"));
    }else if(jdid==5){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/游泳馆.JPG"));
    }else if(jdid==6){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/信息楼.JPG"));
    }else if(jdid==7){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/气象楼.JPG"));
    }else if(jdid==8){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/探测楼.JPG"));
    }else if(jdid==9){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/金工楼.JPG"));
    }else if(jdid==10){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/资环楼.JPG"));
    }else if(jdid==11){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/乒乓球场.JPG"));
    }else if(jdid==12){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/羽毛球场.JPG"));
    }else if(jdid==13){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/行政楼.JPG"));
    }else if(jdid==14){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第一教学楼.JPG"));
    }else if(jdid==15){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第二教学楼.JPG"));
    }else if(jdid==16){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第三教学楼.JPG"));
    }else if(jdid==17){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第四教学楼.JPG"));
    }else if(jdid==18){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第一实验楼.JPG"));
    }else if(jdid==19){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第二实验楼.JPG"));
    }else if(jdid==20){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第一运动场.JPG"));
    }else if(jdid==21){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第二运动场.JPG"));
    }else if(jdid==22){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第一篮球场.JPG"));
    }else if(jdid==23){
        p1.drawPixmap(5,5,width()-5,height()-5,QPixmap("../img/第二篮球场.JPG"));
    }
}

Subwindow::~Subwindow()
{

}

