#include <iostream>
using namespace std;

void f1(float a, float b, float c)
{
	float D = b*b - 4 * a*c;
	if(D<0 || a == 0)
	{
		cout << "Greška - nema rješenja " << endl;
	}
	else
	{
		float x1 = (-b + sqrt(D)) / (2 * a);
		cout << "Rješenje kvadratne funkcije x1 je " << x1 << endl;
	}
}

void f2(float a, float b, float c)
{
	float D = b*b - 4 * a*c;
	if (D<0 || a == 0)
	{
		cout << "Greška - nema rješenja " << endl;
	}
	else
	{
		float x2 = (-b - sqrt(D)) / (2 * a);
		cout << "Rješenje kvadratne funkcije x2 je " << x2 << endl;
	}
}

void main()
{
	float a, b, c;
	cout << "Unesite a (a != 0)" << endl;
	cin >> a;
	cout << "Unesite b " << endl;
	cin >> b;
	cout << "Unesite c " << endl;
	cin >> c;

	f1(a, b, c);
	f2(a, b, c);
}