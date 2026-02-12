#ifndef WEAPON2_H
#define WEAPON2_H
#include<QGraphicsItem>
#include <QPixmap>
#include<QPainter>
class weapon2:public QGraphicsItem
{
public:
    weapon2();
    // 必须实现的两个纯虚函数
    QRectF boundingRect() const override; // 返回图元的边界矩形
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    QPixmap pixmap; // 保存武器的图片

};

#endif // WEAPON2_H
//不要用两个weapon，换weapon的时候容易内存泄漏，可以写一个change_weapon函数，
