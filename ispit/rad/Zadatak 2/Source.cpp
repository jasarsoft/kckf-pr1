#include <iostream>

using namespace std;

void izracunaj(float, float, float, float &, float &, bool &);

int main(void)
{
	float a, b, c;
	cout << "Unesite a: "; cin >> a;
	cout << "Unesite b: "; cin >> b;
	cout << "Unesite c: "; cin >> c;

	bool greska;
	float x1, x2;
	
	izracunaj(a, b, c, x1, x2, greska);

	if (greska)
	{
		cout << "Poruka o gresci!";
	}
	else
	{
		cout << "Rjesenje x1: " << x1 << endl;
		cout << "Rjesenje x2: " << x2 << endl;
	}
	
	system("pause");
	return 0;
}


void izracunaj(float a, float b, float c, float& x1, float& x2, bool& greska)
{
	if (a == 0.0)
	{
		greska = true;
		return;
	}

	float d = (b * b) - 4 * a * c; //moze korisenjem funckcije pow(b, 2); //d = b*b -4*a*c;

	if (d < 0)
	{
		greska = true;
		return;
	}

	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	greska = false;
}
