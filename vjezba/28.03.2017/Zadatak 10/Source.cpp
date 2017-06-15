#include<iostream>
using namespace std;

void ucitaj(int* p, int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << "Niz " << i << ": ";
		cin >> *(p + i);
	}
}

void saberi(int* p, int* a, int* b, int v)
{
	for (int i = 0; i < v; i++)
	{
		*(p + i) = *(a + i) + *(b + i);
	}
}

void ispis(int* p, int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << *(p + i) << endl;
	}
}

int main(void)
{
	int v;

	cout << "Unesite velicinu niza:";
	cin >> v;
	int* A = new int[v];
	int* B = new int[v];
	int* C = new int[v];

	ucitaj(A, v);
	ucitaj(B, v);
	saberi(C, A, B, v);
	ispis(C, v);

	system("pause");
	return 0;
}