#include <iostream>

using namespace std;

bool ProstBroj(int x)
{
	bool prost = true;

	for (int i = 2; i < x; i++)
	{
		if (!(x % i) && i != x)
			prost = false;
	}

	return prost;
}

int main(void) {

	int a, b;
	cout << "Unesite broj a: "; cin >> a;
	cout << "Unesite broj b: "; cin >> b;

	if (a <= 0 || b <= 0)
	{
		cout << "Broj mora biti veci od 0!";
		return 1;
	}

	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (ProstBroj(i))
			sum += i;
	}

	cout << "Suma je: " << sum << endl;
	system("pause");

	return 0;
}