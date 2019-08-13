#pragma once
#include<iostream>
using namespace std;
class student
{
private:
	int min;
	int max;
public:
	int a;
	int b;
	student();
	~student();
	friend class average;
};
