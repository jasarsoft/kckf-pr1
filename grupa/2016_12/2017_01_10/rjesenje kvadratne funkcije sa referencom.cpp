#include <iostream>
using namespace std;
#include "C:\Users\Adil Joldic\OneDrive\kckf pr1\shared\zadaci za 2017_01_10\funkcije1.h"

bool rjesenje(float a, float b, float c, float &x1, float &x2)
{
	float D = b*b - 4 * a*c;
	if (D < 0)
		return false;
	else
	{
		x1 = (-b + sqrt(D)) / 2 * a;
		x2 = (-b - sqrt(D)) / 2 * a;
	/*	cout << "Rjesešenje x1 je " << x1 << endl;
		cout << "Rjesešenje x2 je " << x2 << endl;*/
		return true;
	}
}


void main()
{
	float a, b, c;
	float x1;
	float x2;
	do
	{
		cout << "Unesite a, b i c \n";
		cin >> a >> b >> c;
	}
	while (!rjesenje(a, b, c, x1, x2));
		
	cout << "Rješenje x1 " << x1 << endl;
	cout << "Rješenje x2 " << x2 << endl;
}
