#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string s("hello");
	cout << s.length() << endl;
	string st;
	cin >> st;
	cout << st << endl;
	string s1;
	getline(cin, s1);
	cout<<s1<<endl;
	cout << "-----------------------" << endl;
	string s2("liwanbo");
	string s3 = s2;
	cout << s2 << endl;
	string s4;
	s4.assign(s2);
	cout<<s4<<endl;
	string s5;
	s5.assign(s2, 2, 3);
	cout<<s5<<endl;
	cout << "-------------------------" << endl;
	string t1="mingtiangeng";
	string t2 = "1234567";
	t1.append(t2, 2, t2.size());//追加字符
	t2 += t1;
	cout << t1 << endl<<t2<<endl;
	cout << t1.compare(1,4,t2,0,3) << endl;//t1的第2个字节开始的4个字节与t2第一个字符开始的两个字符比较
	string t3;
	t3 = t1.substr(2, 5);//t1中第二个字符开始的五个字符
	t1.swap(t2);//交换两个字符串
	cout << t2.find("in",2) << endl;//从第二个字符t2中第一次出现in的地方rfind()为从后往前
	                                 //t2.find_first_not_of(); t2.find_first_of();
	t2.erase(5);//从第五个消除
	t2.replace(3,2,"niubi");//替换t2中的第3个字符后2个为“niubi”
	t1.insert(4,t2);//从t1中第4个字符插入
	cout<< "字符串流处理" << endl;
	string input("iloveyou liwangbo 18 2018 2.34 4 a");
	istringstream inputstring(input);
	string string1,string2;
	int i;
	double d;
	char c;
	inputstring >> string1 >> string2 >> i >> d >> c;
	cout << string1 <<" "<<i<<" "<< d <<" "<< c << endl;
	int in;
	if (inputstring >> in)cout << in << endl;
	else
		cout << "nothing" << endl;
	system("pause");
	return 0;
}