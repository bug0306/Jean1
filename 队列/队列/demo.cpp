#include<iostream>
using namespace std;
#include"mydeque.h"
int main()
{
	mydeque*p = new mydeque(4);
	comtumer c1("lisi", 18);
	comtumer c2("wanger", 43);
	comtumer c3("liusan", 28);
	comtumer c4("liuneng", 19);
	p->endeque(c1);
	p->endeque(c2);
	p->endeque(c3);
	p->endeque(c4);
	p->dequevisit();
	//mydeque*deque = new mydeque(4);
	//deque->endeque(23);
	//deque->endeque(78);
	//deque->endeque(67);
	//deque->endeque(90);
	//deque->dequevisit();
	////deque->endeque(34);
	//int e = 0;
	//deque->dedeque(e);
	//cout <<endl<< e << endl;
	//int ea = 0;
	//deque->dedeque(ea);
	//cout << endl << ea << endl << endl;
	//deque->dequevisit();
	//deque->cleardeque();
	//deque->dequevisit();
	//delete deque;
	//deque = NULL;
	system("pause");
	return 0;
 }