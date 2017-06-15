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
	int v = 20;
	int N[20];

	int* p = N;
	ucitaj(p, v);
	ispis(p, v);


	system("pause");
	return 0;
}