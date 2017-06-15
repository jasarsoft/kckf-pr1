#include<iostream>
using namespace std;

int ZbirKubova(int m, int n)
{
	int s = 0;
	for (int i = m; i < n + 1; i++)
	{
		s = s + i*i*i;
	}
	return s;
}

void main()
{
	char p;
	int m, n;
	do {
		cout << "m i n: " << endl;
		cin >> m >> n;
	} while ( m > n);

	float x;
	cout << "x = ";
	cin >> x;

	float z = ZbirKubova(m, n) / (x*x);
	cout << " z = " << z << endl;

}