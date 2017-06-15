#include <iostream>

using namespace std;

int funkcija(int x)
{
	int q = 0;
	
	while (x > 0)
	{
		int z = x % 10;
		z++;
		if (x == 10) x = 0;
		q = q * 10 + z;
		x = x / 10;
	}

	return q;
}

void main()
{
	int x;
	cin >> x;
	funkcija(x);
	system("pause");
}