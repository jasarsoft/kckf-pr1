#include <iostream>

using namespace std;


const int max = 10;

int f1(int x)
{
	return x;
}

int f2(int x)
{
	return  max - x;
}


int main(void) {

	int index = 0;

	while (index <= 10)
	{
		for (int i = 0; i <= 10; i++)
		{
			if (f1(i) == index || f2(i) == index)
				cout << "x";
			else
				cout << "_";
		}
		cout << endl;
		index++;
	}
	

	cout << endl;

	//while (index <= 10)
	//{
	//	for (int i = 0, j = 10; i <= 10; i++, j--)
	//	{
	//		if (index == i || index == 10 - i)
	//			cout << "x";
	//		else
	//			cout << "_";
	//	}

	//	cout << endl;
	//	index++;
	//}

	system("pause");

	return 0;
}