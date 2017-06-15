#include <iostream>

using namespace std;

bool DjeljivSaX(int broj, int x){
	return broj % x;
}

void Message(int n, int broj) {
	cout << "Broj " << n << " je djeljiv sa " << broj << endl;
}

int main(void) {

	int n;
	int index = 0;

	cout << "Unesi broj n: "; cin >> n;


	for (int i = 2; i <= 10; i++) {
		if (DjeljivSaX(n, i)) {
			index++;
			Message(n, i);
		}
	}

	//if (DjeljivSaX(n, 2)) {
	//	index++;
	//	Message(n, 2); //cout << "Broj " << n << " je djeljiv sa 2\n";
	//}
	//if (DjeljivSaX(n, 3)) {
	//	index++;
	//	Message(n, 3); //cout << "Broj " << n << " je djeljiv sa 3\n";
	//}
	//if (DjeljivSaX(n, 6)) {
	//	index++;
	//	Message(n, 6); //cout << "Broj " << n << " je djeljiv sa 6\n";
	//}
	//if (DjeljivSaX(n, 9)) {
	//	index++;
	//	Message(n, 6); //cout << "Broj " << n << " je djeljiv sa 9\n";
	//}

	cout << "Broj " << n << "je djeljiv sa ukupno puta: " << index << endl;
	system("pause");
	return 0;
}