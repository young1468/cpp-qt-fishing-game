#include "weapon2.h"

weapon2::weapon2()
{
    // 加载武器图片
    pixmap = QPixmap(":/new/prefix1/img/weapon2.png"); // 使用资源文件中的图片
}

// 返回图元的边界矩形
QRectF weapon2::boundingRect() const
{
    // 使用图片的大小作为边界矩形
    return QRectF(-pixmap.width()/2, -pixmap.height(), pixmap.width(), pixmap.height());
}

// 绘制武器的外观
void weapon2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option); // 声明参数未使用
    Q_UNUSED(widget); // 声明参数未使用
    painter->drawPixmap(-pixmap.width()/2, -pixmap.height(), pixmap);
}
