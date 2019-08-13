#pragma once
#include"Node.h"
class Tree
{
public:
	Tree();
	~Tree();
	Node *searchnode(int nodeindex);
	bool addnode(int nodeindex, int direction, Node*pnode);
	bool deletenode(int nodeindex, Node*pnode);
	void forvisit();
	void invisit();
	void postvisit();
private:
	Node*m_iroot;
};