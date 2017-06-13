#include <iostream>
using namespace std;

void zamjena(int N[], int i, int j)
{
	int t;
	t = N[i];
	N[i] = N[j];
	N[j] = t;

	//niz se šalje uvijek po referenci
}

void main()
{
	int N[5] = { 5, 9, 1, 8, 9 };

	zamjena(N, 0, 1);

	cout <<"N[0] = " << N[0] << endl; //9
	cout <<"N[1] = " << N[1] << endl; //5
}