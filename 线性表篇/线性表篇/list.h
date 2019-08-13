#pragma once
#include<iostream>
#include"coordinate.h"
using namespace std;
class List
{
public:
	List(int size);
	~List();
	void clearlist();
	bool emptylist();
	int listlength();
	bool getlist(int i, Coordinate*e);//ȡ����i��ֵ
	int locatelist(Coordinate*e);//*e��λ��
	bool priorlist(Coordinate*current, Coordinate*pre);
	bool nextlist(Coordinate *current, Coordinate*next);
	void visitlist();
	bool deletelist(int i, Coordinate *e);
	bool insertlist(int i, Coordinate *e);
private:
	Coordinate*m_list;
	int m_size;
	int m_lenth;
};
