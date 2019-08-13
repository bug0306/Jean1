#pragma once
#include"fiyable.h"
using namespace std;
class plane:public flyable
{
public:
	virtual void takeoff();
	virtual void land();
	void carry();
};
