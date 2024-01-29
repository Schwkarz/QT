#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    pTimer1 = new QTimer;

    // 用QImage显示图片
    QImage img;
    img.load("D:\\Study\\QT\\project\\03\\img\\20240101江汉路跨年-1.jpg");
    ui->label->setPixmap(QPixmap::fromImage(img));
    imgID = 2;

    //定时器连接信号与槽
    connect(pTimer1,&QTimer::timeout,this,&Widget::TIM1_IRQHandler);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    pTimer1->start(200);
}

void Widget::TIM1_IRQHandler()
{
    QString path = "D:\\Study\\QT\\project\\03\\img\\20240101江汉路跨年-";
    path += QString::number(imgID);
    path += ".jpg";
    QImage img;
    img.load(path);
    ui->label->setPixmap(QPixmap::fromImage(img));
    imgID++;
    if(imgID == 40)
    {
        imgID = 1;
    }
}

void Widget::on_endButton_clicked()
{
    pTimer1->stop();
}

