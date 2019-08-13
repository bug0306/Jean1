//记得纠正错误一定要从第一个开始，很多时候都是一错带动错一堆
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
	//cout << "请输入五个整数：" << endl;
	//for (int i = 0; i < p.size(); i++)
	//{
	//	cin >> p[i];
	//}
	//sort(p.begin(), p.end());//vector排序end()为最后一个元素加一
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
	cout << "和为：" << accumulate(b.begin(), b.end(), 0) << endl;//最后一个参数为初始值
	for (int i = 0; i < b.size(); i++)cout << b[i] << " "; reverse(b.begin(), b.end());//转置
	cout << endl; for (int i = 0; i < b.size(); i++)cout << b[i] << " ";
	cout << "\n";
	it = b.end() - 1;
	cout << *it << endl;
	b.erase(it);
	for (int i = 0; i < b.size(); i++)cout << b[i] << " "; cout << endl;
	b.erase(b.begin(), b.begin() + 2);
	for (int i = 0; i < b.size(); i++)cout << b[i] << " "; cout << endl;
	cout << b.size() << endl;
	b.pop_back();//删除最后一个元素
	cout << b.size() << endl;
	b.clear();//清除所有元素
	cout << b.empty() << endl;//判断是否为空
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
		*vect = 8;//若加有const关键字，则只可以输出，不可以输入
	}
	*(vect - 1) = 4;
	cout << endl;
	vector<int>::iterator vect1 = a1.begin();
	cout << *vect1 - *(vect - 1) << endl;//迭代器间的加减运算
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