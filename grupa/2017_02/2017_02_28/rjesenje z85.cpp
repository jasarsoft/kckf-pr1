#include <iostream>
using namespace std;

void main()
{
	//Napravite program za raèunanje sume kvadrata brojeva 
	//koji su djeljivi sa 19 ili nisu djeljivi sa 17, od a do b. 
	int a;
	int b;
	cout << "Unesite a:";
	cin >> a;

	cout << "Unesite b:";
	cin >> b;
	int s = 0;
	int i = a;
	while(i < b)
	{
		bool prvi_uslov = (i % 19 == 0);
		bool drugi_uslov = (i % 17 != 0);
		if(prvi_uslov || drugi_uslov)
		{
			s = s + i*i;
		}
		i++;
	}
	
}


