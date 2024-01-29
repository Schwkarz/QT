#include "widget.h"
#include "./ui_widget.h"
#include "QMessageBox"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPixmap pix("D:\\Study\\QT\\project\\03\\img\\20240101江汉路跨年-1.jpg");
    ui->label->setPixmap(pix);
    imgID = 2;
    ui->label_2->setText("Timer1ID == "+QString::number(Timer1));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    //基类都为QObject
    Timer1 = this->startTimer(TIMER1_COUNT);
    ui->label_2->setText("Timer1ID == "+QString::number(Timer1));
}

void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId()!=Timer1)
    {
        return;
    }

    QString path = "D:\\Study\\QT\\project\\03\\img\\20240101江汉路跨年-";
    path += QString::number(imgID);
    path += ".jpg";
    QPixmap pix(path);
    ui->label->setPixmap(pix);
    imgID++;
    if(imgID == 40)
    {
        imgID = 1;
    }
}

void Widget::on_endButton_clicked()
{
    if(Timer1)
    {
        this->killTimer(Timer1);
        ui->label_2->setText("");
        Timer1 = 0;
    }
    else
    {
        QMessageBox Msgb;
        Msgb.setText("当前还未创建QObject定时器!");
        int ret = Msgb.exec();
    }

    // this->killTimer(Timer1);
    // ui->label_2->setText("");
}