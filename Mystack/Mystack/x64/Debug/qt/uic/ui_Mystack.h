/********************************************************************************
** Form generated from reading UI file 'Mystack.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSTACK_H
#define UI_MYSTACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MystackClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *b1;
    QPushButton *b2;
    QLineEdit *input_str;
    QLineEdit *output_str;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MystackClass)
    {
        if (MystackClass->objectName().isEmpty())
            MystackClass->setObjectName("MystackClass");
        MystackClass->resize(954, 629);
        centralWidget = new QWidget(MystackClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        b1 = new QPushButton(centralWidget);
        b1->setObjectName("b1");

        verticalLayout->addWidget(b1);

        b2 = new QPushButton(centralWidget);
        b2->setObjectName("b2");

        verticalLayout->addWidget(b2);

        input_str = new QLineEdit(centralWidget);
        input_str->setObjectName("input_str");

        verticalLayout->addWidget(input_str);

        output_str = new QLineEdit(centralWidget);
        output_str->setObjectName("output_str");
        output_str->setReadOnly(true);

        verticalLayout->addWidget(output_str);

        MystackClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MystackClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 954, 33));
        MystackClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MystackClass);
        mainToolBar->setObjectName("mainToolBar");
        MystackClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MystackClass);
        statusBar->setObjectName("statusBar");
        MystackClass->setStatusBar(statusBar);

        retranslateUi(MystackClass);
        QObject::connect(b1, SIGNAL(clicked()), MystackClass, SLOT(slot1()));
        QObject::connect(b2, SIGNAL(clicked()), MystackClass, SLOT(slot2()));

        QMetaObject::connectSlotsByName(MystackClass);
    } // setupUi

    void retranslateUi(QMainWindow *MystackClass)
    {
        MystackClass->setWindowTitle(QCoreApplication::translate("MystackClass", "Mystack", nullptr));
        b1->setText(QCoreApplication::translate("MystackClass", "\344\270\255\347\274\200", nullptr));
        b2->setText(QCoreApplication::translate("MystackClass", "\345\220\216\347\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MystackClass: public Ui_MystackClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSTACK_H
