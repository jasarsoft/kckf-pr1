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
	int s1 = 0;
	int s2 = 0;
	int i = a;
	while(i <= b)
	{
		if(i%2 == 0)
		{
			s1 = s1 + i*i;
		}
		else
		{
			s2 = s2 + i*i*i;
		}
		i++;
	}
	
}


