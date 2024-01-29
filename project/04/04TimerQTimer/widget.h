#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>

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
    ~Widget();

private slots:
    void on_startButton_clicked();

    //槽函数写法固定，必须写在slots下
    void TIM1_IRQHandler();

    void on_endButton_clicked();

private:
    Ui::Widget *ui;

    QTimer *pTimer1;
    int imgID;
};
#endif // WIDGET_H
