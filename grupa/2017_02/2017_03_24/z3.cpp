#include <iostream>
using namespace std;

int funkcija(int x )
{
	int q = 0;
	while(x>0)
	{
		int z = x % 10;
		z++;
		if (z == 10)
			z = 0;

		q = 10 * q + z;

		//cout << z << endl;
		x = x / 10;
	}
	return q;

}

void main()
{
	int x;
	cin >> x;
	int q = funkcija(x);

	cout << q << endl;
}
