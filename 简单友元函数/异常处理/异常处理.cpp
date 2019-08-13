#include<iostream>
using namespace std;
class student
{
	int ia;
	int ib;
public:
	student();
	virtual~student();
	void set();
	void get();
};
student::student()
{
	ia = 32;
	ib = 54;
}
student::~student()
{
	cout << "~student" << endl;
}
void student::set()
{
	int*a;
	int*b;
	a =& ia;
	b = &ib;
	cout << ia << " " << ib << endl;
}
void student::get()
{
	int a=0;
	int b=0;
	a = ia;
	b = ib;
	cout << a << " " << b << endl;
}
int main()
{
	student stu;
	stu.set();
	stu.get();
	system("pause");
	return 0;
}