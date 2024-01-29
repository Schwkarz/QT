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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *startButton;
    QPushButton *endButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 856);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 521, 641));
        label->setScaledContents(true);
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(90, 740, 581, 82));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(horizontalLayoutWidget);
        startButton->setObjectName("startButton");
        startButton->setMinimumSize(QSize(0, 80));
        startButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(startButton);

        endButton = new QPushButton(horizontalLayoutWidget);
        endButton->setObjectName("endButton");
        endButton->setMinimumSize(QSize(0, 80));
        endButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(endButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        startButton->setText(QCoreApplication::translate("Widget", "Start", nullptr));
        endButton->setText(QCoreApplication::translate("Widget", "End", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
