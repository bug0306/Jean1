#include"list.h"
#include<iostream>
using namespace std;
int main()
{
	Node node1;
	node1.date = 3;
	Node node2;
	node2.date = 4;
	List*list = new List();
	list->listhead(&node1);
	//list->listtail(&node2);
	list->visitlist();
	delete list;
	list = NULL;
	system("pause");
	return 0;
}