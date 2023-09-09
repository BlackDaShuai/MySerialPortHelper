#include "widget.h"

#include <QApplication>

/*
 * 使用串口收数据
 * 存放数据
 * 绘制数据
 *
 *
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
