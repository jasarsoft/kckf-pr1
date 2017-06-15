#include <iostream>

using namespace std;

int Suma(int);

int main(void)
{
	int u = 0;
	int const min = 1000; //zbog boodova :)
	int const max = 9999;

	for (int i = min; i <= max; i++)
	{
		//moze i da se ispisuje suma u poruci
		//int s = Suma(i); //zog optimizacije
		//if (i % s == 0){ cout << "... << s << ; u++;}
		if (i % Suma(i) == 0)
		{
			cout << "Broj " << i << " je djeljiv sa svojm sumom!\n";
			u++;
		}
	}

	cout << "Ukupno ima " << u << " brojeva djeljivi sa svojm sumom.\n";

	system("pause");
	return 0;
}

int Suma(int broj)
{
	int sum = 0;

	do
	{
		sum += broj % 10;
		broj /= 10;
	} while (broj > 0);

	return sum;
}