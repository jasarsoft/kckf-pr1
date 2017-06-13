#include <iostream>
#include <atomic>
#include <iomanip>
using namespace std;

void ispisi_ako_je_prost(int u1)
{
	int b = 0;
	for(int i=2;i<=u1/2;i++)
	{
		if (u1 % i == 0)
		{
			b++;
			break;
		}
	}
	if (b == 0)
		cout << u1 << " je prost broj " << endl;
}

void ispisi_sve_proste()
{
	int m;
	cout << "m = ";
	cin >> m;

	int n;
	cout << "n = ";
	cin >> n;

	for (int i=m; i<=n; i++)
	{
		ispisi_ako_je_prost(i);
	}
}



void main()
{
	cout << "Koliko puta želiš ponoviti program" << endl;
	int x;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cout << "========" << i+1 << "===============" << endl;
		ispisi_sve_proste();
	}
}
