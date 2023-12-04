#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "413 Domina Olena Variant 10" << endl;

		const int numRow = 2;
	const int numCol = 5;
	int arr[numRow][numCol] = { -8, 9, 11, -3, -15, 28, 10, -6, 21, -2 };;

	int a;
	cout << "default array - press 1" << endl;
	cout << "random array - press 2" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		{
		cout << "initial array" << endl;

		for (int i = 0; i < numRow; i++)
		{
			for (int j = 0; j < numCol; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		}
		break;
	case 2:
		{
		cout << "initial array" << endl;
		for (int i = 0; i < numRow; i++)
		{
			for (int j = 0; j < numCol; j++)
			{
				arr[i][j] = rand() % 200 - 100;
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
		}
		break;
	}

	cout << "\nresulting array\n";
	
	for (int i = 0; i < numRow; i++)
	{
		for (int j = 0; j < numCol; j++)
		{
			if (arr[i][j] < 0)
			{
				arr[i][j] = j + 1;
			}
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
