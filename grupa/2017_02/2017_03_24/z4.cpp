#include <iostream>
using namespace std;

//•	f1(x) =

float f1(float x)
{
	return  0.5*x*x + 5;
}
float f2(float x)
{
	return  -0.5 *x + 3;
}


void main()
{
	for (int y = -20; y <= 20; y++)
	{
		for (int x = -10; x <= 10; x++)
		{
			if (f1(x) == y || f2(x) == y)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
