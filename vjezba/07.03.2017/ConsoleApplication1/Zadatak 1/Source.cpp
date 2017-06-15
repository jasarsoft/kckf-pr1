#include <iostream>

using namespace std;

int main(void) {

	int godina;

	const int max = 45;
	const int min = 15;
	const int trenutna = 2017;

	do {
		cout << "Unesite godinu: "; cin >> godina;
		if (trenutna - godina > max || trenutna - godina < min)
		{
			cout << "Pogresna godina\n";
		}

	} while (trenutna - godina > max || trenutna - godina < min);

	cout << "Godine: " << trenutna - godina << endl;

	return 0;
}