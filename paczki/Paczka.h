#pragma once
#include <iostream>
#include<string>
using namespace std;
class Paczka
{public:
	string data;
	string adres;
	int waga;
public:
	Paczka(string, string, int);
	Paczka(string, string);
	Paczka();
	~Paczka();
	int podaj_koszt_nadania();
	void piszDane();
	string zmienAdresNadania(string);
	friend istream& operator>>(istream& wej, Paczka& p1);
	bool operator==(Paczka& p1);
	friend ostream& operator<<(ostream& wyj, Paczka& p1);
};

