#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QIcon>
#include<QBrush>
#include <QLabel>
#include <QPixmap>
#include <QPalette>
#include <QFont>
#include <QSoundEffect>
#include <QPushButton>
#include <QVBoxLayout> // 垂直布局
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QDebug>
#include"weapon2.h"
#include"weapon1.h"
#include"enemy1.h"
#include"enemy2.h"
#include"enemy3.h"
#include<QTimer>
#include<QPoint>
#include<QLine>
#include<QLineF>
class gameview:public QGraphicsView
{
public:
    gameview();
    void mouseMoveEvent(QMouseEvent *event);
private:
    weapon2*gun;
    weapon1*bow;
    enemy1* ghost1[8];
    enemy2* ghost2[10];
    enemy3* ghost3[9];
    QTimer*timer;
};

#endif // GAMEVIEW_H
