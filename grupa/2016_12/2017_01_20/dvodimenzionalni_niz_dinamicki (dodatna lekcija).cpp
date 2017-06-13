#include <iostream>
using namespace std;
#include <fstream>

void ucitaj(int** M, int v)
{
	ifstream f("Podaci.txt");
	//ovdje se pristupa fajlu

	for (int i = 0; i < v; i++)
	{
		M[i] = new int[v];
		for (int j = 0; j < v; j++)
		{
			f >> M[i][j];
		}
	}
	f.close();
}

float prosjek(int** M, int v)
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

void ispis(int** M, int v)
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

void main()
{
	int v = 6;
	int** M= new int*[v];

	ucitaj(M, v);
	cout << "================" << endl;

	float p = prosjek(M, v);
	cout << "Prosjecna vrijednost " << p << endl;

	ispis(M, v);

}
