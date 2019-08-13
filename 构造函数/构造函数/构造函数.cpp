#include<iostream>
using namespace std;
class cpoint
{
	int x;
	int y;
public:
	cpoint(){}
	cpoint(int a = 89, int b=90):x(a),y(b) {}
	void put()
	{
		cout << x << " " << y << endl;
	}
};
int main()
{
	cpoint c(34,56);
	c.put();
	cpoint cp(23);
	cp.put();
	system("pause");
	return 0;
}