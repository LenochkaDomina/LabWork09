#include <iostream>
using namespace std;

int main()
{
	cout << "413 Domina Olena Variant 10" << endl;

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