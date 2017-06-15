#include <iostream>
using namespace std;

void main()
{
	cout << "Koliko unosa?";
	int x;
	cin >> x;
	int max = INT_MIN;

	for (int i = 0; i < x; i++)
	{
		cout << i + 1 << ": ";
		int c;
		cin >> c;

		if (c > max)
			max = c;
	}


	cout << "max = " << max << endl;
}