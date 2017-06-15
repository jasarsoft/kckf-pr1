#include<iostream>
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

	int* p = a;

	for (int i = 0; i < 5; i++)
	{
		cout << p + i << endl;
	}

	cout << (p + 4) - (p + 1) << endl;


	system("pause");
	return 0;
}