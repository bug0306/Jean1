//sort�����Դ���������lessΪ��С����greaterΪ�Ӵ�СĬ��Ϊ����
//sort(first,last,less<����>())
/*  ��һ��Ϊn(0 < n < 20)����ʾ�����ѧ����Ŀ����������n�У�
    ÿ��Ϊÿ��ѧ�������ֺ����ĳɼ�, �м��õ����ո������
	����ֻ������ĸ�ҳ��Ȳ�����20���ɼ�Ϊһ��������100�ķǸ����������
	�ѳɼ����������Ӹߵ��͵�˳��������������ÿ�а������ֺͷ������֮����һ���ո�*/
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
			if ((it->first.compare((it + 1)->first)) < 0)//���ַ��� S ���ֵ�˳��Ҫ���� S2���򷵻ظ�ֵ��
			{                                            //��֮���򷵻���ֵ
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