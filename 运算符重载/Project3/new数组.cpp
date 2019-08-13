#include<iostream>
using namespace std;
int main()
{
	int **p=NULL;
	p = new int*[4];
	for (int i = 0; i < 4; i++)
	{
		p[i] = new int[3];
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			p[i][j] = (i + 1)*(j + 1);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<p[i][j]<<"\t" ;
		}
		cout << endl;
	}
	for (int j = 0; j < 4; j++)
	{
		delete [] p[j];
	}
	delete [] p;
	system("pause");
	return 0;
}
