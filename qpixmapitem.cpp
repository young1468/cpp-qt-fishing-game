#include "qpixmapitem.h"
#include<Windows.h>
QPixmapItem::QPixmapItem(const QString & fileName,QGraphicsScene *scene)
{
    pixmap.load(fileName);
    scene -> addItem(this);
}
QRectF QPixmapItem::boundingRect() const
{

    return QRectF(-pixmap.width()/2,-pixmap.height(),pixmap.width(),pixmap.height());
}
void QPixmapItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option); // 声明参数未使用
    Q_UNUSED(widget); // 声明参数未使用
    painter ->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);
}
