#include "gamewidget.h"

gamewidget::gamewidget(QWidget *parent)
    : QWidget{parent}
{    this->setFixedSize(1365,768);//设置窗口大小
    this->setWindowTitle("末日：离去");//设置窗口名
    this->setWindowIcon(QIcon(":/new/prefix1/img/Icon.png"));//设置窗口图标

    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(QPixmap(":/new/prefix1/img/Battleground4.png")));  // 设置背景图片
    this->setPalette(palette);
    this->setAutoFillBackground(true);

    connect(this, &gamewidget::spacePressed,this, [this]() {
        qDebug() << "空格键被按下！";
        gameview *gv=new gameview;
        gv->show(); // 显示游戏界面
        this->hide();       // 隐藏当前主界面
    });
}
