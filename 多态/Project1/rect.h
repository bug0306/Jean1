#ifndef RECT_H
#define RECT_H
#include"shape.h"
#include"coordinate.h"
class rect:public shape
{
public:
	rect(double r);
	virtual ~rect();
	virtual double area();
protected:
	double m_dr;
	coordinate*m_dcenter;
};

#endif // !RECT_H
