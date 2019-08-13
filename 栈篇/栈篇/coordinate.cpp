#include"coordinate.h"
coordinate::coordinate(int x, int y)
{
	m_x = x;
	m_y = y;
}
void coordinate::print()
{
	cout << "x:"<<m_x << endl;
	cout << "y:" << m_y << endl;
}
ostream&operator<<(ostream&out, coordinate&coor)
{
	out << coor.m_x << "," << coor.m_y << endl;
	return out;
}