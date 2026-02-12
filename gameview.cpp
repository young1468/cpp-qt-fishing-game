#include "gameview.h"

gameview::gameview() {
    this->setFixedSize(1365,768);//设置窗口大小
    this->setWindowTitle("末日：离去");//设置窗口名
    this->setWindowIcon(QIcon(":/new/prefix1/img/Icon.png"));//设置窗口图标

    this->setMouseTracking(true);

    // 创建场景
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, 1363, 766); // 设置场景大小

    // 设置场景背景图片
    scene->setBackgroundBrush(QBrush(QPixmap(":/new/prefix1/img/background1.png").scaled(1365, 768)));

    // 将场景设置为视图的场景
    this->setScene(scene);

    //大炮
    gun=new weapon2;
    gun->setPos(this->width()/2,this->height());
    scene->addItem(gun);


    for(int i=0;i<8;i++)
    {   int set_b = QRandomGenerator::global()->generate() % 10;
        ghost1[i] = new enemy1;
        ghost1[i] -> setPos(-50*set_b,100+set_b *30+i*80);
        scene->addItem(ghost1[i]);
    }

    // enemy1* e1=new enemy1;
    // e1->setPos(0,250);
    // scene->addItem(e1);
    //定时器
    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),scene,SLOT(advance()));
    timer -> start(100);


}
void gameview::mouseMoveEvent(QMouseEvent *event)
{
    QPoint p;
    p=event->pos();

    //画线
    QLine line(this->width()/2,this->height(),p.x(),p.y());
    QLineF linef(line);
    gun->setRotation(90-linef.angle());

    // qDebug("angle:%f\n",90-linef.angle());

}
