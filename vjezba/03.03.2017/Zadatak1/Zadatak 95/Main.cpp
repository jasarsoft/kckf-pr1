#include <iostream>

using namespace std;

bool DjeljivBroj(int broj, int djeljenik)
{
	if (broj % djeljenik == 0)
		return true;
	
	return false;
}



int main(void) {
	int m, n, a, b;

	cout << "Unesite m:"; cin >> m;
	cout << "Unesite n:"; cin >> n;
	cout << "Unestie a:"; cin >> a;
	cout << "Unesite b:"; cin >> b;

	for (int i = m; i <= n; i++)
	{
		if (DjeljivBroj(i, a) || DjeljivBroj(i, b))
			cout << i << " ";
	}

	system("pause");
	return 0;
}