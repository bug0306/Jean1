#include"Node.h"
Node::Node()
{
	date = 0;
	index = 0;
	plchild = NULL;
	prchild = NULL;
	piparent = NULL;
}
Node*Node::searchnode(int nodeindex)
{
	Node*temp = NULL;
	if (this->index == nodeindex)
		return this;
	if (this->plchild != NULL)
	{
		if (this->plchild->index == nodeindex)
			return this->plchild;
		else
			temp=this->plchild->searchnode(nodeindex);
		if (temp != NULL)
			return temp;
	}
	if (this->prchild != NULL)
	{
		if (this->prchild->index == nodeindex)
			return this->prchild;
		else
			temp=this->prchild->searchnode(nodeindex);
		return temp;
	}
	return NULL;
}
void Node::deletenode()//È«²¿É¾³ý
{
	if (this->plchild != NULL)
		this->plchild->deletenode();
	if (this->prchild != NULL)
		this->prchild->deletenode();
	if (this->piparent != NULL)
	{
		if (this->piparent->plchild == this)
			this->piparent->plchild = NULL;
		if (this->piparent->prchild == this)
			this->piparent->prchild = NULL;
	}
	delete this;
}
void Node::forvisit()
{
	cout << this->index << "  :" << this->date << endl;
	if (this->plchild != NULL)
	{
		this->plchild->forvisit();
	}
	if (this->prchild != NULL)
	{
		this->prchild->forvisit();
	}
}
void Node::invisit()
{
	if (this->plchild != NULL)
	{
		this->plchild->invisit();
	}
	cout << this->index << "  :" << this->date << endl;
	if (this->prchild != NULL)
	{
		this->prchild->invisit();
	}
}
void Node::postvisit()
{
	if (this->plchild != NULL)
	{
		this->plchild->postvisit();
	}
	if (this->prchild != NULL)
	{
		this->prchild->postvisit();
	}
	cout << this->index << "  :" << this->date << endl;
}