#include <iostream>
using namespace std;

void main()
{
	int x, y;
	cout << "Unesite x: ";
	cin >> x;
	
	
	bool b1 = (x > 0);
	bool b2 = (x % 2 == 1);
	bool b3 = !(x >= 100 && x <= 999);
	bool b4 = (x % 7 != 0);
	bool b5 = (x == 114);
	bool b6 = (x >= -99 && x<=-33);
	bool b7 = (x % 19 == 0);

	if (b5 || b6 || b7)
	{
		cout << "Broj je prihvaæen" << endl;
	}
	else
	{
		if (b1 && b2 && b3  && b4)
		{
			cout << "Broj je prihvaæen" << endl;
		}
		else
		{
			cout << "Broj je prihvaæen" << endl;
		}
	}
}