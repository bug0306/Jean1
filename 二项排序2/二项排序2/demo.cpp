#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
typedef pair<string, int> P;
bool com( const P a,const  P b)
{
	if (a.second != b.second)//>½µÐò
		return a.second > b.second;
	else
	{
		int temp = a.first.compare(b.first);
		return temp > 0;//½µÐò
	}
}
void out(vector<pair<string, int>>::iterator it)
{
	cout << it->first << "" << it->second << endl;
}
int main()
{
	vector<pair<string, int>>vec;
	for (int i = 0; i < 3; i++)
	{
		string s; int a;
		cin >> s >> a;
		vec.push_back(make_pair(s, a));
	}
	sort(vec.begin(), vec.end(), com);
	vector<pair<string, int>>::iterator it = vec.begin();
    for_each(vec.begin(), vec.end(),out);
	/*for (; it != vec.end(); it++)
	{
		cout << it->first << " "<<it->second<<endl;
	}*/
	system("pause");
	return 0;
}