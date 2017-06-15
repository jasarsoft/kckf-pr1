#include<iostream>
using namespace std;

int funkcija(int x)
{
	int s = 0;
	int b = 0;
	while (x>0)
	{
		int z = x % 10;

		if (b % 2 == 0)
		{
			s = s + z;
		}
		b++;
	
		x = x / 10;
	}
	return s;

}

void main()
{
	int x;
	cin >> x;
	int q = funkcija(x);

	cout << q << endl;
}
