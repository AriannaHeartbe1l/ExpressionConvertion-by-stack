#include "Mystack.h"
#pragma execution_character_set("utf-8")



Mystack::Mystack(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

Mystack::~Mystack()
{
    
}



void Mystack::slot1()                           //b1被触发时
{
    ui.textEdit->clear();
    QString str = ui.input_str->text();
    if (infixcheck(str))                        //检查输入是否合法
    {
        ui.output_str->setText(infixToPostfix(str));
    }
    else
    {
        ui.output_str->setText(QString("输入不合法！请重新输入！"));
    }
}



void Mystack::slot2()                           //b2被触发时
{
    ui.textEdit->clear();
    QString str = ui.input_str->text();
    if(postfixcheck(str))                        //检查输入是否合法
    {
        ui.output_str->setText(postfixToInfix(str));
    }
    else
    {
        ui.output_str->setText(QString("输入不合法！请重新输入！"));
    }
}


// 定义infixToPostfix函数，将中缀表达式转换为后缀表达式
QString Mystack::infixToPostfix(const QString& infix) {
    QStack<QChar> s;
    QString postfix = "";
    for (QChar c : infix) {
        if (c.isLetterOrNumber()) {  // 如果是操作数（数字或字母）
            postfix += c;
        }
        else if (c == QChar('(')) {
            s.push(c);
            ui.textEdit->append(QString("将左括号 '(' 压入栈中"));
        }
        else if (c == QChar(')')) {
            while (!s.empty() && s.top() != QChar('(')) {
                postfix += s.top();
                ui.textEdit->append(QString("从栈中弹出运算符 ") + s.top() + QString(" 并添加到后缀表达式中"));
                s.pop();
            }
            if (!s.empty() && s.top() == QChar('(')) {
                s.pop();
                ui.textEdit->append(QString("弹出左括号 '('"));
            }
        }
        else {
            while (!s.empty() && s.top() != QChar('(') && Mystack::precedence(c) <= Mystack::precedence(s.top())) {
                postfix += s.top();
                ui.textEdit->append(QString("从栈中弹出运算符 ") + s.top() + QString(" 并添加到后缀表达式中"));
                s.pop();
            }
            s.push(c);
            ui.textEdit->append(QString("将运算符 ") + c + QString(" 压入栈中"));
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        ui.textEdit->append(QString("从栈中弹出运算符 ") + s.top() + QString(" 并添加到后缀表达式中"));
        s.pop();
    }
    return postfix;
}

// 定义postfixToInfix函数，将后缀表达式转换为中缀表达式
QString Mystack::postfixToInfix(const QString& postfix) {
    QStack<QString> s;
    for (QChar c : postfix) {
        if (c.isLetterOrNumber()) {  // 如果是操作数
            s.push(QString(c));
            ui.textEdit->append(QString("将操作数 ")+ c + QString(" 压入栈中"));
        }
        else {
            QString operand2 = s.top();
            s.pop();
            ui.textEdit->append(QString("从栈中弹出操作数 ") + operand2);
            QString operand1 = s.top();
            s.pop();
            ui.textEdit->append(QString("从栈中弹出操作数 ") + operand1);
            QString temp = "(" + operand1 + c + operand2 + ")";
            s.push(temp);
            ui.textEdit->append(QString("将表达式 ") + temp + QString(" 压入栈中"));
        }
    }
    return s.top();
}

//检查中缀表达式是否合法
bool Mystack::infixcheck(const QString& infix)

{
    int parenthesesCount = 0;  // 用于记录括号的数量，左括号加1，右括号减1
    bool lastIsOperator = false;  // 记录上一个字符是否是运算符，初始为假，因为开头不能是运算符
    bool lastIsDigitOrLetter = false;  // 记录上一个字符是否是数字或字母，初始为假
    for (int i = 0; i < infix.size(); ++i) {
        QChar c = infix.at(i);
        if (c.isSpace()) {  // 如果含有空格，返回不合法
            return false;
        }
        if (c.isDigit() || c.isLetter()) {  // 是数字或字母（操作数）
            lastIsDigitOrLetter = true;
            lastIsOperator = false;
        }
        else if (c == QChar('(')) {
            parenthesesCount++;
            lastIsOperator = true;
            lastIsDigitOrLetter = false;
        }
        else if (c == QChar(')')) {
            parenthesesCount--;
            if (parenthesesCount < 0) {  // 右括号过多，不合法
                return false;
            }
            lastIsOperator = false;
            lastIsDigitOrLetter = false;
        }
        else if (c == QChar('+') || c == QChar('-') || c == QChar('*') || c == QChar('/')) {
            if (lastIsOperator) {  // 连续两个运算符，不合法
                return false;
            }
            lastIsOperator = true;
            lastIsDigitOrLetter = false;
        }
        else {  // 遇到其他非法字符，返回不合法
            return false;
        }
    }
    return parenthesesCount == 0 && !lastIsOperator;  // 括号匹配且最后不能是运算符
}

//检查后缀表达式是否合法
bool Mystack::postfixcheck(const QString& postfix)
{
    int operandCount = 0;  // 操作数个数
    int operatorCount = 0;  // 运算符个数
    bool lastIsOperator = false;  // 记录上一个字符是否是运算符
    for (int i = 0; i < postfix.size(); ++i) {
        QChar c = postfix.at(i);
        if (c.isSpace()) {  // 如果含有空格，返回不合法
            return false;
        }
        if (c.isDigit() || c.isLetter()) {  // 是数字或字母（操作数）
            operandCount++;
            lastIsOperator = false;
        }
        else if (c == QChar('+') || c == QChar('-') || c == QChar('*') || c == QChar('/')) {
            operatorCount++;
            if (lastIsOperator) {  // 连续两个运算符，不合法
                return false;
            }
            lastIsOperator = true;
        }
        else {  // 遇到其他非法字符，返回不合法
            return false;
        }
    }
    return operandCount - operatorCount == 1;  // 后缀表达式合法的条件是操作数个数比运算符个数多1
}

