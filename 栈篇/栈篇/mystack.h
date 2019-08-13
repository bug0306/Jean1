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
	bool push(T element);//元素入栈，栈顶上升
	bool pop(T&element);//元素出栈，栈顶下降
	void stackvisit(bool frombottom);
private:
	T*stack;//栈空间指针
	int stacklen;//栈的容量
	int itop;//栈顶，即现有元素个数
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