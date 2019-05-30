#include "nuskaitymas.h"
void nuskaitymas(vector <mokinys> &lentele)
{
      inFile.open("kursiokai.txt");
    string v1,v2;
    int p1,p2,p3,p4,p5,e1,v9;
    int count = 0;
    inFile >>v1>>v2>>p1>>p2>>p3>>p4>>p5>>e1;
    inFile.close();
    double namudarbeliai;
    namudarbeliai=(p1+p2+p3+p4+p5)/5;
    double egzmn;
    egzmn=e1;
    double vidutinis;
    vidutinis=namudarbeliai*0.4+egzmn*0.6;
    double medianacka;
    medianacka=(egzmn+vidutinis)/2;
}
