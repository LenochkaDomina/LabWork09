#include <iostream>
using namespace std;

int main()
{
	cout << "413 Domina Olena Variant 10" << endl;

	int a;
	cout << "default array - press 1" << endl;
	cout << "random array - press 2" << endl;
	cin >> a;
	
	switch (a)
	{
	case 1:
	{
		const int numRow = 2;
		const int numCol = 5;
		int q[numRow][numCol] = { -8, 9, 11, -3, -15, 28, 10, -6, 21, -2 };
	
		cout << "initial array" << endl;
	
		for (int i = 0; i < numRow; i++)
		{
			for (int j = 0; j < numCol; j++)
			{
				cout << q[i][j] << " ";
			}
			cout << endl;
		}
	
		cout << "\nresulting array\n";
		for (int i = 0; i < numRow; i++)
		{
			for (int j = 0; j < numCol; j++)
			{
				if (q[i][j] < 0)
				{
					q[i][j] = j + 1;
				}
				cout << q[i][j] << " ";
			}
			cout << endl;
		}
	}
	break;
	case 2:
		{
		const int numRow = 2;
		const int numCol = 5;
		int arr[numRow][numCol];
	
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
		break;
	}
}
