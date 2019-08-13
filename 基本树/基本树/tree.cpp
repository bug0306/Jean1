#include<iostream>
using namespace std;
#include"tree.h"
Tree::Tree(int size,int*proot)
{
	m_isize = size;
	m_ptree = new int[size];
	for (int i = 0; i < size; i++)
	{
		m_ptree[i] = 0;
	}
	m_ptree[0] = *proot;
}
Tree::~Tree()
{
	delete[]m_ptree;
}
int *Tree::searchnode(int nodeindex)
{
	if (nodeindex<0 || nodeindex>=m_isize)
		return NULL;
	if (m_ptree[nodeindex] == 0)
		return NULL;
	return &m_ptree[nodeindex];
}
bool Tree::addnode(int nodeindex, int direction, int *pnode)
{
	if (nodeindex < 0 || nodeindex >= m_isize)
		return false;
	if (m_ptree[nodeindex] == 0)
		return false;
	if (direction == 0)
	{
		if ( nodeindex*2+1 >= m_isize)
			return false;
		if (m_ptree[nodeindex * 2 + 1] != 0)
			return false;
		m_ptree[nodeindex * 2 + 1] = *pnode;
	}
	if (direction == 1)
	{
		if (nodeindex * 2 + 2 >= m_isize)
			return false;
		if (m_ptree[nodeindex * 2 + 2] != 0)
			return false;
		m_ptree[nodeindex * 2 + 2] = *pnode;
	}
	return true;
}
bool Tree::deletenode(int nodeindex,int*pnode)
{
	if (nodeindex < 0 || nodeindex >= m_isize)
		return false;
	if (m_ptree[nodeindex] == 0)
		return false;
	*pnode=m_ptree[nodeindex];
	m_ptree[nodeindex] = 0;
	return true;
}
void Tree::treetreave()
{
	for (int i = 0; i < m_isize; i++)
	{
		cout << m_ptree[i] << " ";
	}
}