#include <iostream>
using namespace std;

void zamjena(int& x, int& y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

void main()
{

	int a = 5;
	int b = 7;

	zamjena(a, b);

	cout <<"a = " << a << endl;
	cout <<"b = " << b << endl;
}