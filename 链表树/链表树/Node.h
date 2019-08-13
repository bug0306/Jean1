#pragma once
#include<iostream>
using namespace std;
class Node
{
public:
	Node();
	Node*searchnode(int nodeindex);
	void deletenode();
	void forvisit();
	void invisit();
	void postvisit();
	int index;
	int date;
	Node*plchild;
	Node*prchild;
	Node*piparent;
};