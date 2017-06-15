#include<iostream>
using namespace std;

int main(void)
{
	int A[99];

	for (int i = 0, j = 301; i < 99; i++, j++)
	{
		A[i] = j;
	}

	int* B[33];

	for (int i = 0, j=0; i < 99; i++, j += 3)
	{
		B[i] = &A[j];
		cout << "B[" << i <<"] = " << *(B + i) << endl;
	}



	system("pause");
	return 0;
}