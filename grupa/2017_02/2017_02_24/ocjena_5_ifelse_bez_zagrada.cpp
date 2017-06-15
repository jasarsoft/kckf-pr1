#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	int ocj;
	cout << "Unesite ocj: ";
	cin >> ocj;

	if (ocj == 1)
		cout << "Nedovoljno"<<endl;
	else if (ocj == 2)
		cout << "Zadovoljava" << endl;
	else if (ocj == 3)
		cout << "dobar" << endl;
	else if (ocj == 4)
		cout << "vrlo dobar" << endl;
	else if (ocj == 5)
		cout << "odlièan" << endl;
	else 	
		cout << "To nije ocjena" << endl;
}