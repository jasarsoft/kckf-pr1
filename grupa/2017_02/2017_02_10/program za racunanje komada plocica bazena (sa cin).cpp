#include <iostream>
using namespace std;

int main()
{
	// deklarisati tri varijable a, b, c tipa int
	int a;
	int b;
	int c;
	
	//	varijablama a, b i c dodjeliti neki broj koji predstavlja dimenzije bazena u metrima
	
	a = 5;
	b = 10;
	c = 15;
	
	//	deklarisati varijablu P i dodjeliti vrijednost a*b + 2 * b*c + 2 * a*c
	int p;
	p = a*b + 2 * b*c + 2 * a*c;

	//	deklarisati varijablu V i dodjeliti vrijednost a*b*c
	int v;
	v = a*b*c;

	//	Deklarisati varijablu K = ? ? ? , K predstavlja broj komada ploèica pod pretpostavkom da je jedna ploèica dimenzije 40 cm x 80 cm
	float k;
	float x;
	x = 0.4 * 0.8;
	k = p / x;

	//	ispisati vrijednost, P, V, K
	cout << "površina bazena je " << p << "m2" << endl;
	cout << "zapremina bazena je " <<v << "m3"<< endl;
	cout << "broj komada ploèica je " <<k << endl;

	return 0;
}