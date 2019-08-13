#pragma once
#include<iostream>

using namespace std;
template<typename T>
class mystack
{
public:
	mystack(int size);
	~mystack();
	bool stackempty();
	bool stackfull();
	int stacklenth();
	void stackclear();
	bool push(T element);//Ԫ����ջ��ջ������
	bool pop(T&element);//Ԫ�س�ջ��ջ���½�
	void stackvisit(bool frombottom);
private:
	T*stack;//ջ�ռ�ָ��
	int stacklen;//ջ������
	int itop;//ջ����������Ԫ�ظ���
};
template<typename T>
mystack<T>::mystack(int size)
{
	stacklen = size;
	stack = new T[size];
	itop = 0;
}
template<typename T>
mystack<T>::~mystack()
{
	delete[]stack;
}
template<typename T>
bool mystack<T>::stackempty()
{
	if (0 == itop)
		return true;
	else
		return false;
}
template<typename T>
bool mystack<T>::stackfull()
{
	if (stacklen == itop)
		return true;
	else
		return false;
}
template<typename T>
void mystack<T>::stackclear()
{
	itop = 0;
}
template<typename T>
int mystack<T>::stacklenth()
{
	return itop;
}
template<typename T>
bool mystack<T>::push(T element)
{
	if (stackfull())
		return false;
	else
	{
		stack[itop] = element;
		itop++;
		return true;
	}
}
template<typename T>
bool mystack<T>::pop(T&element)
{
	if (stackempty())
	{
		return false;
	}
	itop--;
	element = stack[itop];
	return true;
}
template<typename T>
void mystack<T>::stackvisit(bool frombottom)
{
	if (frombottom)
	{
		for (int i = 0; i < itop; i++)
			cout << stack[i] << endl;
	}
	else
	{
		for (int i = (itop - 1); i >= 0; i--)
			cout << stack[i] << endl;
	}
}