#include <iostream>
using namespace std;

float sr_vrij(float, float, float); 
int suma_parnih_brojeva(int, int);  
float max(float, float);            
float hipotenuza(float, float);     
float kateta(float, float);         


void main()
{
	float a, b, c, y1;
	cout << "Unesite tri broja \n";
	cin >> a >> b >> c;
	y1 = sr_vrij(a, b, c);
	
		cout << "Aritmeticka sredina od tri unesena broja je " << y1 << endl;

	int m, n, y2;
	cout << "\nUnesite pocetak i kraj niza \n";
	cin >> m >> n;
	y2 = suma_parnih_brojeva(m, n);
		cout << "Suma parnih brojeva od " << m << " do " << n << " je " << y2 << endl;

	float q, w, y3;
	cout << "\nUnesite dva broja \n";
	cin >> q >> w;
	y3 = max(q, w);
		cout << "Veci broj od dva unesena: " << y3 << endl;

	float h, k1, k2;
	cout << "\nUnesite dvije katete jednakostranicnog trougla \n";
	cin >> k1 >> k2;
	h = hipotenuza(k1, k2);
		cout << "Hipotenuza: " << h << endl;

	float hi, ka1, ka2;
	cout << "\nUnesite hipetnuzu i katetu \n";
	cin >> hi >> ka1;
	ka2 = kateta(hi, ka1);
	cout << "Kateta: " << ka2 << endl;

}

float sr_vrij(float x, float y, float z)
{
	float r = (x + y + z)/3;
	return r;
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
