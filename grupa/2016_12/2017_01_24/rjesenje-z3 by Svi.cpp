#include<iostream>
using namespace std;
int dani(int m, int g)
{
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		if (g % 4 == 0 && g % 400 != 0)
			return 29;
		else return 28;
	default:
		break;
	}
}
void main()
{
	int g,m;
	cout << "unesi  m: ";
	cin >> m;

	cout << "unesi  g: ";
	cin >> g;

	cout << dani(m, g);
	system("pause>0");
}