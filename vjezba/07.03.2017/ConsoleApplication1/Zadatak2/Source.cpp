#include <iostream>

using namespace std;

int main(void) {
	int m, n;
	int suma = 0;

	cout << "M: "; cin >> m;
	cout << "N: "; cin >> n;

	for (int i = m; i <= n; i++)
	{
		suma += i;
	}

	cout << "Suma: " << suma/(n-m+1);

	system("pause");
	return 0;
}