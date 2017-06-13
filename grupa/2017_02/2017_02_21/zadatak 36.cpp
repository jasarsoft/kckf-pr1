#include <iostream>
using namespace std;
#include <math.h>

void main()
{
	float x, y;
	cout << "Unesite x: ";
	cin >> x;

	if (x > 0)
	{
             y = sqrt(x+1);
       }
	else
	{
		cout << "Upozorenje: Broj nije pozitivan" << endl;

		if (x == 0)
		{
			int z;
			cout << "Unesite z: ";
			cin >> z;
			y = z * sqrt(2);
		}
		else
		{
			y = x * x;
		}
	}

	cout << "y = " << y << endl;
}
