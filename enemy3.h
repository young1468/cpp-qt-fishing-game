#ifndef ENEMY3_H
#define ENEMY3_H

#include<QGraphicsItem>
#include <QPixmap>
#include<QPainter>
class enemy3:public QGraphicsItem
{
public:
    enemy3();
    // 必须实现的两个纯虚函数
    QRectF boundingRect() const override; // 返回图元的边界矩形
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    QPixmap pixmap; // 保存enemy的图片

};

#endif // ENEMY3_H
