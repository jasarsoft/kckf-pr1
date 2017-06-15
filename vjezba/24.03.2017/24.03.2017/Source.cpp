#include <iostream>
#include <math.h>

using namespace std;

bool funkcija(float a, float b, float c, float& x1, float& x2)
{
	if (a == 0) return false;

	float d = b * b - 4 * a * c;
	if (d >= 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		
		return true;
	}

	return false;
}