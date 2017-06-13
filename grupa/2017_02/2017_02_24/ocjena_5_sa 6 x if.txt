#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	int ocj;
	cout << "Unesite ocj: ";
	cin >> ocj;

	bool o1 = ocj == 1;
	bool o2 = ocj == 2;
	bool o3 = ocj == 3;
	bool o4 = ocj == 4;
	bool o5 = ocj == 5;

	if (o1)
		cout << "Nedovoljno"<<endl;
	if (o2)
		cout << "Zadovoljava" << endl;
	if (o3)
		cout << "dobar" << endl;
	if (o4)
		cout << "vrlo dobar" << endl;
	if (o5)
		cout << "odlièan" << endl;

	if(o1 || o2 || o3 || o4 || o5)
		cout << "Ovo je ocjena" << endl;

	if (!(o1 || o2 || o3 || o4 || o5))
		cout << "Ovo nije ocjena" << endl;

	if (!o1 && !o2 && !o3 && !o4 && !o5)
		cout << "Ovo nije ocjena" << endl;
}