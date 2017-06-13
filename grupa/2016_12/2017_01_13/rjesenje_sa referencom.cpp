#include <iostream>
using namespace std;

void f1(float a, float& y)
{
	y= a*a;
}


void f2(float b, float c, float &y)
{
	y= b*c;
}

void f3(float r, float& y)
{
	y= r*r*3.14;
}

void main()
{
	int unos;
	do
	{
		
		cout << "1. Racunanje povrsine kvadrata" << endl;
		cout << "2. Racunanje povrsine pravougaonika" << endl;
		cout << "3. Racunanje povrsine kruga" << endl;
		cout << "0. Izlaz" << endl;
		cin >> unos;

		if (unos == 1)
		{
			float y;
			cout << "unesite duzina kvadrata" << endl;
			float a;
			cin >> a;
			f1(a, y);
			cout << "Povrsina kvadrata " << y << endl;
		}
		if (unos == 2)
		{
			float y;
			cout << "unesite duzina i sirinu pravougaonika" << endl;
			float b, c;
			cin >> b >> c;
			f2(b, c, y);
			cout << "Povrsina pravougaonika " << y << endl;
		}
		if (unos == 3)
		{
			cout << "unesite poluprecnik kruga" << endl;
			float r;
			cin >> r;
			float y;
			f3(r, y);
			cout << "Povrsina kruga " << y << endl;
		}
		system("pause");
		system("cls");
	} while (unos != 0);
	
}
