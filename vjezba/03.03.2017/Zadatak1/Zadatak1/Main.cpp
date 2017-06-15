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

	int a;
	cout << "Unesite broj: "; cin >> a;

	if (a <= 0)
	{
		cout << "Broj mora biti veci od 0!";
		return 1;
	}

	if (ProstBroj(a))
		cout << "Bro je prost!";
	else
		cout << "Broj nije prost!";

	system("pause");

	return 0;
}