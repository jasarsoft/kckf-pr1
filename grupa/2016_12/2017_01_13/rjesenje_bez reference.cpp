#include <iostream>
using namespace std;

float f1(float a)
{
	return a*a;
}


float f2(float b, float c)
{
	return b*c;
}

float f3(float r)
{
	return r*r*3.14;
}

void main()
{
	int unos;
	do
	{
		
		cout << "1. Racunanje površine kvadrata" << endl;
		cout << "2. Racunanje površine pravougaonika" << endl;
		cout << "3. Racunanje površine kruga" << endl;
		cout << "0. Izlaz" << endl;
		cin >> unos;

		if (unos == 1)
		{
			cout << "unesite duzina kvadrata" << endl;
			float a;
			cin >> a;
			cout << "Povrsina kvadrata " << f1(a) << endl;
		}
		if (unos == 2)
		{
			cout << "unesite duzina i sirinu pravougaonika" << endl;
			float b, c;
			cin >> b >> c;
			cout << "Površina pravougaonika " << f2(b, c) << endl;
		}
		if (unos == 3)
		{
			cout << "unesite poluprecnik kruga" << endl;
			float r;
			cin >> r;
			cout << "Povrsina kruga " << f3(r) << endl;
		}
		system("pause");
		system("cls");
	} while (unos != 0);
	
}
