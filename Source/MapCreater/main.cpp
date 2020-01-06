#include "mainwindow.h"
#include "QMapWindow.h"

#include <QApplication>

int main(int argc, char* argv[])
{
	QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QApplication a(argc, argv);
	QMapWindow w;
	w.show();
	return a.exec();
}
