#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int>s;
	s.insert(2);
	s.insert(1);
	s.insert(8);
	s.insert(2);
	cout << "s.size:"<<s.size()<<endl;
	cout << s.max_size() << endl;
	cout << *s.begin()<< endl;
	cout << "2出现次数："<<s.count(2)<<endl;
	cout << s.empty() << endl;
	s.clear();
	cout << s.empty() << endl;
	system("pause");
	return 0;
}