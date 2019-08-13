#include"list.h"

List::List(int size)
{
	m_size = size;
	m_list = new Coordinate[size];
	m_lenth = 0;
}
List::~List()
{
	delete[]m_list;
	m_list = NULL;
}
void List::clearlist()
{
	m_lenth=0;
}
bool List::emptylist()
{
	return m_lenth == 0 ? true : false;
}
int List::listlength()
{
	return m_lenth;
}
bool List::getlist(int i, Coordinate*e)
{
	if (i<0 || i>m_lenth)
		return false;
	else
	{
		*e = m_list[i];
		return true;
	}
}
int List::locatelist(Coordinate*e)
{
	for (int i = 0; i < m_lenth; i++)
	{	if (m_list[i] == *e)
			return i;
	}
	return -1;
}
bool List::priorlist(Coordinate*current, Coordinate*pre)
{
	int temp = locatelist(current);
	if (temp == -1)
		return false;
	else
	{
		if (temp == 0)
			return false;
		else
		{
			*pre = m_list[temp - 1];
			return true;
		}
	}
}
bool List::nextlist(Coordinate*current, Coordinate*next)
{
	int temp = locatelist(current);
	if (temp == -1)
		return false;
	else
	{
		if (temp == (m_lenth-1))
			return false;
		else
		{
			*next = m_list[temp+1];
			return true;
		}
	}
}
void List::visitlist()
{
	for (int i = 0; i < m_lenth; i++)
	{
		cout << m_list[i] << endl;
	}
}
bool List::deletelist(int i, Coordinate*e)
{
	
	if (i < 0 || i >= m_lenth)
	{
		return false;
	}
	*e = m_list[i];
	for (int k = i+1; k < m_lenth; k++)
		m_list[k-1] = m_list[k];
	m_lenth--;
	return true;
}
bool List::insertlist(int i, Coordinate*e)
{
	if (i<0 || i>m_lenth)
		return false;
	for (int k = m_lenth-1; k >= i; k--)
	{
		m_list[k + 1] = m_list[k];
	}
	m_list[i] = *e;
	m_lenth++;
	return true;
}