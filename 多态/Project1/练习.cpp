#include<iostream>
using namespace std;
class Area
{
	int wideth;
	int height;
public:
	static int num;
	static int allarea;
	Area(int w,int h):wideth(w),height(h)
	{
		num++;
		allarea+= wideth * height;
	}
	Area(Area&r)
	{
		wideth=r.wideth;
		height=r.height;
		num++;
		allarea += wideth * height;
	}
	~Area()
	{
		num--;
		allarea -= wideth * height;
	}
	static void get()
	{
		cout <<"num:"<< num << endl;
		cout <<"allnum:"<< allarea << endl;
	}
};
int Area::num = 0;
int Area::allarea = 0;
int main()
{
	Area rec(5, 8);
	rec.get();
	Area cir(3, 8);
	Area rect(cir);
	rect.get();
	rect.~Area();
	rect.get();
	system("pause");
	return 0;
}