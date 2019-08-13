#pragma once
#include"shape.h"
#include"coordinate.h"
class circle :public shape
{
public:
	int ade = 23;
	circle(double length, double wigth);
	virtual~circle();
	virtual double area(int ade);
protected:
	double mlength;
	double mwigth;

};