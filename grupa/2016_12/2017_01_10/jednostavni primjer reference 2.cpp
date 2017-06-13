#include <iostream>
using namespace std;

void f(int& b)
{
	b++;
}

void main()
{
	int a = 5;
	f(a);
	cout << "a = " << a << endl;
}
