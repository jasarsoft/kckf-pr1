#include <iostream>

using namespace std;

int main(void) {
	int broj = 0;
	int index = 0;
	int max = 0;

	cout << "Broj ponavljanja: "; cin >> broj;
	/*do {
		int temp;
		cout << "Unesite broj: "; cin >> temp;
		if (temp > max)
			max = temp;

		index++;
	} while (index < broj);*/


	for (int i = 0; i < broj; i++)
	{
		int temp;
		cout << "Unesite broj: "; cin >> temp;
		if (temp > max) max = temp;
	}

	cout << "Najveci broj: " << max;

	system("pause");
	return 0;
}