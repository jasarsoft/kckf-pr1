#include <iostream>
using namespace std;

void racunaj(float a, float b, float& y1, float& y2, float& y3)
{
	y1 = a + b;
	y2 = a - b;
	y3 = a * b;
}
void main()
{
	float a;
	cout << "Unesite a: ";
	cin >> a;
	
	float b;
	cout << "Unesite b: ";
	cin >> b;

	float y1, y2, y3;
	racunaj(a, b, y1, y2, y3);
	cout << "y1 " << y1 << endl;
	cout << "y2 " << y2 << endl;
	cout << "y3 " << y3 << endl;
}
