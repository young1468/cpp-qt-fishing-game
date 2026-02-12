#ifndef WEAPON1_H
#define WEAPON1_H

#include<QGraphicsItem>
#include <QPixmap>
#include<QPainter>
class weapon1:public QGraphicsItem
{
public:
    weapon1();
    // 必须实现的两个纯虚函数
    QRectF boundingRect() const override; // 返回图元的边界矩形
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    QPixmap pixmap; // 保存武器的图片

};
#endif // WEAPON1_H
