
#include <iostream>
#include "Paczka.h"
#include <string>
#include <vector>
using namespace std;
Paczka::Paczka(string x, string y, int z)
{
    data = x;
    adres = y;
    waga = z;
    
}
Paczka::Paczka() {
    data = "\0";
    adres = "\0";
    waga = 0;
  
}
Paczka::Paczka(string a, string b) {
    data = a;
    adres = b;
    waga = 0;
   
}
Paczka::~Paczka() { cout << "destrukcja"; };
int Paczka::podaj_koszt_nadania() {
    int koszt;
    if (waga<10)
    {
       return koszt = 20;
    }
    else if (waga>=10 && waga<50)
    {
        return koszt = 30;
    }
    else
    {
        return koszt = 50;
    }
}
void Paczka::piszDane() {
    cout << "data nadania: " << data << endl << "adres nadania: " << adres << endl << "waga nadanej paczki: " << waga << "kg" << endl
        << "koszt wyslania paczki: " << podaj_koszt_nadania() << endl << endl;


}
string Paczka::zmienAdresNadania(string a) {
    adres = a;
    return adres;
}
bool Paczka:: operator==(Paczka& p1) {
    if (this->adres==p1.adres && this->waga==p1.waga)
    {
        return true;
    }
    else
    {
        return false;
    }
}
istream& operator>>(istream& wej, Paczka& p1) {
    cout << "podaj date nadania\n";
    getline(wej , p1.data);
    cout << "podaj adres nadania\n";
    getline(wej , p1.adres);
    cout << "podaj wage paczki\n";
    wej >> p1.waga;
    return wej;
}
ostream& operator<<(ostream& wyj, Paczka& p1) {
    cout << "data: " << p1.data << endl;
    cout << "adres nadania: " << p1.adres << endl;
    cout << "waga paczki " << p1.waga << endl;
    return wyj;
}


int main()
{
    Paczka p1("2022-06-25", "ul. Sucharskiego 2, Rzeszow", 15), p2("2022-06-25", "ul. Sucharskiego 2, Rzeszow");
    p1.zmienAdresNadania("ul. Strzyzowska12, Rzeszów");
    cout << "Koszt nadania paczki wynosi:" << p1.podaj_koszt_nadania() << endl;
    p2.piszDane();
    Paczka p3;
  
    cin >> p3;
  
    if (p1 == p2)
        cout << "Paczki maja taki sam adres nadania i wage";
    else
    {
        cout << "Paczki sa rozne\n";
    }

    Paczka malaPaczka("29.06.2022","Sw Antoniego 34");
    
    vector<Paczka> listaPaczek;
    vector <Paczka> ::iterator itek = listaPaczek.begin();
    
    for (int i=0; i < size(listaPaczek); i++)
    {
        listaPaczek.push_back(malaPaczka);
        listaPaczek[i].waga = rand() % 90 + 5;
        listaPaczek[i].piszDane();
    }

    
}
