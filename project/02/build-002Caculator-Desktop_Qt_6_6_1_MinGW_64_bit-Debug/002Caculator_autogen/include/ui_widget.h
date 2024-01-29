/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *numButton_6;
    QPushButton *numButton_9;
    QPushButton *numButton_7;
    QPushButton *numButton_8;
    QPushButton *numButton_1;
    QPushButton *numButton_3;
    QPushButton *numButton_4;
    QPushButton *numButton_2;
    QPushButton *numButton_5;
    QPushButton *numButton_0;
    QPushButton *DelButton;
    QLineEdit *numEdit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *bracketButton_R;
    QPushButton *calButton_Div;
    QPushButton *calButton_Multiply;
    QPushButton *bracketButton_L;
    QPushButton *calButton_Sub;
    QPushButton *calButton_Add;
    QPushButton *calButton_Cal;
    QPushButton *clearButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(715, 599);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 220, 351, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        numButton_6 = new QPushButton(gridLayoutWidget);
        numButton_6->setObjectName("numButton_6");
        numButton_6->setMinimumSize(QSize(0, 60));
        numButton_6->setMaximumSize(QSize(80, 16777215));
        numButton_6->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_6, 1, 2, 1, 1);

        numButton_9 = new QPushButton(gridLayoutWidget);
        numButton_9->setObjectName("numButton_9");
        numButton_9->setMinimumSize(QSize(0, 60));
        numButton_9->setMaximumSize(QSize(80, 16777215));
        numButton_9->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_9, 2, 2, 1, 1);

        numButton_7 = new QPushButton(gridLayoutWidget);
        numButton_7->setObjectName("numButton_7");
        numButton_7->setMinimumSize(QSize(0, 60));
        numButton_7->setMaximumSize(QSize(80, 16777215));
        numButton_7->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_7, 2, 0, 1, 1);

        numButton_8 = new QPushButton(gridLayoutWidget);
        numButton_8->setObjectName("numButton_8");
        numButton_8->setMinimumSize(QSize(0, 60));
        numButton_8->setMaximumSize(QSize(80, 16777215));
        numButton_8->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_8, 2, 1, 1, 1);

        numButton_1 = new QPushButton(gridLayoutWidget);
        numButton_1->setObjectName("numButton_1");
        numButton_1->setMinimumSize(QSize(0, 60));
        numButton_1->setMaximumSize(QSize(80, 16777215));
        numButton_1->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_1, 0, 0, 1, 1);

        numButton_3 = new QPushButton(gridLayoutWidget);
        numButton_3->setObjectName("numButton_3");
        numButton_3->setMinimumSize(QSize(0, 60));
        numButton_3->setMaximumSize(QSize(80, 16777215));
        numButton_3->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_3, 0, 2, 1, 1);

        numButton_4 = new QPushButton(gridLayoutWidget);
        numButton_4->setObjectName("numButton_4");
        numButton_4->setMinimumSize(QSize(0, 60));
        numButton_4->setMaximumSize(QSize(80, 16777215));
        numButton_4->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_4, 1, 0, 1, 1);

        numButton_2 = new QPushButton(gridLayoutWidget);
        numButton_2->setObjectName("numButton_2");
        numButton_2->setEnabled(true);
        numButton_2->setMinimumSize(QSize(0, 60));
        numButton_2->setMaximumSize(QSize(80, 16777215));
        numButton_2->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_2, 0, 1, 1, 1);

        numButton_5 = new QPushButton(gridLayoutWidget);
        numButton_5->setObjectName("numButton_5");
        numButton_5->setMinimumSize(QSize(0, 60));
        numButton_5->setMaximumSize(QSize(80, 16777215));
        numButton_5->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_5, 1, 1, 1, 1);

        numButton_0 = new QPushButton(gridLayoutWidget);
        numButton_0->setObjectName("numButton_0");
        numButton_0->setMinimumSize(QSize(0, 60));
        numButton_0->setMaximumSize(QSize(80, 16777215));
        numButton_0->setIconSize(QSize(16, 16));

        gridLayout->addWidget(numButton_0, 3, 1, 1, 1);

        DelButton = new QPushButton(gridLayoutWidget);
        DelButton->setObjectName("DelButton");
        DelButton->setMinimumSize(QSize(0, 60));
        DelButton->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(DelButton, 3, 2, 1, 1);

        numEdit = new QLineEdit(Widget);
        numEdit->setObjectName("numEdit");
        numEdit->setGeometry(QRect(20, 60, 671, 121));
        QFont font;
        font.setPointSize(28);
        numEdit->setFont(font);
        numEdit->setLayoutDirection(Qt::RightToLeft);
        numEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gridLayoutWidget_2 = new QWidget(Widget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(350, 200, 361, 381));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        bracketButton_R = new QPushButton(gridLayoutWidget_2);
        bracketButton_R->setObjectName("bracketButton_R");
        bracketButton_R->setMinimumSize(QSize(0, 40));
        bracketButton_R->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(bracketButton_R, 2, 1, 1, 1);

        calButton_Div = new QPushButton(gridLayoutWidget_2);
        calButton_Div->setObjectName("calButton_Div");
        calButton_Div->setMinimumSize(QSize(0, 40));
        calButton_Div->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(calButton_Div, 1, 1, 1, 1);

        calButton_Multiply = new QPushButton(gridLayoutWidget_2);
        calButton_Multiply->setObjectName("calButton_Multiply");
        calButton_Multiply->setMinimumSize(QSize(0, 40));
        calButton_Multiply->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(calButton_Multiply, 1, 0, 1, 1);

        bracketButton_L = new QPushButton(gridLayoutWidget_2);
        bracketButton_L->setObjectName("bracketButton_L");
        bracketButton_L->setMinimumSize(QSize(0, 40));
        bracketButton_L->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(bracketButton_L, 2, 0, 1, 1);

        calButton_Sub = new QPushButton(gridLayoutWidget_2);
        calButton_Sub->setObjectName("calButton_Sub");
        calButton_Sub->setMinimumSize(QSize(0, 40));
        calButton_Sub->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(calButton_Sub, 0, 1, 1, 1);

        calButton_Add = new QPushButton(gridLayoutWidget_2);
        calButton_Add->setObjectName("calButton_Add");
        calButton_Add->setMinimumSize(QSize(0, 40));
        calButton_Add->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(calButton_Add, 0, 0, 1, 1);

        calButton_Cal = new QPushButton(gridLayoutWidget_2);
        calButton_Cal->setObjectName("calButton_Cal");
        calButton_Cal->setMinimumSize(QSize(0, 40));
        calButton_Cal->setMaximumSize(QSize(120, 16777215));
        calButton_Cal->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_2->addWidget(calButton_Cal, 3, 1, 1, 1);

        clearButton = new QPushButton(gridLayoutWidget_2);
        clearButton->setObjectName("clearButton");
        clearButton->setMinimumSize(QSize(0, 40));
        clearButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(clearButton, 3, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        numButton_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        numButton_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        numButton_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        numButton_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        numButton_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        numButton_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        numButton_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        numButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        numButton_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        numButton_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        DelButton->setText(QCoreApplication::translate("Widget", "Del", nullptr));
        bracketButton_R->setText(QCoreApplication::translate("Widget", ")", nullptr));
        calButton_Div->setText(QCoreApplication::translate("Widget", "/", nullptr));
        calButton_Multiply->setText(QCoreApplication::translate("Widget", "*", nullptr));
        bracketButton_L->setText(QCoreApplication::translate("Widget", "(", nullptr));
        calButton_Sub->setText(QCoreApplication::translate("Widget", "-", nullptr));
        calButton_Add->setText(QCoreApplication::translate("Widget", "+", nullptr));
        calButton_Cal->setText(QCoreApplication::translate("Widget", "=", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
