#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStack>

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
    void on_numButton_1_clicked();

    void on_numButton_2_clicked();

    void on_numButton_3_clicked();

    void on_numButton_4_clicked();

    void on_numButton_5_clicked();

    void on_numButton_6_clicked();

    void on_numButton_7_clicked();

    void on_numButton_8_clicked();

    void on_numButton_9_clicked();

    void on_numButton_0_clicked();

    void on_calButton_Add_clicked();

    void on_calButton_Sub_clicked();

    void on_calButton_Multiply_clicked();

    void on_calButton_Div_clicked();

    void on_bracketButton_L_clicked();

    void on_bracketButton_R_clicked();

    void on_clearButton_clicked();

    void on_DelButton_clicked();

    void on_calButton_Cal_clicked();

private:
    Ui::Widget *ui;
    QString expression;
};
#endif // WIDGET_H
