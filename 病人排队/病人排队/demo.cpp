#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<string>
using namespace std;
struct bperson
{
	string id;//长度小于10
	int age;
};
bool com(const struct bperson &a,const struct bperson& b)
{
		return a.age > b.age;
}
int main()
{
	cout << "请输入病人个数：" << endl;//小于等于100
	int n;
	cin >> n;
	vector<bperson>vec;
	for (int i = 0; i < n; i++)
	{
		bperson bp1;
		cin >> bp1.id;
		scanf_s("%d", &bp1.age);
		vec.push_back(bp1);
	}
	vector<bperson>::iterator it = vec.begin();
	vector<bperson>vec1;
	for (; it!=vec.end(); it++)
	{
		bperson bp;
		if (it->age >= 60)
		{
			bp.age = it->age;
			bp.id = it->id;
		}
		vec1.push_back(bp);
	}
	sort(vec1.begin(), vec1.end(), com);
	vector<bperson>::iterator it1 = vec1.begin();
	for (; it1 != vec1.end(); it1++)
	{
		cout << it1->id << endl;
	}
	vector<bperson>::iterator it2 = vec.begin();
	for (; it2 != vec.end(); it2++)
	{
		if(it2->age<60)
		cout << it2->id << endl;
	}
	system("pause");
	return 0;
}