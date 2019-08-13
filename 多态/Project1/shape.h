#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;
class shape
{
public:
	shape();
	virtual~shape();
	virtual double area();
};
#endif
