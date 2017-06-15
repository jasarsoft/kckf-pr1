#include <iostream>
using namespace std;

void f(int x)
{
	float k = sqrt(x);
	int kC = k;
	if (k == kC)
		cout << x << endl;
}
//x = 9      k =3    kC = 3    => „DA“
//x = 10     k =3.334    kC = 3    => „NE“  

void main()
{
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		f(i);
	}
}
