#include <iostream>
using namespace std;


void main()
{
	int a = 5;
	int& b = a;
	b++;
	cout << "a = " << a << endl;
}
