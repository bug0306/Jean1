#pragma once
#include<iostream>
#include<string>
using namespace std;
class comtumer
{
public:
	comtumer(string name="", int age=0);
	void printinfo()const;
private:
	string m_name;
	int m_age;
};