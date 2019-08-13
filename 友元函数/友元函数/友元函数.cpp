#include<iostream>
using namespace std;
class A;
class C
{
public:
	void sum(int x, A &a);
};
class A
{
	int min;
	int max;
public:
	A(int a, int b)
	{
		min = a;
		max = b;
	}
	friend void C::sum(int x,A &a);
};
void C::sum(int x, A &a)
{
	x = a.max + a.min;
	cout << x << endl;
}
int main()
{
	A a(32, 34);
	C c;
	c.sum(0,a);
	system("pause");
	return 0;
}