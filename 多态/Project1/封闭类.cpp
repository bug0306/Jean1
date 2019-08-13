#include<iostream>
using namespace std;
#include<cstring>
class type
{
	string color;
	int seat;
public:
	type(int s, string c) :seat(s), color(c) {}
};
class engine
{
	int max;
public:
	engine(int m) :max(m) {}
};
class Ccar
{
	type ty;
	engine en;
public:
	Ccar(int cm,int cs,string cc):en(cm),ty(cs,cc){}
};
int main()
{
	Ccar car(6,8,"red");
	system("pause");
	return 0;
}