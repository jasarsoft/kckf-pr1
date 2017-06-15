#include<iostream>
using namespace std;

int ZbirKubova(int m, int n)
{
	int s = 0;
	for (int i = m; i < n +1; i++)
	{
		s = s + i*i*i;
	}
	return s;
}

void main()
{
	int m, n;
	float x;
	cin >> m >> n >> x;

	float z = ZbirKubova(m, n) / (x*x);
}