#include <iostream>
using namespace std;

void main()
{
	int x, y;
	cout << "Unesite x: ";
	cin >> x;
	
	//rješenje1
	if (x >= 500 && x <= 1000)
	{
		cout << "Uspješno (DA)" << endl;
	}
	else
	{
		cout << "Nije uspješno (NE)" << endl;
	}

	//rješenje2
	if (x >= 500)
	{
		if (x <= 1000)
		{
			cout << "Uspješno (DA)" << endl;
		}
		else
		{
			cout << "Nije uspješno (NE)" << endl;
		}
	}
	else
	{
		cout << "Nije uspješno (NE)" << endl;
	}

	
	//rješenje3
	if (x >= 500 && x <= 1000)
	{
		cout << "Uspješno (DA)" << endl;
	}

	if(x < 500 || x > 1000)
	{
		cout << "Nije uspješno (NE)" << endl;
	}


	//rješenje4
	if (x >= 500 && x <= 1000)
	{
		cout << "Uspješno (DA)" << endl;
	}

	if ( !(x >= 500 && x <= 1000) )
	{
		cout << "Nije uspješno (NE)" << endl;
	}


	//rješenje5
	if (x < 500 || x > 1000)
	{
		cout << "Nije uspješno (NE)" << endl;
	}
	else
	{
		cout << "Uspješno (DA)" << endl;
	}



	//rješenje2
	if (x < 500)
	{
		cout << "Nije uspješno (NE)" << endl;
	}
	else
	{
		if (x > 1000)
		{
			cout << "Nije uspješno (NE)" << endl;
		}
		else
		{
			cout << "Uspješno (DA)" << endl;
		}
	}
}