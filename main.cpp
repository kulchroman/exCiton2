#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon("/2.jpg"));
    //w.setWindowIcon(QIcon("/2.jpg"));
    w.show();
    
    return a.exec();
}
