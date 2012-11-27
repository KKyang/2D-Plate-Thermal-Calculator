#include <QApplication>
#include "twodthermalcal.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TwoDThermalCal w;
    w.show();
    
    return a.exec();
}
