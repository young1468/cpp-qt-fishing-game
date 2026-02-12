#ifndef WIDGET_H
#define WIDGET_H

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

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
