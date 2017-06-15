#include <iostream>
using namespace std;
void funkcija(float a, float b, float c, float& x1, float& x2, bool& isGreska)
{
	float D = b*b - 4 * a*c;

	if(a!=0 && D>=0)
	{
		x1 = -b + sqrt(D) / (2 * a);
		x2 = -b - sqrt(D) / (2 * a);
		isGreska = false;
	}
	else
	{
		isGreska = true;
	}
}
void main()
{
	float a, b, c, x1, x2;
	bool isGreska;
	cin >> a >> b >> c;
	funkcija(a, b, c, x1, x2, isGreska);
	if (isGreska)
		cout << "Greska, nema rješenja" << endl;
	else
		cout << x1 << ", " << x2 << endl;
}
