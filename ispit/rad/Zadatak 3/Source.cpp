#include <iostream>

using namespace std;

bool IsProst(int);
void ispis_prosti(int, int);

int main(void)
{
	int m, n;

	cout << "Unesite broj m: "; cin >> m;
	cout << "Unesite broj n: "; cin >> n;

	if (m < n)
		ispis_prosti(m, n);
	else
		ispis_prosti(n, m);

	system("pause");
	return 0;
}

bool IsProst(int x)
{
	int max = x / 2; //zbog brzine :)

	for (int i = 2; i <= max; i++)
	{
		if (x % i == 0) return false;
	}

	return true;
}

void ispis_prosti(int m, int n)
{
	for (int i = m; i <= n; i++)
	{
		if (IsProst(i))
			cout << "Broj " << i << " je prost!\n";
		else
			cout << "Broj " << i << " nije prost!\n";
	}
}