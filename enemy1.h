#ifndef ENEMY1_H
#define ENEMY1_H
#include<QGraphicsItem>
#include <QPixmap>
#include<QPainter>
#include <QRandomGenerator>
class enemy1:public QGraphicsItem
{
public:
    enemy1();
    // 必须实现的两个纯虚函数
    QRectF boundingRect() const override; // 返回图元的边界矩形
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void advance(int phase)override;
private:
    QPixmap pixmap; // 保存enemy的图片

};
#endif // ENEMY1_H
