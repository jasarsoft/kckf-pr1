#include <iostream>

using namespace std;

int faktorijal(int);
int binomni_koeficijent(int, int);

int main(void)
{
	int m, n;
	cout << "Unesite m: "; cin >> m;
	cout << "Unesite n: "; cin >> n;

	//ako je potrebno
	if (n <= m)
	{
		cout << "Broj M mora biti veci od N!\n";
		return 1;
	}

	if (m == 0 || n == 0)
	{
		cout << "Broj M i N moraj biti razliciti od nule!\n";
		return 2;
	}

	cout << "M nad N je: " << binomni_koeficijent(m, n) << endl;

	system("pause");
	return 0;
}


int faktorijal(int f)
{
	if (f <= 0) return 0;
	
	int value = 1;
	for (int i = 2; i <= f; i++)
	{
		value *= i;
	}

	return value;
}

int binomni_koeficijent(int m, int n)
{
	return (faktorijal(m) / (faktorijal(n) * faktorijal(m - n)));
}