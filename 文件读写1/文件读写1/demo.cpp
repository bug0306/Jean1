#include<iostream>
using namespace std;
#include<vector>
#include<fstream>
#include<algorithm>
int main()
{
	vector<int>v;
	ifstream srcfile("in.txt", ios::in);
	ofstream destfile("out.txt", ios::out);
	int x;
	while (srcfile >> x)
		v.push_back(x);
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		destfile << v[i]<<' ';
	}
	destfile.close();
	srcfile.close();
	system("pause");
	return 0;
}