#pragma once
#include<iostream>
#include"comtumer.h"
class mydeque
{
public:
	mydeque(int mydequecapacity);//��������
	~mydeque();                  //���ٶ���
	void cleardeque();             //��ն���
	bool dequeempty()const;          //�пն���
	bool dequefull();            //����
	int dequelenth()const;          //���г���
	bool endeque(comtumer element);   //��Ԫ������
	bool dedeque(comtumer&element);    //��Ԫ�س���
	void dequevisit();           //��������
private:
	comtumer*mdeque;                 //�������ָ��
	int dequelen;               //����Ԫ�ظ���
	int dequecapacity;         //��������
	int mhead;
	int mtail;
};

