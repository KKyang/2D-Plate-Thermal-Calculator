/********************************************************************************
** Form generated from reading UI file 'twodthermalcal.ui'
**
** Created: Tue Nov 27 10:44:35 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWODTHERMALCAL_H
#define UI_TWODTHERMALCAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TwoDThermalCal
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionSample_1;
    QAction *actionSample_2;
    QAction *actionUsage;
    QWidget *centralWidget;
    QPushButton *STARTCalculate;
    QTabWidget *InitialSetup;
    QWidget *tab;
    QSpinBox *plateWidth;
    QSpinBox *plateHeight;
    QSpinBox *deltaValue;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *thermlConductivity;
    QDoubleSpinBox *initialTempValue;
    QWidget *tab_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *toleranceValue;
    QDoubleSpinBox *TInfinityValue;
    QDoubleSpinBox *hValue;
    QGroupBox *groupBox;
    QLabel *label_9;
    QDoubleSpinBox *WaterTempValue;
    QLabel *label_10;
    QDoubleSpinBox *WaterkValue;
    QCheckBox *mergeJustIntoWater;
    QMenuBar *menuBar;
    QMenu *menuFiles;
    QMenu *menuSample_Configue;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TwoDThermalCal)
    {
        if (TwoDThermalCal->objectName().isEmpty())
            TwoDThermalCal->setObjectName(QString::fromUtf8("TwoDThermalCal"));
        TwoDThermalCal->resize(242, 384);
        actionExit = new QAction(TwoDThermalCal);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(TwoDThermalCal);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSample_1 = new QAction(TwoDThermalCal);
        actionSample_1->setObjectName(QString::fromUtf8("actionSample_1"));
        actionSample_2 = new QAction(TwoDThermalCal);
        actionSample_2->setObjectName(QString::fromUtf8("actionSample_2"));
        actionUsage = new QAction(TwoDThermalCal);
        actionUsage->setObjectName(QString::fromUtf8("actionUsage"));
        centralWidget = new QWidget(TwoDThermalCal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        STARTCalculate = new QPushButton(centralWidget);
        STARTCalculate->setObjectName(QString::fromUtf8("STARTCalculate"));
        STARTCalculate->setEnabled(true);
        STARTCalculate->setGeometry(QRect(20, 250, 201, 71));
        InitialSetup = new QTabWidget(centralWidget);
        InitialSetup->setObjectName(QString::fromUtf8("InitialSetup"));
        InitialSetup->setGeometry(QRect(20, 10, 201, 231));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        plateWidth = new QSpinBox(tab);
        plateWidth->setObjectName(QString::fromUtf8("plateWidth"));
        plateWidth->setGeometry(QRect(130, 10, 51, 22));
        plateWidth->setMaximum(1000);
        plateHeight = new QSpinBox(tab);
        plateHeight->setObjectName(QString::fromUtf8("plateHeight"));
        plateHeight->setGeometry(QRect(130, 40, 51, 22));
        plateHeight->setMaximum(1000);
        deltaValue = new QSpinBox(tab);
        deltaValue->setObjectName(QString::fromUtf8("deltaValue"));
        deltaValue->setGeometry(QRect(130, 70, 51, 22));
        deltaValue->setMaximum(100);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 71, 21));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 71, 21));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 121, 21));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 130, 111, 21));
        thermlConductivity = new QDoubleSpinBox(tab);
        thermlConductivity->setObjectName(QString::fromUtf8("thermlConductivity"));
        thermlConductivity->setGeometry(QRect(130, 100, 51, 22));
        thermlConductivity->setMaximum(100);
        initialTempValue = new QDoubleSpinBox(tab);
        initialTempValue->setObjectName(QString::fromUtf8("initialTempValue"));
        initialTempValue->setGeometry(QRect(130, 130, 51, 22));
        initialTempValue->setMaximum(1000);
        InitialSetup->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 71, 21));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 40, 121, 21));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 70, 71, 21));
        toleranceValue = new QDoubleSpinBox(tab_2);
        toleranceValue->setObjectName(QString::fromUtf8("toleranceValue"));
        toleranceValue->setGeometry(QRect(130, 70, 51, 22));
        toleranceValue->setMaximum(10);
        TInfinityValue = new QDoubleSpinBox(tab_2);
        TInfinityValue->setObjectName(QString::fromUtf8("TInfinityValue"));
        TInfinityValue->setGeometry(QRect(130, 40, 51, 22));
        TInfinityValue->setMaximum(1000);
        hValue = new QDoubleSpinBox(tab_2);
        hValue->setObjectName(QString::fromUtf8("hValue"));
        hValue->setGeometry(QRect(130, 10, 51, 22));
        hValue->setMaximum(1000);
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 100, 191, 101));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 20, 101, 21));
        WaterTempValue = new QDoubleSpinBox(groupBox);
        WaterTempValue->setObjectName(QString::fromUtf8("WaterTempValue"));
        WaterTempValue->setGeometry(QRect(130, 20, 51, 22));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 50, 91, 16));
        WaterkValue = new QDoubleSpinBox(groupBox);
        WaterkValue->setObjectName(QString::fromUtf8("WaterkValue"));
        WaterkValue->setGeometry(QRect(130, 50, 51, 22));
        mergeJustIntoWater = new QCheckBox(groupBox);
        mergeJustIntoWater->setObjectName(QString::fromUtf8("mergeJustIntoWater"));
        mergeJustIntoWater->setGeometry(QRect(20, 80, 161, 16));
        InitialSetup->addTab(tab_2, QString());
        TwoDThermalCal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TwoDThermalCal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 242, 21));
        menuFiles = new QMenu(menuBar);
        menuFiles->setObjectName(QString::fromUtf8("menuFiles"));
        menuSample_Configue = new QMenu(menuFiles);
        menuSample_Configue->setObjectName(QString::fromUtf8("menuSample_Configue"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        TwoDThermalCal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TwoDThermalCal);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TwoDThermalCal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TwoDThermalCal);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TwoDThermalCal->setStatusBar(statusBar);

        menuBar->addAction(menuFiles->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFiles->addAction(menuSample_Configue->menuAction());
        menuFiles->addSeparator();
        menuFiles->addAction(actionExit);
        menuSample_Configue->addAction(actionSample_1);
        menuSample_Configue->addAction(actionSample_2);
        menuSample_Configue->addSeparator();
        menuAbout->addAction(actionUsage);
        menuAbout->addAction(actionAbout);

        retranslateUi(TwoDThermalCal);
        QObject::connect(actionExit, SIGNAL(triggered()), TwoDThermalCal, SLOT(close()));

        InitialSetup->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TwoDThermalCal);
    } // setupUi

    void retranslateUi(QMainWindow *TwoDThermalCal)
    {
        TwoDThermalCal->setWindowTitle(QApplication::translate("TwoDThermalCal", "TwoDThermalCal", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("TwoDThermalCal", "Exit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("TwoDThermalCal", "About", 0, QApplication::UnicodeUTF8));
        actionSample_1->setText(QApplication::translate("TwoDThermalCal", "Sample 1", 0, QApplication::UnicodeUTF8));
        actionSample_2->setText(QApplication::translate("TwoDThermalCal", "Sample 2", 0, QApplication::UnicodeUTF8));
        actionUsage->setText(QApplication::translate("TwoDThermalCal", "Usage", 0, QApplication::UnicodeUTF8));
        STARTCalculate->setText(QApplication::translate("TwoDThermalCal", "START", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TwoDThermalCal", "Width(mm)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TwoDThermalCal", "Height(mm)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TwoDThermalCal", "delta(mm)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TwoDThermalCal", "thermal Conductivity(K)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TwoDThermalCal", "Initial Temperture(C)", 0, QApplication::UnicodeUTF8));
        InitialSetup->setTabText(InitialSetup->indexOf(tab), QApplication::translate("TwoDThermalCal", "2DPlate", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TwoDThermalCal", "h", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("TwoDThermalCal", "Inifinity Temperture(C)", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("TwoDThermalCal", "Tolerance(%)", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TwoDThermalCal", "Water Status (If needed)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("TwoDThermalCal", "Water Temperture", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("TwoDThermalCal", "Water k", 0, QApplication::UnicodeUTF8));
        mergeJustIntoWater->setText(QApplication::translate("TwoDThermalCal", "\345\211\233\346\262\222\345\205\245\346\260\264\351\235\242", 0, QApplication::UnicodeUTF8));
        InitialSetup->setTabText(InitialSetup->indexOf(tab_2), QApplication::translate("TwoDThermalCal", "Environment", 0, QApplication::UnicodeUTF8));
        menuFiles->setTitle(QApplication::translate("TwoDThermalCal", "Files", 0, QApplication::UnicodeUTF8));
        menuSample_Configue->setTitle(QApplication::translate("TwoDThermalCal", "Sample Configue", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("TwoDThermalCal", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TwoDThermalCal: public Ui_TwoDThermalCal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWODTHERMALCAL_H
