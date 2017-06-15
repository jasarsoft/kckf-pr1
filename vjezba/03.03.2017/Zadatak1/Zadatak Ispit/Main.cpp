#include <iostream>
#include <math.h>

using namespace std;


//-20 do +20 x

double Sinus(int x)
{
	return sin(x / 5) * 10;
}



int main(void) {
	
	for (int i = 0; i < 20; i++)
	{
		cout << Sinus(i) << endl;
	}

	system("pause");
	return 0;
}