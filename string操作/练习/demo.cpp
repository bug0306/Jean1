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
	t1.append(t2, 2, t2.size());//׷���ַ�
	t2 += t1;
	cout << t1 << endl<<t2<<endl;
	cout << t1.compare(1,4,t2,0,3) << endl;//t1�ĵ�2���ֽڿ�ʼ��4���ֽ���t2��һ���ַ���ʼ�������ַ��Ƚ�
	string t3;
	t3 = t1.substr(2, 5);//t1�еڶ����ַ���ʼ������ַ�
	t1.swap(t2);//���������ַ���
	cout << t2.find("in",2) << endl;//�ӵڶ����ַ�t2�е�һ�γ���in�ĵط�rfind()Ϊ�Ӻ���ǰ
	                                 //t2.find_first_not_of(); t2.find_first_of();
	t2.erase(5);//�ӵ��������
	t2.replace(3,2,"niubi");//�滻t2�еĵ�3���ַ���2��Ϊ��niubi��
	t1.insert(4,t2);//��t1�е�4���ַ�����
	cout<< "�ַ���������" << endl;
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