#include<iostream>
using namespace std;
#include"student.h"
#include"average.h"
int main()
{
	student stu;
	stu.a = 90;
	stu.b = 30;
	average aver;
	aver.pingjun(stu);
	system("pause");
	return 0;
}