#pragma once
#include"plane.h"
#include"string"
using namespace std;
class fightplane:public plane
{
public:
	fightplane(string code);
	virtual void takeoff();
	virtual void land();
};