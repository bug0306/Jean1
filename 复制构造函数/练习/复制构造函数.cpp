#include<iostream>
using namespace std;
class aexample
{
public:
	int a;
	aexample(int A):a(A){}
	aexample(aexample&B)
	{
		a = B.a;
	}
	~aexample()
	{
		cout << a << endl;
	}
	void show(aexample&B)
	{
		cout << "A jicheng" << endl;
	}
};
aexample fun()
{
	aexample c(34);
	return c;
}
int main()
{
	aexample A(23);
	aexample B(A);
	B.~aexample();
	B.show(A);
	fun();
	system("pause");
	return 0;
}