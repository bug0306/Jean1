#include"mydeque.h"
mydeque::mydeque(int mydequecapacity)
{
	dequecapacity = mydequecapacity;
	mhead = 0;
	mtail = 0;
	dequelen = 0;//�˴����Ե���cleardeque����
	mdeque = new comtumer[mydequecapacity];
}
mydeque::~mydeque()
{
	delete[]mdeque;
	mdeque = NULL;
}
void mydeque::cleardeque()
{
	mhead = 0;
	mtail = 0;
	dequelen = 0;
}
bool mydeque::dequeempty()const
{
	return dequelen == 0 ? true : false;
}
int mydeque::dequelenth()const
{
	return dequelen;
}
bool mydeque::dequefull()
{
	if (dequelen == dequecapacity)
		return true;
	else
		return false;
}
bool mydeque::endeque(comtumer element)//���
{
	if (dequefull())
	{
		std::cout << "full" << std::endl;
		return false;
	}
	else
	{
		mdeque[mtail] = element;
		mtail++;
		mtail%=dequecapacity;
		dequelen++;
		return true;
	}
}
bool mydeque::dedeque(comtumer&element)//����
{
	if (dequeempty())
		return false;
	else
	{
		element = mdeque[mhead];
		mhead++;
		mhead%=dequecapacity;
		dequelen--;
		return true;
	}
}
void mydeque::dequevisit()//����
{
	for (int i = mhead; i <( dequelen+mhead); i++)
	{
		mdeque[i%dequecapacity].printinfo();
		cout <<"���У�"<<i-mhead<<"��"<< endl;
		cout << endl;
	}
}