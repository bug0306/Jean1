#include"Tree.h"
Tree::Tree()
{
	m_iroot = new Node();
}
Tree::~Tree()
{
	deletenode(0, NULL);
	//m_iroot->deletenode();
}
Node *Tree::searchnode(int nodeindex)
{
	return m_iroot->searchnode(nodeindex);
}
bool Tree::addnode(int nodeindex, int direction, Node*pnode)
{
	Node*temp = searchnode(nodeindex);
	if (temp == NULL)
	{
		return false;
	}
	Node*node = new Node();
	if (node == NULL )
	{
		return false;
	}
	node->index = pnode->index;
	node->date = pnode->date;
	node->piparent = temp;
	if (direction == 0)
	{
		temp->plchild = node;
	}
	if (direction == 1)
	{
		temp->prchild = node;
	}
	return true;
}
bool Tree::deletenode(int nodeindex, Node*pnode)
{
	Node*temp = searchnode(nodeindex);
	if (temp == NULL)
	{
		return false;
	}
	if (pnode != NULL)
	{
		pnode = temp;
	}
	temp->deletenode();
	return true;
}
void Tree::forvisit()
{
	m_iroot->forvisit();
}
void Tree::invisit()
{
	m_iroot->invisit();
}
void Tree::postvisit()
{
	m_iroot->postvisit();
}