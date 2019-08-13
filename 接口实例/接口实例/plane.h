#pragma once
#include"flyable.h"
#include"string"
using namespace std;
class plane:public flyable
{
	string m_code;
public:
	plane(string code);
	virtual void takeoff();
	virtual void land();
	void flyprint();
};
