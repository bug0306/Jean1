//��һ�����룺5 �� n �� 5000��3 �� m �� n��m��1.5��С��n
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
struct Dscore
{
	int k;//�������
	int s;//���Գɼ�
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
	for (int i = 0; i < n; i++)//kΪ�������sΪ�����������Ӹߵ��ͣ�������ͬ����ŴӴ�С
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