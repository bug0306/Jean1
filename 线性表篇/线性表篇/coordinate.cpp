#include"coordinate.h"
Coordinate::Coordinate(int x, int y)
{
	m_x = x;
	m_y = y;
}
void Coordinate::printcoordinate()
{
	cout << "(" << m_x << "," << m_y << ")" << endl;
}
ostream&operator<<(ostream&out, Coordinate&coor)
{
	out << "(" << coor.m_x << "," << coor.m_y << ")" << endl;
	return out;
}
bool Coordinate::operator==(Coordinate &coor)
{
	 if (this->m_x == coor.m_x && this->m_y == coor.m_y)
		 return true;
	 else
		 return false;
}