#include <iostream>
#include <bitset>

using namespace std;

int main(void){
	int brojUnosa, brojKorisnika, brojPokusaja = 0;

	cout << "Unesite broj za pogadanje: "; cin >> brojUnosa;

	if (brojUnosa < 0 || brojUnosa > 10)
	{
		cout << "Broj mora biti od 0 - 10" << endl;
		system("pause");
		return 1;
	}		
	system("cls");
	
	//string binary = bitset<8>(128).to_string();
	//cout << binary << endl;
	

	do {
		cout << "Unesite broj: "; cin >> brojKorisnika;
		brojPokusaja++;
	} while (brojKorisnika != brojUnosa);

	cout << "Pogodili broj sa " << brojPokusaja << " pokusaja." << endl;

	system("pause");
	return 0;
}