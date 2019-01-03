#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle(QStyleFactory::create("Fusion"));

    MainWindow w;
//    w.setWindowFlag(Qt::FramelessWindowHint);
    w.show();
    w.setWindowTitle("TECT");
    return a.exec();
}
