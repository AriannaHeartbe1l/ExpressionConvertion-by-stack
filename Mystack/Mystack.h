#pragma once

#include <QtWidgets/QMainWindow>
#include <windows.h>
#include "ui_Mystack.h"
#include <iostream>
#include <Qstack>
#include <Qstring>
#include <cctype>
using namespace std;

class Mystack : public QMainWindow
{
    Q_OBJECT

public:
    Mystack(QWidget* parent = nullptr);
    ~Mystack();

    // 定义操作符的优先级
    int precedence(QChar op) {
        if (op == QChar('+') || op == QChar('-'))
            return 1;
        if (op == QChar('*') || op == QChar('/'))
            return 2;
        return 0;
    }
   
    QString infixToPostfix(const QString& infix);
    QString postfixToInfix(const QString& postfix);
    bool infixcheck(const QString& infix);
    bool postfixcheck(const QString& postfix);
   

    //用于连接信号的槽函数（b1,b2）
public slots:
    void slot1();
    void slot2();


  

private:
    Ui::MystackClass ui;
};
