#include<iostream>
using namespace std;
#include"bird.h"
#include"plane.h"
void dosomething(flyable*fa)
{
	cout << typeid(*fa).name() << endl;
	fa->takeoff();
	if (typeid(*fa) == typeid(bird))
	{
		bird*bir = dynamic_cast<bird*>(fa);
		bir->foraging();
	}
	if (typeid(*fa) == typeid(plane))
	{
		plane *plan = dynamic_cast<plane*>(fa);
		plan->carry();
	}
	fa->land();
}
int main()
{
	plane b;
	dosomething(&b);
	cout << "----------------------------" << endl;
	int*a = 0;
	cout << typeid(a).name() << endl;
	cout << typeid(*a).name()<<endl;
	system("pause");
	return 0;
}
//这个机制少用为妙
//对程序的封装性不是太友好
//仅仅在异常处理时可能用到一点点