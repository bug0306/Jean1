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
//�����������Ϊ��
//�Գ���ķ�װ�Բ���̫�Ѻ�
//�������쳣����ʱ�����õ�һ���