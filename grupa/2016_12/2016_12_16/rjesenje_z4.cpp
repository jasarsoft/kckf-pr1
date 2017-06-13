#include <iostream>
#include <atomic>
#include <iomanip>
using namespace std;

int f1(float x, float r)
{
	return sqrt(r*r - x*x) ;
}


void main()
{
	float r;
	cout << "Unesite r" << endl;
	cin >> r;

	int maxX = 20 ;
	int maxY = 20 ;
	
	for (int i=-maxY;i<= maxY;i++)
	{
		cout << setw(5) << i << ": ";
		for (int j = -maxX; j<= maxX; j++)
		{
			if (f1(j, r) == i)
				cout << "x ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << "     ";
	for (int i = -maxX; i <= maxX; i++)
	{
		cout << setw(2) << i;
	}
	cout << endl;
}