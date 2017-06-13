#include <iostream>
using namespace std;

void ucitajNiz(int b[], int v)
{
	cout << "====================" << endl;
	for (int i = 0; i < v; i++)
	{
		cout << "Unesite " << i + 1 << ": ";
		cin >> b[i];
	}
}



void ispis(int b[], int v)
{
	cout << "====================" << endl;
	for (int i = 0; i < v; i++)
	{
		cout << "broj " << i << ": ";
		cout << b[i]<<endl;
	}
}
int maxI(int b[], int s, int v)
{
	int maxV = b[s];
	int maxI = s;

	for (int i = s+1; i < v; i++)
	{
		int c = b[i];
		if (c > maxV)
		{
			maxV = c;
			maxI = i;
		}
	}
	return maxI;
}

void zamjena(int N[], int i, int j)
{
	int t;
	t = N[i];
	N[i] = N[j];
	N[j] = t;

	//niz se šalje uvijek po referenci
}


void sortiraj(int b[], int v)
{

	for (int i = 0; i < v; i++)
	{
		int mI;
		mI = maxI(b, i, v);
		zamjena(b, i, mI);
	}
	

}

void main()
{
	const int v = 5;
	int b[v];

	ucitajNiz(b, v);
	ispis(b, v);
	
	sortiraj(b, v);
	ispis(b, v);

	
}
