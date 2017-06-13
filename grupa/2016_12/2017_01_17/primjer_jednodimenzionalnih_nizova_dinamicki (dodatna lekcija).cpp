#include <iostream>
using namespace std;

void ucitajNiz(int* b, int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << "Unesite " << i + 1 << ": ";
		cin >> b[i];
	}
}

void dupliraj(int* b, int v)
{
	for (int i = 0; i < v; i++)
	{
		b[i] = b[i] * 2;
	}
}

void ispis(int* b, int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << "broj " << i << ": ";
		cout << b[i];
	}
}

float prosjek(int* b, int v)
{
	int s = 0;
	for (int i = 0; i < v; i++)
	{
		s += b[i];
	}

	return s / v;
}
void main()
{
	int v = 15;
	int* b=new int[v];
	ucitajNiz(b, v);
	dupliraj(b, v);
	ispis(b, v);
	float p = prosjek(b, v);
	cout << "Prosjek je: " << p << endl;
	delete[] b;
}
