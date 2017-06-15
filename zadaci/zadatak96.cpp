/*
Zadatak 96:
Napravite program u kome će te, pomoću jedne funkcije,
ispisati sumu parnih brojeva i sumu kvadrata neparnih brojeva od m do n.
 funkciji main ćete od korisnika tražiti da unese cijeli broj m za početak niza i n za kraj niza.

Pomoć:
* u funkciji main ćemo izvršiti unos za m, n
* pozvat ćemo funkciju f1 i proslijediti, kao aktuelne parametre, vrijednosti m i n
* u funkciji f1 ćemo primiti parametre kao u1, u2 koji su tipa integer
* postaviti ćemo varijable suma1 i suma2 na nulu koje su tipa int,
* suma1 će zbrajati sve parne brojeve
* suma2 će zbrajati sve neparne brojeve
* izvršiti ćemo for-petlju sa brojačem i koji se mijenja od u1 do u2
* provjeriti ćemo da li je broj i paran, tj. da li je i djeljivo sa 2:
ako jeste: onda ćemo povećati suma1 za i
ako nije: onda ćemo povećati suma2 za i*i
* ispisati ćemo suma1 i suma2 na ekran
*/

#include <iostream>
using namespace std;

void f1(int u1, int u2)
{
	int suma1 = 0;
	int suma2 = 0;
	for (int i = u1; i < u2; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
			suma1 = suma1 + i;
		}
		else
		{
			cout << i << "*" << i << "=" << i*i << endl;
			suma2 = suma2 + i*i;
		}
	}
	cout << "suma1 iznosi " << suma1 << endl;
	cout << "suma2 iznosi " << suma2 << endl;

}

void main()
{
	int m;
	cout << "m = ";
	cin >> m;

		int n;
	cout << "n = ";
	cin >> n;

	f1(m, n);

}
/*
	Zadatak 96:
Napravite program u kome će te, pomoću jedne funkcije,
ispisati sumu parnih brojeva i sumu kvadrata neparnih brojeva od m do n.
U funkciji main ćete od korisnika tražiti da unese cijeli broj m za početak niza i n za kraj niza.
Pomoć:
* u funkciji main ćemo izvršiti unos za m, n
* pozvat ćemo funkciju f1 i proslijediti, kao aktuelne parametre, vrijednosti m i n
* u funkciji f1 ćemo primiti parametre kao u1, u2 koji su tipa integer
* postaviti ćemo varijable suma1 i suma2 na nulu koje su tipa int,
* suma1 će zbrajati sve parne brojeve
* suma2 će zbrajati sve neparne brojeve
* izvršiti ćemo for-petlju sa brojačem i koji se mijenja od u1 do u2
* provjeriti ćemo da li je broj i paran, tj. da li je i djeljivo sa 2:
ako jeste: onda ćemo povećati suma1 za i
ako nije: onda ćemo povećati suma2 za i*i
* ispisati ćemo suma1 i suma2 na ekrau
*/

	#include <iostream>
	using namespace std;

	void f1(int u1)
{
	int korijenI = sqrt(u1);
	float korijenF = sqrt(u1);
	if (korijenF == korijenI)
		cout << korijenI << " * " << korijenI << " = " << u1 << endl;
}

void main()
{
	int m;
	cout << "m = ";
	cin >> m;

	int n;
	cout << "n = ";
	cin >> n;

	for (int i = m; i <= n; i++)
	{
		f1(i);
	}
}



/*
Zadatak 1 (prost broj):
a) Napraviti program koji će odrediti da li je broj prost
b) izračunati sumu prostih brojeva za ospeg [x, y].
*/
#include <iostream>
using namespace std;

void f1(int u1)
{
	int b = 0;
	for (int i = 2; i <= u1 - 1; i++)
	{
		if (u1 % i == 0)
			b++;
	}
	if (b == 0)
		cout << u1 << " je prost broj " << endl;

}

void main()
{
	int m;
	cout << "m = ";
	cin >> m;

	int n;
	cout << "n = ";
	cin >> n;

	for (int i = m; i <= n; i++)
	{
		f1(i);
	}
}
