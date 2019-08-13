#include<iostream>
using namespace std;
int main()
{
	int mg[5][5] = {};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cin >> mg[i][j];
	}
	for (int i = 0, j = 0; i != 5 || j != 5; )
	{
		if (mg[i][j + 1] == 0)
		{
			j += 1; 
			cout << "(" << i << "," << j << ")" << endl;
		}
		if (mg[i + 1][j] == 0)
		{
			i += 1;
			cout << "(" << i << "," << j << ")" << endl;
		}
		if (mg[i][j - 1] == 0)
		{
			j -= 1;
			cout << "(" << i << "," << j << ")" << endl;
		}
	}
	system("pause");
	return 0;
}