#include <iostream>
#include <math.h>

using namespace std;

void main(void)
{
	float a, b;
	cin >> a >> b;

	float* p1 = &a;
	float* p2 = &b;

	float c1 = *p1 - *p2;
	cout <<"c1 = " << c1 << endl;

	float c2 = sin(*p1) - cos(*p2);
	cout << "c2 = " << c2 << endl;

	float c3 = *p2 * (*p1);
	cout << "c3 = " << c3 << endl;

	if (*p1 > *p2)
	{
		float c4 = (*p1) / (*p2);
		cout << "c4 = " << c4 << endl;
	}
	else
	{
		float c4 = (*p2) / (*p1);
		cout << "c4 = " << c4 << endl;
	}

	float c5 = pow((*p1), (*p2));
	cout << "c5 = " << c5 << endl;

	float c6 = pow(sqrt((*p1)), (*p2));
	cout << "c6 = " << c6 << endl;
}