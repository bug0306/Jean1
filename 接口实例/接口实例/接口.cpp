#include<iostream>
using namespace std;
#include"fightplane.h"
#include"stdlib.h"
void planematch(flyable*f1, flyable*f2)
{
	f1->takeoff();
	f2->takeoff();
	f1->land();
	f2->land();
}
int main()
{
	plane p1("001");
	plane p2("002");
	p1.flyprint();
	p2.flyprint();
	planematch(&p1,&p2);
	cout << "-----------------------------" << endl;
	fightplane p3("001");
	fightplane p4("002");
	p1.flyprint();
	p2.flyprint();
	planematch(&p3, &p4);
	system("pause");
	return 0;
}