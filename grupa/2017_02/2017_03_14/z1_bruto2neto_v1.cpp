#include <iostream>
using namespace std;

float bruto2neto(float b, int d, int u, float t)
{
	//t procenat u decimalnom obliku 0.15 = 15%
	float n;
	float p = 1 - t + d * 0.05 + u * 0.04;
	n = b * p;
	return n;
}

void main()
{
	int o;
	do
	{
		system("cls");
		cout << "1. Mostar (15%)";
		cout << "2. Banja Luka (17%)";
		cout << "3. Neum (20%)";
		cout << "4. Sarajevo (16%)";
		cin >> o;
	} while (o<1 || o>4);

	float t;
	switch (o)
	{
	case 1:
		t = 0.15;
		break;
	case 2:
		t = 0.17;
		break;
	case 3:
		t = 0.20; 
		break;
	case 4:
		t = 0.16;
	}

	cout << "Unesite iznos bruto plate ";
	float b;
	cin >> b;

	cout << "Broj djece ";
	int d;
	cin >> d;

	cout << "Broj udrzanih osoba ";
	int u;
	cin >> u;

	float n = bruto2neto(b, d, u, t);
	cout << "Vaša neto plata iznosi " << n << endl;
}