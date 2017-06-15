#include <iostream>

using namespace std;

bool ProstBroj(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) return false;
	}

	return true;
}

int main(void) {

	int n;

	cout << "Unesite broj: "; cin >> n;

	if (ProstBroj(n))
		cout << "Broj je prost!\n";
	else
		cout << "Broj nije prost!\n";

	system("pause");
	return 0;
}