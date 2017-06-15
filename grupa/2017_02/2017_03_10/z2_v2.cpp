#include <iostream>
using namespace std;

void main()
{
	cout << "Koliko unosa?";
	int x;
	cin >> x;
	int max;

	for (int i = 0; i < x; i++)
	{
		cout << i + 1 << ": ";
		int c;
		cin >> c;

		if (i==0)
		{
			max = c;
		}
		else
		{
			if (c > max)
				max = c;
		}
	}


	cout << "max = " << max << endl;
}