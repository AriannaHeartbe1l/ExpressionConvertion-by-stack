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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MystackClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *input_str;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QLineEdit *output_str;
    QLabel *label_2;
    QPushButton *b2;
    QPushButton *b1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MystackClass)
    {
        if (MystackClass->objectName().isEmpty())
            MystackClass->setObjectName("MystackClass");
        MystackClass->resize(954, 629);
        QIcon icon;
        icon.addFile(QString::fromUtf8("ari.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MystackClass->setWindowIcon(icon);
        centralWidget = new QWidget(MystackClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        input_str = new QLineEdit(centralWidget);
        input_str->setObjectName("input_str");
        input_str->setMinimumSize(QSize(231, 51));

        gridLayout->addWidget(input_str, 1, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(256, 491));
        textEdit->setMaximumSize(QSize(256, 491));

        gridLayout->addWidget(textEdit, 0, 1, 8, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 8, 1, 1, 1);

        output_str = new QLineEdit(centralWidget);
        output_str->setObjectName("output_str");
        output_str->setMinimumSize(QSize(231, 51));

        gridLayout->addWidget(output_str, 8, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setScaledContents(true);
        label_2->setMargin(0);
        label_2->setIndent(-1);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        b2 = new QPushButton(centralWidget);
        b2->setObjectName("b2");
        b2->setMinimumSize(QSize(231, 111));

        gridLayout->addWidget(b2, 5, 0, 1, 1);

        b1 = new QPushButton(centralWidget);
        b1->setObjectName("b1");
        b1->setMinimumSize(QSize(231, 111));

        gridLayout->addWidget(b1, 4, 0, 1, 1);

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
        QObject::connect(b2, SIGNAL(clicked()), MystackClass, SLOT(slot2()));
        QObject::connect(b1, SIGNAL(clicked()), MystackClass, SLOT(slot1()));

        QMetaObject::connectSlotsByName(MystackClass);
    } // setupUi

    void retranslateUi(QMainWindow *MystackClass)
    {
        MystackClass->setWindowTitle(QCoreApplication::translate("MystackClass", "It's MyStack!!!!!", nullptr));
        label->setText(QCoreApplication::translate("MystackClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\350\276\223\345\205\245\350\241\250\350\276\276\345\274\217</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MystackClass", "\350\276\223\345\205\245\346\227\266\350\257\267\347\264\247\345\207\221\350\276\223\345\205\245\357\274\214\344\270\215\350\246\201\345\207\272\347\216\260\347\251\272\346\240\274       \350\276\223\345\205\245\346\240\267\344\276\213\357\274\2326+8/(4-2)*3    (a+b)/(c-d)", nullptr));
        label_4->setText(QCoreApplication::translate("MystackClass", "Data Structure 24winter by AriHB", nullptr));
        label_2->setText(QCoreApplication::translate("MystackClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\350\275\254\345\214\226\344\271\213\345\220\216\347\232\204\350\241\250\350\276\276\345\274\217</span></p></body></html>", nullptr));
        b2->setText(QCoreApplication::translate("MystackClass", "\345\220\216\347\274\200\350\241\250\350\276\276\345\274\217\350\275\254\345\214\226\344\270\272\344\270\255\347\274\200\350\241\250\350\276\276\345\274\217", nullptr));
        b1->setText(QCoreApplication::translate("MystackClass", "\344\270\255\347\274\200\350\241\250\350\276\276\345\274\217\350\275\254\345\214\226\344\270\272\345\220\216\347\274\200\350\241\250\350\276\276\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MystackClass: public Ui_MystackClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSTACK_H
