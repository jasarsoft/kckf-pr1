#include <iostream>
using namespace std;

bool JelProst(int b)
{
	int brojac = 0;
	for (int i = 2; i <= b - 1; i++)
	{
		if (b%i == 0)
			brojac++;
	}
	if (brojac == 0)
		return true;
	else
		return false;
}

void main()
{
	int x, y;
	cin >> x >> y;
	for (int b=x;b<=y;b++)
	{
		if (JelProst(b))
			cout << "prost broj" << endl;
		else
			cout << "nije prost broj" << endl;
	}

}