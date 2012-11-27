#ifndef CALCULATECORE_H
#define CALCULATECORE_H

#include <QObject>
#include "fstream"
#include "QString"
#include "QDate"
#include <shlobj.h>
#include "QDir"
#include "QDebug"

class CalculateCore : public QObject
{
    Q_OBJECT
public:
    explicit CalculateCore(QObject *parent = 0);
    void Calculate(const double W, const double L, const double delta, const double TIfinity, const double hVal, const double IniTemp, const double K, const double tolerance, const double WaterTemp, const double waterK, const int typeInfo);
private:
    int lengthnode;
    int heightnode;
    int count;
    QDate date;
    int cycles;

signals:
    void finishcalculating(const int &chechFin);

    
public slots:
    
};

#endif // CALCULATECORE_H
