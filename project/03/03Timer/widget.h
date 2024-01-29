#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

//定时器定时时间，以毫秒为单位
#define TIMER1_COUNT 200

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    //event参数用于获取定时器编号
    virtual void timerEvent(QTimerEvent *event);
    ~Widget();

private slots:
    void on_startButton_clicked();

    void on_endButton_clicked();

private:
    Ui::Widget *ui;

    int Timer1 = 0;
    int imgID;
};
#endif // WIDGET_H
