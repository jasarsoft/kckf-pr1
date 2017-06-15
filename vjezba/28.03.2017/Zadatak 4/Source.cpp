#include<iostream>
using namespace std;

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;

	int* B[100];
	
	B[0] = &a;
	B[1] = &b;
	B[2] = &c;

	cout << *(B[0]) << endl;
	cout << *(B[1]) << endl;
	cout << *(B[2]) << endl;

	system("pause");
	return 0;
}