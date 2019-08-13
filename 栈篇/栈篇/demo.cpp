#include<iostream>
#include<stdlib.h>
#include"mystack.h"
#include"coordinate.h"
using namespace std;
#define oct 8
#define bin 2
#define hex 16
int main()
{
	mystack<char>*m = new mystack<char>(30);//m中存储字符串前面的字符
	mystack<char>*mneedy = new mystack<char>(30);//mneedy中存储字符串后面的字符，若匹配则出栈
	char str[] = "[[[()]]]";
	char mneed = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != mneed)
		{
			m->push(str[i]);
			switch (str[i])
			{
			case ']':
				if (mneed != 0)
				{
					mneedy->push(mneed);
				}
				mneed = ']';
				break;
			case  ')':
				if (mneed != 0)
				{
					mneedy->push(mneed);
				}
				mneed = ')';
				break;
			default:
				cout << "括号不匹配" << endl;
				break;
			}
		}
		else
		{
			char elem;
			m->pop(elem);
			if (!mneedy->pop(mneed))
			{
				mneed = 0;
			}
		}
	}
	cout << endl;
	if (m->stackempty())
		cout << "括号匹配。" << endl;
	else
		cout << "括号不匹配。" << endl;
	delete[]m;
	m = NULL;
	delete[]mneedy;
	mneedy = NULL;



	//char num[] = "0123456789ABCDEF";        //利用栈进行进制转换
	//mystack<int>*m = new mystack<int>(30);
	//int n = 7895;
	//int mod = 0;
	//while (n != 0)
	//{
	//	mod = n % hex;
	//	m->push(mod);
	//	n /= hex;
	//}
	//int elem = 0;
	//while (!m->stackempty())
	//{
	//	m->pop(elem);
	//	cout << num[elem];//1ED7
	//}
	////m->stackvisit(false);
	//delete[]m;
	//m = NULL;



	//mystack<coordinate>*m = new mystack<coordinate>(4);
	//coordinate c1(23, 45);
	//coordinate c2(43, 15);
	//coordinate c3(53, 25);
	//coordinate c4(63, 35);
	//m->push(c1);//底
	//m->push(c2);
	//m->push(c3);
	//m->push(c4);//顶
	//m->stackvisit(true);
	//coordinate ele=NULL;
	//cout << endl;
	//m->pop(ele);
 //   ele.print();
	//cout << m->stacklenth() << endl;
	//delete m;
	//m = NULL;
	system("pause");
	return 0;
}