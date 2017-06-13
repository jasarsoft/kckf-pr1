#include <iostream>
using namespace std;

int sifriraj(int broj) {
	
	int x = broj;
	int p;
	int s = 0, z=0;
	while (broj > 0) {
		p = broj % 10;
		if(p%2==1){
			p = 4;
			
		}
		broj /= 10;
		
		s += p;
		s *= 10;
		
	}

	while (s > 0) {
		p = s % 10;
		z += p;
		z *= 10;
		s /= 10;
	}

	return z/10;
}


void main()
{
	int y;
	cout << "Unesi prirodan broj: " << endl;
	cin >> y;
	cout << "Suma je: " << sifriraj(y) << endl;


}
