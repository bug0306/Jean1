#pragma once
#include<iostream>
using namespace std;
class coordinate
{
public:
	friend ostream&operator<<(ostream&out,coordinate&coor );
	coordinate(int x=0, int y=0);
	void print();
private:
	int m_x;
	int m_y;
};