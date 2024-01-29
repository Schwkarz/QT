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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *startButton;
    QPushButton *endButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 910);
        Widget->setMinimumSize(QSize(800, 910));
        Widget->setMaximumSize(QSize(800, 910));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 30, 571, 651));
        label->setScaledContents(true);
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 719, 541, 31));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 780, 581, 82));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(widget);
        startButton->setObjectName("startButton");
        startButton->setMinimumSize(QSize(0, 60));
        startButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(startButton);

        endButton = new QPushButton(widget);
        endButton->setObjectName("endButton");
        endButton->setMinimumSize(QSize(0, 60));
        endButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(endButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_2->setText(QString());
        startButton->setText(QCoreApplication::translate("Widget", "Start", nullptr));
        endButton->setText(QCoreApplication::translate("Widget", "End", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
