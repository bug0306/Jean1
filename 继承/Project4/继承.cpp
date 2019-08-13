#include<iostream>
#include<string>
using namespace std;
class bug
{
	int nlegs;
	string ncolor;
public:
	int ntype;
	bug(int leg,string color):nlegs(leg),ncolor(color){}
	void printbug() { cout << ncolor << endl; }
};
class flybug :public bug
{
	int swing;
public:
	flybug(int leg,int swings,string color):bug(leg,color),swing(swings){}
};
int main()
{
	flybug fb(4, 8, "red");
	fb.ntype = 8;
	fb.printbug();
	system("pause");
	return 0;
}