#include<iostream>
#include<stdlib.h>
#include"list.h"
using namespace std;
int main()
{
	Coordinate c1(3, 5);
	Coordinate c2(5, 7);
	Coordinate c3(6, 8);
	Coordinate temp(0, 0);
	List*list = new List(10);
	list->insertlist(0, &c1);
	list->insertlist(1, &c2);
	list->insertlist(2, &c3);
	list->visitlist();
	Coordinate t;
	if(list->getlist(1, &t))
	cout << t << endl;
	Coordinate e (6,8) ;
	cout << list->locatelist(&e) << endl;;
	list->deletelist(0, &temp);
	if (!list->emptylist())
	{
		cout << "no empty" << endl;
	}
	list->clearlist();
	if (list->emptylist())
	{
		cout << " empty" << endl;
	}
	delete list;
	system("pause");
	return 0;
}