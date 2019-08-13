#pragma once
class Tree
{
public:
	Tree(int size,int*proot);
	~Tree();
	int*searchnode(int nodeindex);
	bool addnode(int nodeindex, int direction, int*pnode);//direction=0:left;direction=1:right
	bool deletenode(int nodeindex, int*pnode);
	void treetreave();
private:
	int*m_ptree;
	int m_isize;
};
