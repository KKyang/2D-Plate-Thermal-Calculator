#ifndef TWODTHERMALCAL_H
#define TWODTHERMALCAL_H

#include <QMainWindow>
#include "calculatecore.h"

namespace Ui {
class TwoDThermalCal;
}

class TwoDThermalCal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit TwoDThermalCal(QWidget *parent = 0);
    ~TwoDThermalCal();
private:
    CalculateCore *Core;
    int typeInfo;
    
private slots:
    void on_STARTCalculate_clicked();
    void check_finish(const int &checkFin);
    void on_actionAbout_triggered();
    void on_actionSample_1_triggered();
    void on_actionSample_2_triggered();
    void on_actionUsage_triggered();

private:
    Ui::TwoDThermalCal *ui;
};

#endif // TWODTHERMALCAL_H
