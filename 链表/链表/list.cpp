#include"list.h"
List::List()
{
	Node*m_list = new Node;
	m_list->date = 0;
	m_list->next = NULL;
	m_lenth = 0;
}
List::~List()
{
	clearlist();
	delete m_list;
	m_list = NULL;
}
void List::clearlist()
{
	Node*currentnode = m_list->next;
	while (currentnode != NULL)
	{
		Node*temp = currentnode->next;
		delete currentnode;
		currentnode = temp;
	}
	m_list->next = NULL;
}
bool List::emptylist()
{
	return m_lenth == 0 ? true : false;
}
int List::listlength()
{
	return m_lenth;
}
bool List::getlist(int i, Node*e)
{
	if (i<0 || i>m_lenth)
		return false;
	Node*currentnode = m_list;
	Node*currentbefore = NULL;
	for (int k = 0; k <= i; k++)
	{
		currentbefore = currentnode;
		currentnode = currentnode->next;
	}
	e->date = currentnode->date;
	return true;
}
int List::locatelist(Node*e)
{
	Node*currentnode = m_list;
	int count = 0;
	while (currentnode != NULL)
	{
		currentnode = currentnode->next;
		if (currentnode->date == e->date)
		{
			return count;
		}
		count++;
	}
	return -1;
}
//-------------------------------------------------------------
bool List::priorlist(Node*current, Node*pre)
{
	Node*currentnode = m_list;
	Node*tempnode = NULL;
	while (currentnode != NULL)
	{
		tempnode = currentnode;
		currentnode = currentnode->next;
		if (currentnode->date == current->date)
		{
			if (tempnode == m_list)
			{
				return false;
			}
			pre->date=tempnode->date;
			return true;

		}
	}
	return false;
}
bool List::nextlist(Node*current, Node*next)
{
	Node*currentnode = m_list;
	while (currentnode != NULL)
	{
		currentnode = currentnode->next;
		if (currentnode->date == current->date)
		{
			if (currentnode->next=NULL)
			{
				return false;
			}
			next->date = currentnode->next->date;
			return true;
		}
	}
	return false;
}
void List::visitlist()
{
	Node*currentnode = m_list;
	while (currentnode != NULL)
	{
		currentnode = currentnode->next;
		currentnode->printNode();
	}
}
//É¾³ý
bool List::deletelist(int i, Node*e)
{

	if (i < 0 || i >= m_lenth)
	{
		return false;
	}
	Node*currentnode = m_list;
	Node*currentbefore = NULL;
	for (int k = 0; k <=i; k++)
	{
		currentbefore = currentnode;
		currentnode=currentnode->next;
	}
	currentbefore->next = currentnode->next;
	e->date = currentnode->date;
	delete currentnode;
	currentnode = NULL;
	m_lenth--;
	return true;

}
//²åÈë
bool List::insertlist(int i, Node*e)
{
	if (i<0 || i>m_lenth)
		return false;
	Node*currentnode = m_list;
	for (int k = 0; k < i; k++)
	{
		currentnode = currentnode->next;
	}
	Node*newnode = new Node;
	newnode->date = e->date;
	newnode->next = currentnode->next;
	currentnode->next = newnode;
	return true;
}
bool List::listhead(Node*node)
{
	Node*temp = m_list->next;
	Node*newnode = new Node();
	newnode->next = NULL;
	if (newnode == NULL)
	{
		return false;
	}
	m_list->date = node->date;
	m_list->next = newnode;
	newnode = temp;
	m_lenth++;
	return true;
}
bool List::listtail(Node*node)
{
	Node *currentnode = m_list;
	while (currentnode->next != nullptr)
	{
		currentnode = currentnode->next;
	}
	Node*newnode = new Node;
	newnode->next = NULL;
	if (newnode == NULL)
	{
		return false;
	}
	newnode->date = node->date;
	newnode->next = NULL;
	currentnode->next = newnode;
	m_lenth++;
	return true;
}
