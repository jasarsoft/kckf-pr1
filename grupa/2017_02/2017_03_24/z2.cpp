#include <iostream>
using namespace std;

void funkcija(int x )
{
	int s = 0;
	while(x>0)
	{
		int z = x % 10;
		cout << z << endl;
		x = x / 10;
		s = s + z;;
	}
	cout << "s = " << s << endl;;
}

void main()
{
	int x;
	cin >> x;
	funkcija(x);
}
