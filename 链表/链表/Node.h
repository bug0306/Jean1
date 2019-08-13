#pragma once
#include<iostream>
using namespace std;
class Node
{
public:
	int date;
	Node*next;
	void printNode()
	{
		cout << date << endl;
	}
};