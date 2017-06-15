#include<iostream>
using namespace std;

void ucitaj(int* p, int v)
{
	for (int i = 0; i < v; i++)
	{
		*(p + i) = i;
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
	int* N = new int[v];
	
	ucitaj(N, v);
	ispis(N, v);


	system("pause");
	return 0;
}