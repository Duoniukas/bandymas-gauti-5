#include"mano.h"


int main()
{
    vector<mokinys>lentele;
    mokinys temp;
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
    ifstream inFile;
       if(abc=="pp")
         {

          cout<<"Iveskite savo varda" << endl;
    cin>>temp.v;
    cout << "Iveskite savo pavarde" << endl;
    cin>>temp.p;
    cout<<"namu darbu pazymiai"<<endl;

        sum=0;
        while(1)
         {
          cin>>nd;
            if(nd==0)
              {break;
                 temp.ndm.push_back(nd);
                 sum=sum+nd;
              }
                 else
                    if(nd<0 || nd>10)
                    cout<<"blogi skaitmenys"<<" \n"<<endl;


         }
          ndpazimys=(sum/temp.ndm.size());
          cout<<"iveskite egzamino pazymi "<<endl;
          EG:cin>>e;
           if(e<0 || e>10)
           {cout<<"BLOGAS PAZIMYS \n";
             goto EG;}
              else
            temp.egzas=e*0.6;
            ndp=ndpazimys*0.4;
            temp.galutinis=egzas+ndp;
            temp.mediana=(e+nd)/2;
            lentele.push_back(temp);
            cout<<"RANKA IVESTU DUOMENU LENTELE" << "\n"<<endl;
        cout.fill(' ');
        cout.width(60);
        cout<<left<<setw(10)<<"Vardas"<<left<<setw(10)<<"Pavarde"<<right<<setw(20)<<"Galutinis (vid.)"<<right<<setw(20)<<"Galutinis (Med.)"<<endl;
        cout.fill('-');
        cout.width(61);
        cout<<""<<endl;
        cout.fill(' ');
        cout.width(60);
        for(mokinys duomenys: lentele)
        cout<<left<<setw(10)<<duomenys.v<<setw(10)<<duomenys.p<<right<<setw(20)<<duomenys.galutinis<<right<<setw(20)<<duomenys.mediana<<endl;
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

              {

        string v1,v2;
        double vidutinis, medianacka;
        nuskaitymas(lentele);


        cout.fill(' ');
        cout.width(60);
        cout<<left<<setw(10)<<"Vardas"<<left<<setw(10)<<"Pavarde"<<right<<setw(20)<<"Galutinis (vid.)"<<right<<setw(20)<<"Galutinis (Med.)"<<endl;
        cout.fill('-');
        cout.width(61);
        cout<<""<<endl;
        cout.fill(' ');
        cout.width(60);
        cout<<left<<setw(10)<<v1<<setw(10)<<v2<<right<<setw(20)<<vidutinis<<right<<setw(20)<<medianacka<<endl;

              }

              void RandomFailai(vector<studentai>lentele)
                  vector<studentai>moksliukai;
	              vector<studentai>nemoksliukai;
    int temp_sum = 0;
	double temp_vid1, temp_med1, temp_med2;
      studentai temp;
    chrono::steady_clock::time_point begin = chrono::steady_clock::now();
    string numeris,txt={".txt"};
    string a[10]="Vardas";
    string b[10]="Pavarde";
    string lievakai ,mokslinciai,duomenys;
       int n=1;
       for(int i=1; i<=5; i++)
    {
        n=n*10;
                   ofstream myFyle;
                myFyle.open ("Rezultatai.txt");
            myFyle <<"Vardas Pavarde ND1 ND2 ND3 ND4 ND5 EGZAMINAS" <<endl;
            for(int j=1; j<=k; j++)
                myFyle << a[i]<<j<<" "<<b[i]<<j<<" "<<rand() % 10 + 1<<" "<<rand() % 10 + 1<<" "<<rand() % 10 + 1<<" "<<rand() % 10 + 1<<" "<<rand() % 10 + 1<<" "<<rand() % 10 + 1<<"\n";
                myFyle.close();

            {
			cin>>temp.v>>temp.p;
			temp.ndp.clear();
			for(int i=0, temp_paz; i<5; i++)
            {
                in>>temp_paz;
                temp.nd.push_back(temp_paz);
            }
            in>>temp.egzas;
            temp_sum=0;
			for (int i : temp.ndp)
				temp_sum += i;
			temp_vid1 = temp_sum * 1.0 / (temp.ndp.*0,4));
			temp.vidutinis = temp_vid1 * 0.4 + temp.egzas*0.6;
			if(temp.vidutinis>=5)
                mokslinciai.push_back(temp);
			else
                lievakai.push_back(temp);
                in.close();

            ofstream myFyle2("proto_bokstai.txt");
                myFyle2.fill(' ');
        myFyle2.width(40);
        myFyle2<<left<<setw(10)<<"Vardas"<<left<<setw(10)<<"Pavarde"<<right<<setw(20)<<"Galutinis (vid.)"
            for (mokinys duomenys : mokslinciai)
        myFyle2 << setw(10) << right << duomenys.v << setw(10) << right << duomenys.p << setw(20) << right << setprecision(3) << duomenys.vid << endl;
        myFyle2.close();
        myFyle2.fill('-');
        myFyle2.width(40);
        myFyle2<<""<<endl;
        myFyle2.fill(' ');
        myFyle2.width(40);
        myFyle2<<left<<setw(10)<<duomenys.v<<setw(10)<<duomenys.p<<right<<setw(20)<<duomenys.vidutinis<<right<<setw(20)<<endl;


           ofstream myFyle3("lievakai.txt");
        myFyle3.fill(' ');
        myFyle3.width(40);
        myFyle3<<left<<setw(10)<<"Vardas"<<left<<setw(10)<<"Pavarde"<<right<<setw(20)<<"Galutinis (vid.)"<<right<<setw(20)<<"Galutinis (Med.)"<<endl;
        myFyle3.fill('-');
        myFyle3.width(40);
        myFyle3<<""<<endl;
        myFyle3.fill(' ');
        myFyle3.width(40);
        myFyle3<<left<<setw(10)<<duomenys.v<<setw(10)<<duomenys.p<<right<<setw(20)<<duomenys.vidutinis<<right<<setw(20)<<endl;
            for (mokinys duomenys : lievakai)
        myFyle3 << setw(10) << left << duomenys.v << setw(10) << left << duomenys.vidutinis << setw(20) << right << setprecision(3) << duomenys.vid << endl;
        myFyle3.close();


                chrono::steady_clock::time_point end=chrono::steady_clock::now();
                cout << "programos darbo laikas " << chrono::duration_cast<chrono::seconds>(end - begin).count() <<" sek"<<endl;
}
           return 0;
}}}
