#include "calculatecore.h"
#include "iostream"
#include "fstream"
#include "QDebug"
#include "string"


CalculateCore::CalculateCore(QObject *parent) :
    QObject(parent)
{
}

void CalculateCore::Calculate(const double W, const double L, const double delta, const double TIfinity, const double hVal, const double IniTemp, const double K, const double tolerance, const double WaterTemp, const double waterK, const int typeInfo){
    //TCHAR szPath[MAX_PATH] = {0};
    cycles = 0;
    lengthnode = L/delta+1;
    heightnode = W/delta+1;
    double *T = new double[lengthnode*heightnode];
    double *TOld = new double[lengthnode*heightnode];

    for(int i=0; i<(lengthnode*heightnode); i++){
        TOld[i] = IniTemp;
    }

    while(1){
        //Core Calculate part
        if(typeInfo == 1){
            for(int i=0; i<(lengthnode*heightnode); i++){
                //plate in the air
                if(i==0){                                                            //left upper corner
                    T[0] = (2*(hVal*delta/K)*TIfinity+(TOld[i+1]+TOld[lengthnode+1]))/(2*(hVal*delta/K+1));
                }
                else if(i==lengthnode-1){                                            //right upper corner
                    T[i] = (2*(hVal*delta/K)*TIfinity+(TOld[i-2]+TOld[lengthnode*2-1]))/(2*(hVal*delta/K+1));
                }
                else if(i==lengthnode*heightnode-1){                                //right bottom corner
                    T[i] = (2*(hVal*delta/K)*TIfinity+(TOld[lengthnode*heightnode-2]+TOld[lengthnode*(heightnode-1)-1]))/(2*(hVal*delta/K+1));
                }
                else if(i==(lengthnode*(heightnode-1))){                            //left bottom corner
                    T[i] = (2*(hVal*delta/K)*TIfinity+(TOld[lengthnode*(heightnode-1)+1]+TOld[lengthnode*(heightnode-2)]))/(2*(hVal*delta/K+1));
                }
                else if(i>0&&i<lengthnode-1){                                       //upper boundary
                    T[i] = ((TOld[i-1]+TOld[i+1]+2*TOld[i+lengthnode])+2*(hVal*delta/K)*TIfinity)/(2*(hVal*delta/K+2));
                }
                else if(i%lengthnode==0){                                            //left boundary
                    T[i] = ((TOld[i-lengthnode]+2*TOld[i+1]+TOld[i+lengthnode])+2*(hVal*delta/K)*TIfinity)/(2*(hVal*delta/K+2));
                }
                else if(i%lengthnode==(lengthnode-1)){                               //right boundary
                    T[i] = ((2*TOld[i-1]+TOld[i-lengthnode]+TOld[i+lengthnode])+2*(hVal*delta/K)*TIfinity)/(2*(hVal*delta/K+2));
                }
                else if(i>lengthnode*(heightnode-1)&&i<lengthnode*heightnode-1){     //Bottom boundary
                    T[i] = ((TOld[i-1]+TOld[i+1]+2*TOld[i-lengthnode])+2*(hVal*delta/K)*TIfinity)/(2*(hVal*delta/K+2));
                }
                else{                                                               //Interior node
                    T[i] = (TOld[i-1]+TOld[i+1]+TOld[i-lengthnode]+TOld[i+lengthnode])/4;
                }
                //plate in the air end
            }
        }
        else if(typeInfo == 2){
            for(int i=0; i<(lengthnode*heightnode); i++){
                //plate just merge into water
                if(i==0){                                                            //left upper corner
                    T[0] = (2*(hVal*delta/K)*TIfinity+(TOld[i+1]+TOld[lengthnode+1])+(waterK*WaterTemp)/K)/(2*(hVal*delta/K+1)+waterK/K);
                }
                else if(i==lengthnode-1){                                            //right upper corner
                    T[i] = (2*(hVal*delta/K)*TIfinity+(TOld[i-2]+TOld[lengthnode*2-1])+(waterK*WaterTemp)/K)/(2*(hVal*delta/K+1)+waterK/K);
                }
                else if(i==lengthnode*heightnode-1){                                //right bottom corner
                    T[i] = (TOld[lengthnode*heightnode-2]+TOld[lengthnode*(heightnode-1)-1]+(2*waterK*WaterTemp)/K)/(2+(2*waterK)/K);
                }
                else if(i==(lengthnode*(heightnode-1))){                            //left bottom corner
                    T[i] = (TOld[lengthnode*(heightnode-1)+1]+TOld[lengthnode*(heightnode-2)]+(2*waterK*WaterTemp)/K)/(2+(2*waterK)/K);
                }
                else if(i>0&&i<lengthnode-1){                                       //upper boundary
                    T[i] = ((TOld[i-1]+TOld[i+1]+2*TOld[i+lengthnode])+2*(hVal*delta/K)*TIfinity)/(2*(hVal*delta/K+2));
                }
                else if(i%lengthnode==0){                                            //left boundary
                    T[i] = (TOld[i-lengthnode]+TOld[i+1]+TOld[i+lengthnode]+(WaterTemp*waterK)/K)/(3+waterK/K);
                }
                else if(i%lengthnode==(lengthnode-1)){                               //right boundary
                    T[i] = (TOld[i-1]+TOld[i-lengthnode]+TOld[i+lengthnode]+(WaterTemp*waterK)/K)/(3+waterK/K);
                }
                else if(i>lengthnode*(heightnode-1)&&i<lengthnode*heightnode-1){     //Bottom boundary
                    T[i] = (TOld[i-1]+TOld[i+1]+TOld[i-lengthnode]+(WaterTemp*waterK)/K)/(3+waterK/K);
                }
                else{                                                               //Interior node
                    T[i] = (TOld[i-1]+TOld[i+1]+TOld[i-lengthnode]+TOld[i+lengthnode])/4;
                }
                //plate just merge into water end
            }
        }
        cycles++;

        //check if data is within the tolerance
        count = 0;
        for(int i=0; i<(lengthnode*heightnode); i++){
            if((abs(T[i]-TOld[i])/TOld[i])<=(tolerance/100))
                count++;
        }
        if(count==lengthnode*heightnode)
            break;
        else{
            for(int i=0; i<(lengthnode*heightnode); i++)
                TOld[i] = T[i];
        }

    }


    std::ofstream myfile;

    //SHGetFolderPath(NULL,CSIDL_DESKTOPDIRECTORY | CSIDL_FLAG_CREATE,NULL,SHGFP_TYPE_CURRENT,szPath);
    QDir appDir = QDir::homePath()+"/Desktop";
    std::string fileName = appDir.filePath("result.txt").toUtf8();
    //qDebug()<<appDir.filePath("result.txt");
    myfile.open (fileName);
    myfile << "Create by KKyang's Program...\n";
    if(typeInfo ==1)
        myfile << "Type: in the air.\n";
    if(typeInfo == 2){
        myfile << "Type: Just merge into water.\n";
        myfile << "Water temperture: "<<WaterTemp<<"(C)\n";
        myfile << "Water's Thermal Conductivity: "<<waterK<<"\n";
    }
    myfile << "This plate is: "<<L<<"*"<<W<<"(m)\n";
    myfile << "delta: "<<delta<<"(m)\n";
    myfile << "Thermal Conductivity: "<<K<<"\n";
    myfile << "Plate Initial Temperture: "<<IniTemp<<"(C)\n\n";
    myfile << "h: "<<hVal<<"\n";
    myfile << "Environment Temperture(infinity): "<<TIfinity<<"(C)\n\n";
    myfile << "Tolerance: "<<tolerance<<"(%)\n";
    myfile << "Count cycles: "<<cycles<<"\n\n";
    myfile << "\nNodes:\n";

    for(int i=0; i<(lengthnode*heightnode); i++){
        if(i%lengthnode==0)
                myfile<<"\n";

                myfile.width(8);
                myfile.right;
                myfile<<T[i]<<"  ";
        }
    myfile.close();

    int check=1;
    emit finishcalculating(check);
    delete T;
    delete TOld;
}
