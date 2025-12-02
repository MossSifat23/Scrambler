#include "mainwindow.h"
#include<QLabel>
#include <QApplication>

class add_letter
{

};

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();


}
