#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
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
#include"gameview.h"

class gamewidget : public QWidget
{
    Q_OBJECT
public:
    explicit gamewidget(QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override
    {
        if (event->key() == Qt::Key_Space) { // 检测空格键
            emit spacePressed(); // 发射自定义信号
        }
    }

signals:
    void spacePressed(); // 自定义信号
};

#endif // GAMEWIDGET_H
