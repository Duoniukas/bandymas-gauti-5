#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <iterator>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{
    int skaitliukas=0,i=0,iseiti=0;
    double namudarbai,egzas,e,sum,galutinis,suma,ndpazimys;
    double nd,ndp;
    string v;
    string p, abc;
    double gal;
    double mediana;
    double suma2=0, galrand, E,mediana2;
    double pazymys;
    cout<<"jei norite patys , rasykite 'pp' ,jei norite rand ,rasykite 'rr' ,jei norite is failo ,rasykite 'ff' "<<endl;
    cin>>abc;
       if(abc=="pp")
         {

          cout<<"Iveskite savo varda" << endl;
    cin>>v;
    cout << "Iveskite savo pavarde" << endl;
    cin>>p;
    cout<<"namu darbu pazymiai"<<endl;

    vector <int> ndm;
        sum=0;
        while(1)
         {
          cin>>nd;
            if(nd==0)
              {break;
                 ndm.push_back(nd);
                 sum=sum+nd;
              }
                 else
                    if(nd<0 || nd>10)
                    cout<<"blogi skaitmenys"<<" \n"<<endl;


         }
          ndpazimys=(sum/ndm.size());
          cout<<"iveskite egzamino pazymi "<<endl;
          EG:cin>>e;
           if(e<0 || e>10)
           {cout<<"BLOGAS PAZIMYS \n";
             goto EG;}
              else
            egzas=e*0.6;
            ndp=ndpazimys*0.4;
            galutinis=egzas+ndp;
            mediana=(e+nd)/2;
            cout<<"RANKA IVESTU DUOMENU LENTELE" << "\n"<<endl;
        cout.fill(' ');
        cout.width(60);
        cout<<left<<setw(10)<<"Vardas"<<left<<setw(10)<<"Pavarde"<<right<<setw(20)<<"Galutinis (vid.)"<<right<<setw(20)<<"Galutinis (Med.)"<<endl;
        cout.fill('-');
        cout.width(61);
        cout<<""<<endl;
        cout.fill(' ');
        cout.width(60);
        cout<<left<<setw(10)<<v<<setw(10)<<p<<right<<setw(20)<<galutinis<<right<<setw(20)<<mediana<<endl;
        }
            else
              {
     if(abc=="rr")
    {
    cout<<"Iveskite savo varda" << endl;
    cin>>v;
    cout << "Iveskite savo pavarde" << endl;
    cin>>p;
        cout<<"Kiek bus namu darbu pazymiu kuriuos isves atsitiktinai?"<<endl;
int sk;
cin>>sk;
vector<double>ndr;
for (int i=0; i<sk; i++)
{
    pazymys=((rand()%10)+1)/sk;
    ndr.push_back(pazymys);
    suma2=suma2+pazymys;
        }
    E=(rand()%10)+1;
    ndr.push_back(E);

    galrand=E*0.6+pazymys*0.4;
    mediana2=(E+pazymys)/2;
    cout<<"Atsitiktinai isvestu pazymiu vidurkis"<<"\n"<<endl;
        cout.fill(' ');
        cout.width(60);
        cout<<left<<setw(10)<<"Vardas"<<left<<setw(10)<<"Pavarde"<<right<<setw(20)<<"Galutinis (vid.)"<<right<<setw(20)<<"Galutinis (Med.)"<<endl;
        cout.fill('-');
        cout.width(61);
        cout<<""<<endl;
        cout.fill(' ');
        cout.width(60);
        cout<<left<<setw(10)<<v<<setw(10)<<p<<right<<setw(20)<<galrand<<right<<setw(20)<<mediana2<<endl;

     }
     else
{cout<<"variantas negaliams";}





           return 0;
}}
