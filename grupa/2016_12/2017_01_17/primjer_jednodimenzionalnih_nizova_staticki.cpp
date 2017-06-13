#include <iostream>
using namespace std;
const int v = 15;
void ucitajNiz(int b[])
{
	for (int i = 0; i < v; i++)
	{
		cout << "Unesite " << i + 1 << ": ";
		cin >> b[i];
	}
}

void dupliraj(int b[])
{
	for (int i = 0; i < v; i++)
	{
		b[i] = b[i] * 2;
	}
}

void ispis(int b[])
{
	for (int i = 0; i < v; i++)
	{
		cout << "broj " << i << ": ";
		cout << b[i];
	}
}

float prosjek(int b[])
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
	int b[v]; 
	ucitajNiz(b);
	dupliraj(b);
	ispis(b);
	float p  = prosjek(b);
	cout << "Prosjek je: " << p << endl;
}
