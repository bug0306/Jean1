#include<iostream>
#include"tree.h"
using namespace std;
int main()
{
	int root = 3;
	int t1 = 5,t2=8,t3=3,t4=4,t5=5,t6=6;
	Tree*tree = new Tree(10,&root);
	tree->addnode(0, 0, &t1);
	tree->addnode(0, 1, &t2);
	tree->addnode(1, 0, &t3);
	tree->addnode(1, 1, &t4);
	tree->addnode(2, 0, &t5);
	tree->addnode(2, 1, &t6);
	tree->treetreave();
	int t = 0;
	tree->deletenode(5,&t);
	cout << endl;
	tree->treetreave();
	cout << endl << "" << t << endl;
	cout<<*tree->searchnode(3) <<endl;
	delete tree;
	system("pause");
	return 0;
}