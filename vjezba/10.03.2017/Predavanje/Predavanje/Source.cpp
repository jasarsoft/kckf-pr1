#include <iostream>

using namespace std;

int main(void) {
	
	int sum = 0;
	int number = 0;
	//float armSred;

	for (int i = 1; i <= 100; i++){
		if (i < 40 || i > 60)
		{
			sum += i;
			number++;
		}
	}

	//armSred = sum / float(number);

	cout << "Arimeticka sredina je: " << sum / double(number) << endl;

	system("pause");
	return 0;
}