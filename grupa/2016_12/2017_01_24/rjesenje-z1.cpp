#include <iostream>
using namespace std;
#include <fstream>

int suma(int prirodanBroj)
{
	int x = prirodanBroj;
	int i = 1;
	int s = 0;
	while (x > 0)
	{
		int y = x % 10;
		
		if (i % 2 == 0)
			s = s + y;
		i++;
		x = x / 10;
	}
	return s;
}

void main()
{
	int x;
	cout << "Unesite x " << endl;
	cin >> x;

	cout << "Rezultat je " << suma(x) << endl;
}
