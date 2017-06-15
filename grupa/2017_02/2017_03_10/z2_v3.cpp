#include <iostream>
using namespace std;

void main()
{
	cout << "Koliko unosa?";
	int x;
	cin >> x;
	int max;

	cout << "1: ";
	cin >> max;

	for (int i = 1; i < x; i++)
	{
		cout << i + 1 << ": ";
		int c;
		cin >> c;

			if (c > max)
				max = c;
	}


	cout << "max = " << max << endl;
}