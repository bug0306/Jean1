#include<cstdlib>
#include"rect.h"
#include"circle.h"
#include<iostream>
using namespace std;
int main()
{
	shape*shape1 = new rect(8);
	shape*shape2 = new circle(3, 6);
	cout << sizeof(shape) << endl;
	cout<<shape1->area() << endl;
	cout<<shape2->area()<<endl;
	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	system("pause");
}


