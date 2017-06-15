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

	for (int i = 0; i < 5; i++)
	{
		cout << &a[i] << endl;
	}


	system("pause");
	return 0;
}