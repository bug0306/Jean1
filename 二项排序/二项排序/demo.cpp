//sort排序自带有排序方向less为从小到大greater为从大到小默认为升序
//sort(first,last,less<类型>())
/*  第一行为n(0 < n < 20)，表示班里的学生数目；接下来的n行，
    每行为每个学生的名字和他的成绩, 中间用单个空格隔开。
	名字只包含字母且长度不超过20，成绩为一个不大于100的非负整数。输出
	把成绩单按分数从高到低的顺序进行排序并输出，每行包含名字和分数两项，之间有一个空格。*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<string>
using namespace std;
typedef pair<string, int>   P;
bool com(const P a, const P b)
{
	return  a.second > b.second;
}
int main()
{
	int n;
	cout << "student number" << endl;
	cin >> n;
	P p;
	vector<P>vec;
	for (int i=0;i<n;i++)
	{
		cin >> p.first >> p.second;
		vec.push_back(make_pair(p.first, p.second));
	}
	sort(vec.begin(), vec.end(), com);
	vector<P>::iterator it = vec.begin();
	for (; it != (vec.end()-1); it++)
	{
		if (it->second == (it + 1)->second)               //s.compare(s2)
			if ((it->first.compare((it + 1)->first)) < 0)//若字符串 S 按字典顺序要先于 S2，则返回负值；
			{                                            //反之，则返回正值
				string temp = it->first;
				it->first = (it + 1)->first;
				(it + 1)->first = it->first;
			}
	}
	reverse(vec.begin(), vec.end());
	vector<P>::iterator ite = vec.begin();
	for (;ite!=vec.end();ite++)
	{
		cout << ite->first << " " << ite->second << endl;
	}
	system("pause");
	return 0;
}