#include"circle.h"
circle::circle(double length, double wigth)
{
	cout << "circle()" << endl;
	mlength = length, mwigth = wigth;
}
circle::~circle()
{
	cout << "~circle()" << endl;
}
double circle::area(int ade)
{
	ade = 34;
	cout << ade << "     " << this->ade << endl;
	cout << "circle->area" << endl;
	return mlength * mwigth;
}