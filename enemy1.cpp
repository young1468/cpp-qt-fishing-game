#include "enemy1.h"

enemy1::enemy1() {
     pixmap = QPixmap(":/new/prefix1/img/enemy1/Walking/Wraith_02_Moving Forward_000.png") .scaled(180, 180, Qt::KeepAspectRatio, Qt::SmoothTransformation);
}
// 返回图元的边界矩形
QRectF enemy1::boundingRect() const
{
    // 使用图片的大小作为边界矩形
    return QRectF(-pixmap.width()/2, -pixmap.height(), pixmap.width(), pixmap.height());
}

// 绘制外观
void enemy1::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option); // 声明参数未使用
    Q_UNUSED(widget); // 声明参数未使用
    static int i = 1; // 动态帧计数
    if (i == 12) {
        i = 1; // 重置为第1帧，避免加载不存在的文件
    }
    // 使用 QString 拼接路径
    QString filename = QString(":/new/prefix1/img/enemy1/Walking/Wraith_02_Moving Forward_%1.png")
                           .arg(i++, 3, 10, QChar('0')); // 补足3位数字格式
    pixmap.load(filename); // 加载图片

    if (!pixmap.load(filename)) {
        qDebug() << "Failed to load image:" << filename;
        return;
    }

    // 缩放图片大小 (指定宽度 180，高度 180，保持宽高比)
    QPixmap scaledPixmap = pixmap.scaled(180, 180, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    // 绘制缩放后的图片
    painter->drawPixmap(-scaledPixmap.width() / 2, -scaledPixmap.height(), scaledPixmap);
}
void enemy1::advance(int phase)
{
    if(mapToScene(0,0).y()<=0||mapToScene(0,0).x()>=1365||mapToScene(0,0).y()>=768)
    {
        setPos(-130,270+QRandomGenerator::global()->generate()%300);
    }
    int speed = QRandomGenerator::global()->generate()%10;
    int angle = QRandomGenerator::global()->generate()%8;
    int angle_ = QRandomGenerator::global()->generate()%8;
    this -> setPos(mapToScene(speed+2,angle - angle_));
}
