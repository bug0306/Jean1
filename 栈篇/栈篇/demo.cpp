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
	mystack<char>*m = new mystack<char>(30);//m�д洢�ַ���ǰ����ַ�
	mystack<char>*mneedy = new mystack<char>(30);//mneedy�д洢�ַ���������ַ�����ƥ�����ջ
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
				cout << "���Ų�ƥ��" << endl;
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
		cout << "����ƥ�䡣" << endl;
	else
		cout << "���Ų�ƥ�䡣" << endl;
	delete[]m;
	m = NULL;
	delete[]mneedy;
	mneedy = NULL;



	//char num[] = "0123456789ABCDEF";        //����ջ���н���ת��
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
	//m->push(c1);//��
	//m->push(c2);
	//m->push(c3);
	//m->push(c4);//��
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