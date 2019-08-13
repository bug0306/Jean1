#include"rect.h"
rect::rect(double r)
{
	cout << "rect()" << endl;
	m_dr = r;
	m_dcenter = new coordinate(3,5);
}
rect::~rect()
{
	cout << "~rect()" << endl;
	delete m_dcenter;
	m_dcenter = NULL;
}
double rect::area()
{
	cout << "rect->area" << endl;
	return 3.14*m_dr*m_dr;
}