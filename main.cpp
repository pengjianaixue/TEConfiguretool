#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QStringList keyList = QStyleFactory::keys();

	for (int i = 0; i < keyList.length(); i++)
	{
		qDebug()<<keyList.at(i);
	}
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    MainWindow w;
	
    w.setWindowTitle("TECT"); 
	w.showMaximized();
    return a.exec();
}
