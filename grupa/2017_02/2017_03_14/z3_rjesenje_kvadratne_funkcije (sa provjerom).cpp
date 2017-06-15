#include <iostream>
using namespace std;

float f1(float a, float b, float c)
{
	float D = b*b - 4 * a*c;
	if(D<0 || a == 0)
	{
		cout << "Greška - nema rješenja " << endl;
		return 0;
	}
	else
	{
		float x = (-b + sqrt(D)) / (2 * a);
		return x;
	}
	
}

float f2(float a, float b, float c)
{
	float D = b*b - 4 * a*c;
	if (D<0 || a == 0)
	{
		cout << "Greška - nema rješenja " << endl;
		return 0;
	}
	else
	{
		float x = (-b - sqrt(D)) / (2 * a);
		return x;
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

	float x1 = f1(a, b, c);
	float x2 = f2(a, b, c);

	cout << "Rješenje kvadratne funkcije x1 je " << x1 << endl;
	cout << "Rješenje kvadratne funkcije x2 je " << x2 << endl;

}