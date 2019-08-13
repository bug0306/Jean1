#pragma once
#include<iostream>
#include"Node.h"
using namespace std;
class List
{
public:
	List();
	~List();
	void clearlist();
	bool emptylist();
	int listlength();
	bool getlist(int i, Node*e);//取出第i个值
	int locatelist(Node*e);//*e的位置
	bool priorlist(Node*current, Node*nodepre);
	bool nextlist(Node *current, Node*nodenext);
	void visitlist();
	bool deletelist(int i, Node *e);
	bool insertlist(int i, Node *e);
	bool listhead(Node*node);
	bool listtail(Node*node);
private:
	Node*m_list=NULL;
	int m_lenth;
};
