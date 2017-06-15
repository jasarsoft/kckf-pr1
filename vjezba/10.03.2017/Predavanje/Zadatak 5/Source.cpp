#include <iostream>

using namespace std;

bool ProstBroj(int x) {
	int mid = x / 2;
	
	for (int i = 2; i < mid; i++) {
		if (x % i == 0) return false;
	}

	return true;
}

int main(void) {

	int x, y;

	cout << "Unesi broj x: "; cin >> x;
	cout << "Unesi broj y: "; cin >> y;
	cout << "=============\n";
	
	for (int i = x; i <= y; i++) {
		if (ProstBroj(x))
			cout << "Broj " << i << " je prost.\n";
		else
			cout << "Broj " << i << " NIJE prost.\n";
	}

	system("pause");
	return 0;
}