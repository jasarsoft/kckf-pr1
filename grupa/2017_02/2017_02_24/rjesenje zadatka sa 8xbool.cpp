#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	int a, b;
	cout << "Unesite broj a: ";
	cin >> a;

	cout << "Unesite broj b: ";
	cin >> b;

	bool x1 = (a > 5);
	bool x2 = (a % 19 != 0);
	bool x3 = !(a >=111 & a<555);
	bool x4 = (b != 0);
	bool x5 = (a > 3*b);

	bool uslovZaStandProc1 = x1 && x2 && x3 && x4 && x5;

	bool x6 = 13;
	bool x7 = (b>127 && b<= 255);
	bool x8 = (b==a);

	bool vip = x6 || x7 || x8;

	bool IzdajeSeViza = uslovZaStandProc1 || vip;

	int y;
	if (IzdajeSeViza)
	{
		y = a / b;
	
	}
	else
	{
		int c;
		cout << "Unesite c" << endl;
		cin >> c;
		y = a*b / sqrt(c);
	}
	
	cout << y << endl;
}