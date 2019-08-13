//第一行输入：5 ≤ n ≤ 5000，3 ≤ m ≤ n且m的1.5倍小于n
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
struct Dscore
{
	int k;//报名序号
	int s;//面试成绩
};
bool com(struct Dscore a, struct Dscore b)
{
	if (a.s != b.s)
		return a.s > b.s;
	else
		return a.k < b.k;
}
int main()
{
	Dscore dsc;
	int n, m;
	scanf_s("%d%d", &n, &m);
	int a = 1.5*m;
	vector<Dscore>ds;
	for (int i = 0; i < n; i++)//k为报名序号s为分数按分数从高到低，分数相同按序号从大到小
	{
		scanf_s("%d%d", &dsc.k, &dsc.s);
		ds.push_back(dsc);
	}
	sort(ds.begin(), ds.end(), com);
	vector<Dscore>::iterator it = ds.begin();
	cout << (it+a-1)->k << " " << (it+a-1)->s << endl;
	int temp = (it + a)->s;
	for (; (it->s )>=temp; it++)
	{
		cout << it->k << " " << it->s << endl;
		
	}
	system("pause");
	return 0;
}