#include <iostream>
using namespace std;

void main()
{
	cout << "b = ";
	int b;
	cin >> b;

	int brojac = 0;
	for (int i=2;i<=b-1; i++)
	{
		if (b%i == 0)
			brojac++;
	}
	if (brojac == 0)
		cout << "prost broj"<<endl;
	else
		cout << "nije prost broj" << endl;

}