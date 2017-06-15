#include <iostream>
using namespace std;

//----------struktura DATUM-------------
struct Datum
{
	int d;
	int m;
	int g;
};

void info(Datum date)
{
	cout << date.d << "." << date.m << "." << date.g;
}
Datum ucitaj_datum()
{
	Datum date;
	cout << "Unesite dan, mjesec, godinu";
	cin >> date.d >> date.m >> date.g;
	return date;
}

//----------struktura OSOBA-------------
struct Osoba
{
	char ime[10];
	int id;
};

void info(Osoba o)
{
	cout << "Id: \t" << o.id << ", Ime: " << o.ime << endl;
}

Osoba odaberite_osobu(Osoba osobe[], int max)
{
	for (int i = 0; i<max; i++)
	{
		info(osobe[i]);
	}

	do
	{
		cout << "Unesite ID osobe: ";
		int x;
		cin >> x;

		for (int i = 0; i < max; i++)
		{
			if (osobe[i].id == x)
				return osobe[i];
		}
		cout << "Neispravan Id" << endl;
	} while (true);
}

const int max_s = 10;
Osoba studenti[max_s] = {
	{ "Student J", 101 },
	{ "Student I", 102 },
	{ "Student H", 103 },
	{ "Student G", 104 },
	{ "Student F", 105 },
	{ "Student E", 106 },
	{ "Student D", 107 },
	{ "Student C", 108 },
	{ "Student B", 109 },
	{ "Student A", 110 },
};

const int max_i = 5;
Osoba ispitivaci[max_i] = {
	{ "Nina B.", 534 },
	{ "Jasmin A.", 435 },
	{ "Denis M.", 256 },
	{ "Emina J.", 325 },
	{ "Zanin V.", 914 },
};

struct PrijavaZaIspit
{
	Osoba student;
	Datum datum_prijave;
	Datum datum_odjave;
	int ocjena;
};

const int max_p = 100;
struct Ispit
{
	Osoba ispitivac;
	Datum datum_ispita;
	int brojac_prijavljenih;
	char predmet[10];
	PrijavaZaIspit prijave[max_p];
};

Ispit dodaj_ispit()
{
	Ispit ispit;
	//zadatak: ucitati podatke 
	char pred[10];
	cout << "Predmet: "; cin >> pred;

	ispit.predmet = pred;
	ispit.brojac_prijavljenih++;
	ispit.datum_ispita = ucitaj_datum();
	
	
	return ispit;
}

void info(Ispit i)
{
	cout << "Predmet: " << i.predmet;

	cout << ", \tDatum ispita:";
	info(i.datum_ispita);

	cout << ", \tIspitivac: ";
	info(i.ispitivac);

	cout << ", \tBroj prijavljenih: " << i.brojac_prijavljenih << endl;
}

Ispit odaberite_ispit(Ispit ispiti[], int max)
{
	//zadatak: vratiti ispit na osnovu RB
	return;
}


void main()
{
	const int max_ispiti = 10;
	Ispit ispiti[max_ispiti];

	int x;
	do
	{
		cout << "1. Ispiti - prikazi sve" << endl;
		cout << "2. Ispiti - dodaj novi (zakazi novi ispit)" << endl;
		cout << "3. Prijavljeni za ispit: prikazi sve (za ispit x)" << endl;
		cout << "4. Prijavljeni za ispit: dodaj novu prijavu (za ispit x)" << endl;
		cout << "5. Evidentiraj sve ocjene (za ispit x)" << endl;
		cout << "0. EXIT" << endl;
		cin >> x;
		if (x == 1)
		{
			for (int i = 0; i < max_ispiti; i++) {
				info(ispiti[i]);
			}
		}
		if (x == 2)
		{
			dodaj_ispit();
		}
		if (x == 3)
		{

		}
		if (x == 4)
		{

		}
		if (x == 5)
		{

		}
	} while (x != 0);

}


