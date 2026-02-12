#include "widget.h"
#include"gamewidget.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setFixedSize(1365,768);//设置窗口大小
    this->setWindowTitle("末日：离去");//设置窗口名
    this->setWindowIcon(QIcon(":/new/prefix1/img/Icon.png"));//设置窗口图标

    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(QPixmap(":/new/prefix1/img/background.png")));  // 设置背景图片
    this->setPalette(palette);
    this->setAutoFillBackground(true);

    // 创建 QSoundEffect
    QSoundEffect *soundEffect = new QSoundEffect(this);
    soundEffect->setSource(QUrl::fromLocalFile(":/new/prefix1/music/background_music.wav"));
    soundEffect->setVolume(0.2f); // 设置音量
    soundEffect->setLoopCount(QSoundEffect::Infinite); // 循环播放
    // 播放音效
    soundEffect->play();

    QSoundEffect *startsound = new QSoundEffect(this);
    startsound->setSource(QUrl::fromLocalFile(":/new/prefix1/music/button_voice.wav"));
    startsound->setVolume(0.4f); // 设置音量

    //开始pushbutton
    QPushButton *startButton = new QPushButton(this);
    startButton->setIcon(QIcon(":/new/prefix1/img/start.png")); // 设置图标
    startButton->setIconSize(QSize(282, 118)); // 设置图标大小
    startButton->move(500,300);
    startButton->setFlat(true);
    this->setFocusPolicy(Qt::NoFocus);

    connect(startButton, &QPushButton::clicked, this, [=]() {
        startsound->play();
        gamewidget *gw=new gamewidget;
        gw->show(); // 显示游戏界面
        this->hide();       // 隐藏当前主界面
    });

}

Widget::~Widget() {}
