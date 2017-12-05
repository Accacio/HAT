#include "hat.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HAT w;
    w.show();    
    return a.exec();
}
