#include <iostream>
using namespace std;
#include <fstream>

void ucitaj(int M[][4], int v)
{
	ifstream f("Podaci.txt");
	//ovdje se pristupa fajlu

	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < v; j++)
		{
			f >> M[i][j];
		}
	}
	f.close();
}

float prosjek(int M[][4], int v)
{
	int s = 0;
	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < v; j++)
		{
			s += M[i][j];
		}
	}
	float p = (float)s / (v*v);
	return p;
}

void ispis(int M[][4], int v)
{
	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < v; j++)
		{
			cout << M[i][j] << "-";
		}
		cout << endl;
	}
}

int broj_primljenih_poruka(int M[][4], int v, int x)
{
	int s = 0;
	for (int i = 0; i < v; i++)
	{
		s += M[i][x];
	}
	return s;
}
int broj_primljenih_poruka(int M[][4], int v, int x)
{
	int s = 0;
	for (int j = 0; j < v; j++)
	{
		s += M[x][j];
	}
	return s;
}

void main()
{
	const int v = 4;
	int M[v][v];

	ucitaj(M, v);
	cout << "================" << endl;

	float p = prosjek(M, v);
	cout << "Prosjecna vrijednost " << p << endl;

	ispis(M, v);

}
