#pragma once
#include"fiyable.h"
//#include"string.h"
using namespace std;
class bird:public flyable
{
public:
	virtual void takeoff();
	virtual void land();
	void foraging();
};