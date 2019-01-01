#include "mainwindow.h"
#include <QApplication>
#include "resource.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    MainWindow w;
//    w.setWindowFlag(Qt::FramelessWindowHint);
    w.show();
    return a.exec();
}
