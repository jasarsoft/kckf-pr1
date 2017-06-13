#include <iostream>
using namespace std;
float sr_vrij(int, int);
float sr_vrij(float, float);
float sr_vrij(float, float, float);
int suma_parnih_brojeva(int, int);  
float max(float, float);   
float min(float, float);
float hipotenuza(float, float);     
float kateta(float, float);   
float sumakvadrata(int, int);
int fakt(int);

int suma_faktorijela(int x, int y)
{
	//za x = 2 i y = 6
	//za x = 6 i y = 2

	// 2! + 3! + 4! + 5! + 6!
	int s = 0;
	//izraèunati
	
	int veci = max(x, y);

	for (int i = min(x, y); i <= veci; i++)
	{
		s = s + fakt(i);
	}
	
	return s;
}

float nad(int prvi, int drugi)
{
	int m = max(prvi, drugi);
	int n = min(prvi, drugi);

	float brojnik = fakt(m);
	float nazivnik = fakt(n) * fakt(m - n);
	return brojnik / nazivnik;
}

int fakt(int x)
{
	int p = 1;
	for (int i = 1; i <= x; i++)
	{
		p = p*i;
	}
	return p;
}

float sumakvadrata(int x, int y)
{
	float s = 0;
	for (int i = x; i <= y; i++)
	{
		s += i*i;
	}
	return s;
}

float sr_vrij(float x, float y)
{
	return (x + y) / 2;
}
float sr_vrij(float x, float y, float z)
{
	float r = (x + y + z)/3;
	return r;
}

void uvecaj(int& b)
{
	b++;
}

void kvadriraj(int& b)
{
	b = b*b;
}

/*
npr.
x = 5
y = 15

6, 8, 10, 12, 14
*/
int suma_parnih_brojeva(int x, int y)
{
	int s = 0;

	for (int i = x; i <= y; i++)
	{
		if (i % 2 == 0)
		{
			s = s + i;
		}
	}
	return s;
}

float max(float x, float y)
{
	if (x > y)
		return x;
	else
		return y;
}

float min(float x, float y)
{
	if (x < y)
		return x;
	else
		return y;
}

float max2(float x, float y)
{
	int max;
	if (x > y)
		max = x;
	else
		max = y;

	return max;
}

float max3(float x, float y)
{
	int max;
	max = (x > y) ? x : y;
	return max;
}

float hipotenuza(float a, float b)
{
	float c;
	c = sqrt(a*a + b*b);
	return c;
}

float kateta(float c, float a)
{
	float b;
	b = sqrt(c*c - a*a);
	return b;
}
