//�ǵþ�������һ��Ҫ�ӵ�һ����ʼ���ܶ�ʱ����һ�������һ��
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#include<numeric>
using namespace std;
int main()
{
	vector<int>a;
	for (int i = 6; i > 0; i--)
	{
		a.push_back(i + 3);
	}
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n-----------------------------\n";
	//vector<int>p(5);
	//cout << "���������������" << endl;
	//for (int i = 0; i < p.size(); i++)
	//{
	//	cin >> p[i];
	//}
	//sort(p.begin(), p.end());//vector����end()Ϊ���һ��Ԫ�ؼ�һ
	//for (int i = 0; i < p.size(); i++)
	//{
	//	cout<< p[i]<<" ";
	//}
	//cout << "\n-----------------------------\n";
	vector<int>b;
	vector<int>::iterator it;
	for (int i = 0; i < 6; i++) b.push_back(i + 5);
	b.insert(b.begin(), 32);
	b.insert(b.end(), 78);
	b.insert(b.end(), 3, 45);
	b.insert(b.end(), 98);
	cout << "��Ϊ��" << accumulate(b.begin(), b.end(), 0) << endl;//���һ������Ϊ��ʼֵ
	for (int i = 0; i < b.size(); i++)cout << b[i] << " "; reverse(b.begin(), b.end());//ת��
	cout << endl; for (int i = 0; i < b.size(); i++)cout << b[i] << " ";
	cout << "\n";
	it = b.end() - 1;
	cout << *it << endl;
	b.erase(it);
	for (int i = 0; i < b.size(); i++)cout << b[i] << " "; cout << endl;
	b.erase(b.begin(), b.begin() + 2);
	for (int i = 0; i < b.size(); i++)cout << b[i] << " "; cout << endl;
	cout << b.size() << endl;
	b.pop_back();//ɾ�����һ��Ԫ��
	cout << b.size() << endl;
	b.clear();//�������Ԫ��
	cout << b.empty() << endl;//�ж��Ƿ�Ϊ��
	cout << "----------------------------\n";
	vector<string>vec;
	vec.push_back("hello");
	vector<string>::iterator vecr = vec.begin();
	for (; vecr != vec.end(); vecr++)
	{
		cout << *vecr << " ";
	}
	cout << endl;
	cout << "----------------------------" << endl;
	vector<int>a1(5, 6);
	vector<int>::iterator vect = a1.begin();
	for (; vect != a1.end(); vect++)
	{
		*vect = 8;//������const�ؼ��֣���ֻ�������������������
	}
	*(vect - 1) = 4;
	cout << endl;
	vector<int>::iterator vect1 = a1.begin();
	cout << *vect1 - *(vect - 1) << endl;//��������ļӼ�����
	cout << accumulate(a1.begin(), a1.end(),0)<<endl;
	cout << "----------------------------\n";
	map<int, string>m;//map<string,string>
	pair<int, string>p1(4, "four");//p1("b","begin")
	pair<int, string>p2(5, "five");
	m.insert(p1);
	m.insert(p2);
	cout << m[4] << endl;//m["b"]
	cout << m[5] << endl;
	system("pause");
	return 0;
}