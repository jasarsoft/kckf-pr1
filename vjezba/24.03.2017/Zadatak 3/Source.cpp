#include <iostream>

using namespace std;

float f1(float x)
{
	return sin(x / 5) * 10;
}

bool DaLiDodatiTacku(int x, int y)
{
	return (f1(x) == y);
}

void main(void)
{
	for (int x = -20; x <= 20; x++)
	{
		for (int y = -20; y <= 20; y++)
		{
			if (f1(y) == x)
				cout << "*";
			else
				cout << " ";
		}

		cout << endl;
	}
}

