#include <iostream>

using namespace std;


void main(void)
{
	float broj1, broj2;

	broj1 = 7.3;
	
	float* p;
	p = &broj1;
	cout << *p << endl;

	p = &broj2;
	*p = 5.5;
	cout << *p<<endl;
	cout << &broj1 << endl;
	system("pause");
}


























//float sr_vrij(float x, float y, float z)
//{
//	return (x + y + z) / 3.0;
//}
//
//int suma_parnih_brojeva(int x, int y)
//{
//	int sum = 0;
//
//	for (int i = x; i <= y; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += i;
//		}
//	}
//
//	return sum;
//}
//
//float max(float x, float y)
//{
//	if (x < y) return y;
//		
//	return x;
//}
//
//float min(float x, float x)
