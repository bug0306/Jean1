#include<iostream>
#include"Tree.h"
using namespace std;
int main()
{
	Node*node1 = new Node();
	node1->date = 5;
	node1->index = 1;
	Node*node2 = new Node();
	node2->date = 8;
	node2->index = 2;
	Node*node3 = new Node();
	node3->date = 2;
	node3->index = 3;
	Node*node4 = new Node();
	node4->date = 6;
	node4->index = 4;
	Node*node5 = new Node();
	node5->date = 9;
	node5->index = 5;
	Node*node6 = new Node();
	node6->date = 7;
	node6->index = 6;
	Tree*tree = new Tree();
	tree->addnode(0, 0, node1);
	tree->addnode(0, 1, node2);
	tree->addnode(1, 0, node3);
	tree->addnode(1, 1, node4);
	tree->addnode(2, 0, node5);
	tree->addnode(2, 1, node6);
	//tree->deletenode(6, NULL);
	//tree->deletenode(3, NULL);
	tree->forvisit();//0 1 3 4 2 5 6
	//tree->invisit();//3 1 4 0 5 2 6
	//tree->postvisit();//3 4 1 5 6 2 0
	Node*temp=NULL;
	cout<< tree->searchnode(4)->date << endl;
	delete tree;
	system("pause");
	return 0;
}