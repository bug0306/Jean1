#include<iostream>
using namespace std;
#include"indexexpection.h"
#include"string.h"
void test()
{
	throw index();
}
void test1()
{
	throw "helloworld";
}
int main()
{
	index *in;
	try
	{
		test();
	}
	catch (index &a)
	{
		a.printexpection();
	}
	try
	{
		test1();
	}
	catch (const char*a)
	{
		cout << a << endl;
	}
	system("pause");
	return 0;
}