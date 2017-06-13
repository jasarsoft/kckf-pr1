#include<iostream>
using namespace std;
int sifriraj(int a)
{
	int brojac = 0, gotovo=0;
	int niz[20];
	while (a > 0)
	{
		niz[brojac] = a % 10;
		if (niz[brojac] % 2 != 0)
		{
			niz[brojac] = 4;
		}
		brojac++;
		a /= 10;
	}
	int brojac1 = brojac;
	for (int i = brojac- 1; i >=0; i--)
	{
		gotovo += niz[i] * pow(10, brojac1-1);
		brojac1--;
		
	}
	return gotovo;
}
void main()
{
	int a;
	cout << "unesi neki broj" << endl;
	cin >> a;
	
cout <<	sifriraj(a);
	system("pause>0");
}