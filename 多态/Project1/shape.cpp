#include"shape.h"
shape::shape()
{
	cout << "shape()" << endl;
}
shape::~shape()
{
	cout << "~shape()" << endl;
}
double shape::area()
{
	cout << "shape->area" << endl;
	return 0;
}