#include <iostream>
using namespace std;

//----------struktura DATUM-------------
struct Datum
{
	int d;
	int m;
	int g;
};

void info(Datum* date)
{
	cout <<  (*date).d << "." << (*date).m << "." << (*date).g;
}
Datum* ucitaj_datum()
{
	Datum* date = new Datum;
	cout << "Unesite dan, mjesec, godinu:" << endl;
	cin >> date->d >> date->m >> date->g;
	return date;
}

//----------struktura OSOBA-------------
struct Osoba
{
	char ime[10];
	int id;

	Osoba(char _ime[10], int _id)
	{
		for (int i = 0; i < 10; i++) ime[i] = _ime[i];
		id = _id;
	}
};

void info(Osoba* o)
{
	cout << "Id: \t" << o->id << ", Ime: " << o->ime;
}

Osoba* odaberite_osobu(Osoba* osobe[], int max)
{
	for (int i = 0; i< max; i++)
	{
		info(osobe[i]);
		cout << endl;
		//	ili
		//cout << "Id: \t" << osobe[i].id << ", Ime: " << osobe[i].ime << endl;
		// ili
		//Osoba o = osobe[i];
		//cout << "Id: \t" << o.id << ", Ime: " << o.ime << endl;

	}

	do
	{
		cout << "Unesite ID osobe: ";
		int x;
		cin >> x;

		for (int i = 0; i < max; i++)
		{
			if (osobe[i]->id == x)
				return osobe[i];
		}
		cout << "Neispravan Id" << endl;
	} while (true);
}



const int max_s = 10;
Osoba* studenti[max_s] = {
	new Osoba( "Student J", 101 ),
	new Osoba( "Student I", 102 ),
	new Osoba( "Student H", 103 ),
	new Osoba( "Student G", 104 ),
	new Osoba( "Student F", 105 ),
	new Osoba( "Student E", 106 ),
	new Osoba( "Student D", 107 ),
	new Osoba( "Student C", 108 ),
	new Osoba( "Student B", 109 ),
	new Osoba( "Student A", 110 ),
};

const int max_i = 5;
Osoba* ispitivaci[max_i] = {
	new Osoba ("Nina B.", 534),
	new Osoba ("Jasmin A.", 43),
	new Osoba ("Denis M.", 256),
	new Osoba ("Emina J.", 325),
	new Osoba ("Zanin V.", 914),
};

struct PrijavaZaIspit
{
	Osoba* student;
	Datum* datum_prijave;
	Datum* datum_odjave;
	int ocjena;
};

const int max_p = 100;
struct Ispit
{
	Osoba* ispitivac;
	Datum* datum_ispita;
	int brojac_prijavljenih;
	char predmet[10];
	PrijavaZaIspit prijave[max_p];
};

Ispit* dodaj_ispit()
{
	Ispit* i = new Ispit;
	//zadatak: ucitati podatke 
	i->brojac_prijavljenih = 0;

	cout << "Unesite naziv predmeta (bez razmaka)" << endl;
	cin >> i->predmet;

	cout << "Unesite datum ispita: ";
	i->datum_ispita = ucitaj_datum();
	//ili (alternativa)
	//cin >> i.datum_ispita.d;
	//cin >> i.datum_ispita.m;
	//cin >> i.datum_ispita.g;

	i->datum_ispita->d = 0;
	i->datum_ispita->m = 0;
	i->datum_ispita->g = 0;

	cout << "Ispitivac: ";
	i->ispitivac = (odaberite_osobu(ispitivaci, max_i));
	//ili (alternativno ako nema niza ispitivaci ???)
	//cin >> i.ispitivac.id;
	//cin >> i.ispitivac.ime;
	return i;
}

void info(Ispit* i)
{
	cout << "Predmet: " << i->predmet;

	cout << ", \tDatum ispita: ";
	info((i->datum_ispita));

	cout << ", \tIspitivac: ";
	info((i->ispitivac));

	cout << ", \tBroj prijavljenih: " << (i->brojac_prijavljenih) << endl;
}

Ispit* odaberite_ispit(Ispit* ispiti[], int max)
{
	for (int i = 0; i<max; i++)
	{
		cout << i + 1 << ": ";
		info(ispiti[i]);
	}
	cout << "Unesite RB ispita: ";
	int x;
	cin >> x;
	return ispiti[x - 1];
}

void main()
{
	const int max_ispiti = 10;
	Ispit ispiti[max_ispiti];
	int brojac_ispita = 0;
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
			for (int i = 0; i<brojac_ispita; i++)
			{
				info(&ispiti[i]);
			}
		}
		if (x == 2)
		{
			//Ispit i = dodaj_ispit();
			ispiti[brojac_ispita] = *dodaj_ispit();
			brojac_ispita++;
		}
		if (x == 3)
		{
			Ispit* i = odaberite_ispit(&ispiti, brojac_ispita);
			for (int j = 0; j<i->brojac_prijavljenih; j++)
			{
				Osoba s = i->prijave[j]->student;
				Datum* dP = i.prijave[j].datum_prijave;
				Datum* dO = i.prijave[j].datum_odjave;
				info(&s);
				cout << " Datum prijave: ";
				info(dP);
				cout << " Datum odjave: ";
				info(dO);
				cout << endl;
			}
		}
		if (x == 4)
		{
			Ispit& i = odaberite_ispit(ispiti, brojac_ispita);
			PrijavaZaIspit novaP;
			novaP.student = odaberite_osobu(studenti, max_s);
			novaP.datum_prijave = ucitaj_datum();
			i.prijave[i.brojac_prijavljenih++] = novaP;
		}
		if (x == 5)
		{
			Ispit& i = odaberite_ispit(ispiti, brojac_ispita);
			for (int j = 0; j<i.brojac_prijavljenih; j++)
			{
				info(i.prijave[j].student);
				cout << "Unesite ocjenu sa ispita: ";
				cin >> i.prijave[j].ocjena;
			}
		}
	} while (x != 0);


}


