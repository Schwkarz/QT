#include "widget.h"
#include "./ui_widget.h"
#include "string"

int getPri(char c);

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setFixedSize(715,599);

    // //设置编辑框字体函数，但是已经在属性栏更改
    // QFont f("黑体",11);
    // ui->numEdit->setFont(f);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_numButton_1_clicked()
{
    expression += "1";
    ui->numEdit->setText(expression);
}


void Widget::on_numButton_2_clicked()
{
    expression += "2";
    ui->numEdit->setText(expression);
}


void Widget::on_numButton_3_clicked()
{
    expression += "3";
    ui->numEdit->setText(expression);
}


void Widget::on_numButton_4_clicked()
{
    expression += "4";
    ui->numEdit->setText(expression);
}


void Widget::on_numButton_5_clicked()
{
    expression += "5";
    ui->numEdit->setText(expression);
}


void Widget::on_numButton_6_clicked()
{
    expression += "6";
    ui->numEdit->setText(expression);
}


void Widget::on_numButton_7_clicked()
{
    expression += "7";
    ui->numEdit->setText(expression);
}


void Widget::on_numButton_8_clicked()
{
    expression += "8";
    ui->numEdit->setText(expression);
}


void Widget::on_numButton_9_clicked()
{
    expression += "9";
    ui->numEdit->setText(expression);
}


void Widget::on_numButton_0_clicked()
{
    expression += "0";
    ui->numEdit->setText(expression);
}


void Widget::on_calButton_Add_clicked()
{
    expression += "+";
    ui->numEdit->setText(expression);
}


void Widget::on_calButton_Sub_clicked()
{
    expression += "-";
    ui->numEdit->setText(expression);
}


void Widget::on_calButton_Multiply_clicked()
{
    expression += "*";
    ui->numEdit->setText(expression);
}


void Widget::on_calButton_Div_clicked()
{
    expression += "/";
    ui->numEdit->setText(expression);
}


void Widget::on_bracketButton_L_clicked()
{
    expression += "(";
    ui->numEdit->setText(expression);
}


void Widget::on_bracketButton_R_clicked()
{
    expression += ")";
    ui->numEdit->setText(expression);
}


void Widget::on_clearButton_clicked()
{
    expression = "";
    ui->numEdit->setText(expression);
}


void Widget::on_DelButton_clicked()
{
    expression.chop(1);
    ui->numEdit->setText(expression);
}


void Widget::on_calButton_Cal_clicked()
{
    char opt[128] = {};
    int i = 0,tmp = 0,num1,num2;
    QStack<int> numStk;
    QStack<char> symStk;


    // QString a = "123";
    // QByteArray ba;
    // ba.append(a);
    // 出现报错error: no matching function for call to 'QByteArray::append(QString&)'
    // 164 |     ba.append(a);
    // 如果你想把QString添加到QByteArray，你需要先把QString转换为QByteArray。
    // 你可以使用QString::toUtf8()或者QString::toLatin1()函数来实现这个转换
    QByteArray ba;
    ba.append(expression.toUtf8());
    strcpy(opt,ba.data());//将expression中的内容给了opt数组

    while(opt[i] != '\0'||symStk.empty()!=true)//在C++中，单引号表示单个字符，双引号表示字符串
    {
        //当为数字时
        if(opt[i] >= '0' && opt[i] <= '9')
        {
            tmp = tmp*10 + opt[i]-'0';
            if(opt[i+1] >= '0' && opt[i+1] <= '9')
            {

            }
            else
            {
                numStk.push(tmp);
                tmp = 0;
            }
            i++;
        }
        //当为字符时
        else
        {
            //当栈顶符号的优先级低于当前符号时，或栈顶为前括号当前不为后括号（没看懂后面一点，先不写试试）
            if(symStk.empty() == true ||getPri(opt[i])<getPri(symStk.top())||(symStk.top() == '(' && opt[i] != ')'))
            {
                symStk.push(opt[i]);
                i++;
                //为什么要continue？
                continue;
            }
            if (symStk.top() == '(' && opt[i] == ')')
            {
                symStk.pop();
                i++;
                continue;
            }
            //当栈顶符号优先级高于当前符号，或者读到了后括号，并且当前不是末尾\0且栈顶不为空
            if(getPri(opt[i]) >= getPri(symStk.top())||(opt[i] == ')' && symStk.top()!='(')||(opt[i] != '\0'||symStk.empty()!=true))
            {
                char ch = symStk.top();
                symStk.pop();
                switch(ch)
                {
                    case '+':
                        num1 = numStk.top();
                        numStk.pop();
                        num2 = numStk.top();
                        numStk.pop();
                        numStk.push(num1 + num2);
                        break;
                    case '-':
                        num1 = numStk.top();
                        numStk.pop();
                        num2 = numStk.top();
                        numStk.pop();
                        numStk.push(num1 - num2);
                        break;
                    case '*':
                        num1 = numStk.top();
                        numStk.pop();
                        num2 = numStk.top();
                        numStk.pop();
                        numStk.push(num1 * num2);
                        break;
                    case '/':
                        num1 = numStk.top();
                        numStk.pop();
                        num2 = numStk.top();
                        numStk.pop();
                        numStk.push(num1 / num2);
                        break;
                }
            }
        }
    }
    // expression = expression.number(numStk.pop());
    expression = QString::number(numStk.pop());
    ui->numEdit->setText(expression);
}


//获得符号的优先性,越小优先级越高
int getPri(char c)
{
    switch(c)
    {
    case '+':
    case '-':
        return 2;	//如果是加减，返回0
        break;
    case '*':
    case '/':
        return 1;	//如果是乘除，返回1
        break;
    case '(':
        return 0;  //注意，这里将括号设为最低优先级，因此括号不会被弹出，除非遇到右括号
        break;
    }
    return 3;//非字母
}
