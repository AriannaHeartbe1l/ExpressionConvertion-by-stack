#include "Mystack.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mystack w;
    w.show();
    return a.exec();
}
