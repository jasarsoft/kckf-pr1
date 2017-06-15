#include <iostream>
using namespace std;

int main(void)
{
	int a[5] =
	{
		201,
		202,
		203,
		204,
		205
	};

	int* p1 = &a[0];
	int* p2 = &a[1];
	int* p3 = &a[2];
	int* p4 = &a[3];
	int* p5 = &a[4];

	for (int i = 0; i < 5; i++)
	{
		cout << *p1 << endl;
	}

	system("pause");
	return 0;
}