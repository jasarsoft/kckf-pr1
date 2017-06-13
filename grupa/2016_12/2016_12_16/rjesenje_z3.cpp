#include <iostream>
#include <atomic>
#include <iomanip>
using namespace std;

int faktorial(int x)
{
	int p = 1;
	for (int i=1;i<=x;i++)
	{
		p = p * i;
	}
	return p;
}

int sumaDoX(int x)
{
	int s = 0;
	for (int i = 0; i<x; i++)
	{
		s = s + i;
	}
	return s;
}


void main()
{
	int a;
	cout << "a = ";
	cin >> a;
	int b;
	cout << "b = ";
	cin >> b;

	int s = 0;

	for (int i=a; i<=b;i++)
	{
		int cc = faktorial(i);
		cout << i << "! = " << cc << endl;
		s = s + cc;
	}

	cout << "S = " << s << endl;
}