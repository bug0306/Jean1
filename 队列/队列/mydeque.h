#pragma once
#include<iostream>
#include"comtumer.h"
class mydeque
{
public:
	mydeque(int mydequecapacity);//创建队列
	~mydeque();                  //销毁队列
	void cleardeque();             //清空队列
	bool dequeempty()const;          //判空队列
	bool dequefull();            //判满
	int dequelenth()const;          //队列长度
	bool endeque(comtumer element);   //新元素入伍
	bool dedeque(comtumer&element);    //首元素出队
	void dequevisit();           //遍历队列
private:
	comtumer*mdeque;                 //数组队列指针
	int dequelen;               //队列元素个数
	int dequecapacity;         //队列容量
	int mhead;
	int mtail;
};

