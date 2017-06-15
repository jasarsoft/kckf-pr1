#include <iostream>
using namespace std;

void f(int m, int n)
{
	for (int x = m; x <= n; x++)
	{
		float k = sqrt(x);
		int kC = k;
		if (k == kC)
		{
			cout << x <<" = " << k << " * " << k << endl;
		}
	}
}

void main()
{
	int m, n;
	cin >> m >> n;

}
