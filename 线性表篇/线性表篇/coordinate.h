#pragma once
#include<iostream>
using namespace std;
class Coordinate
{
	
public:
	friend ostream &operator<<(ostream&out, Coordinate&coor);
	/*{
		out << "(" << coor.m_x << "," << coor.m_y << ")" << endl;
		return out;
	}*/
	bool operator==( Coordinate&coor);
	Coordinate(int x = 0, int y = 0);
	void printcoordinate();
private:
	int m_x;
	int m_y;
};