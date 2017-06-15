#include <iostream>
using namespace std;

void f1(int u1, int u2)
{
	int suma1 = 0;
	int suma2 = 0;

	for (int i = u1; i<=u2; i++)
	{
		if (i % 2 == 0)
		{
			suma1 = suma1 + i;
		}
		else
		{
			suma2 = suma2 + i*i;
		}
	}
	cout << "Brojac djeljivih brojeva sa " << x << " je " << b << std::endl;
}

void main()
{
	int m, n;
	cin >> m >> n;
	f1(m, n);
}