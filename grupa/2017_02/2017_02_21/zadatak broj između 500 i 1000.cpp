#include <iostream>
using namespace std;

void main()
{
	int x, y;
	cout << "Unesite x: ";
	cin >> x;
	
	//rje�enje1
	if (x >= 500 && x <= 1000)
	{
		cout << "Uspje�no (DA)" << endl;
	}
	else
	{
		cout << "Nije uspje�no (NE)" << endl;
	}

	//rje�enje2
	if (x >= 500)
	{
		if (x <= 1000)
		{
			cout << "Uspje�no (DA)" << endl;
		}
		else
		{
			cout << "Nije uspje�no (NE)" << endl;
		}
	}
	else
	{
		cout << "Nije uspje�no (NE)" << endl;
	}

	
	//rje�enje3
	if (x >= 500 && x <= 1000)
	{
		cout << "Uspje�no (DA)" << endl;
	}

	if(x < 500 || x > 1000)
	{
		cout << "Nije uspje�no (NE)" << endl;
	}


	//rje�enje4
	if (x >= 500 && x <= 1000)
	{
		cout << "Uspje�no (DA)" << endl;
	}

	if ( !(x >= 500 && x <= 1000) )
	{
		cout << "Nije uspje�no (NE)" << endl;
	}


	//rje�enje5
	if (x < 500 || x > 1000)
	{
		cout << "Nije uspje�no (NE)" << endl;
	}
	else
	{
		cout << "Uspje�no (DA)" << endl;
	}



	//rje�enje2
	if (x < 500)
	{
		cout << "Nije uspje�no (NE)" << endl;
	}
	else
	{
		if (x > 1000)
		{
			cout << "Nije uspje�no (NE)" << endl;
		}
		else
		{
			cout << "Uspje�no (DA)" << endl;
		}
	}
}