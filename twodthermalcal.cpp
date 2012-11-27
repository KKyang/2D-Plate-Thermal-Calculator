#include "twodthermalcal.h"
#include "ui_twodthermalcal.h"
#include "QMessageBox"
#include "QDebug"

TwoDThermalCal::TwoDThermalCal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TwoDThermalCal)
{
    ui->setupUi(this);
    Core = 0;
    setWindowTitle("Temp Calculator");
    typeInfo = 1;
    if(!Core)
            Core = new CalculateCore;

    connect(Core,SIGNAL(finishcalculating(int)),this,SLOT(check_finish(int)));
}

TwoDThermalCal::~TwoDThermalCal()
{
    delete ui;
    delete Core;
}

void TwoDThermalCal::check_finish(const int &checkFin){
    if(checkFin)
        ui->STARTCalculate->setEnabled(true);
    QMessageBox::warning(0, 0,"Calculate complete!! Files saved on Desktop.");
}

void TwoDThermalCal::on_STARTCalculate_clicked()
{
    if(ui->plateHeight->value()==0||ui->plateWidth->value()==0||ui->deltaValue->value()==0){
          QMessageBox::warning(0, 0,"Setup not Complete!!");
    }
    else if(ui->mergeJustIntoWater->checkState()&&ui->WaterkValue->value() == 0)
           QMessageBox::warning(0, 0,"Water K can't be zero!!");
    else if((int(ui->plateHeight->value())%int(ui->deltaValue->value())==0)&&(int(ui->plateWidth->value())%int(ui->deltaValue->value())==0)){
        ui->STARTCalculate->setEnabled(false);
        if(ui->mergeJustIntoWater->checkState())
            typeInfo = 2;
        else
            typeInfo = 1;
        Core->Calculate(double(ui->plateHeight->value())/1000, double(ui->plateWidth->value())/1000, double(ui->deltaValue->value())/1000, ui->TInfinityValue->value(), ui->hValue->value(), ui->initialTempValue->value(), ui->thermlConductivity->value(), ui->toleranceValue->value(), ui->WaterTempValue->value(), ui->WaterkValue->value(), typeInfo);
    }
    else{
          QMessageBox::warning(0, 0,"Error dividing!");
    }
}

void TwoDThermalCal::on_actionAbout_triggered()
{
    QMessageBox::warning(0, 0,"Made by KKyang.");
}

void TwoDThermalCal::on_actionSample_1_triggered()
{
    ui->plateWidth->setValue(200);
    ui->plateHeight->setValue(100);
    ui->deltaValue->setValue(50);
    ui->thermlConductivity->setValue(10);
    ui->initialTempValue->setValue(100);
    ui->hValue->setValue(30);
    ui->TInfinityValue->setValue(25);
    ui->toleranceValue->setValue(0.1);
    ui->WaterkValue->setValue(0.8);
    ui->WaterTempValue->setValue(0);
    ui->mergeJustIntoWater->setChecked(1);
}

void TwoDThermalCal::on_actionSample_2_triggered()
{
    ui->plateWidth->setValue(200);
    ui->plateHeight->setValue(100);
    ui->deltaValue->setValue(25);
    ui->thermlConductivity->setValue(10);
    ui->initialTempValue->setValue(100);
    ui->hValue->setValue(30);
    ui->TInfinityValue->setValue(25);
    ui->toleranceValue->setValue(0.1);
    ui->WaterkValue->setValue(0.8);
    ui->WaterTempValue->setValue(0);
    ui->mergeJustIntoWater->setChecked(1);
}

void TwoDThermalCal::on_actionUsage_triggered()
{
    QMessageBox::warning(0, 0,"The calculated result is saved on Desktop.");
}
