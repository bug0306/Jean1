#include<iostream>
using namespace std;
template<class t>
t maxc(t a[],int size)
{
	t max = a[0];
	for (int i = 0; i < size; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}
template<class T>

T inc(T n)
{
	return n + 2;
}

template<class B,class Op>
void map(B a, B b, B c, Op op)
{
	for (; a != b; a++, c++)
		*c = op(*a);
}
int square(int a) { return a * a; }
double cube(double a) { return a * a*a; }
int main()
{
	int a[5] = {2,4,5,23,1},c[5];
	double b[5] = { 2.1,1.1,3.1,4.1,5.1 },d[5];
	cout << maxc(&a[0], 5)<<endl;
	cout << "---------------------" << endl;
	cout << inc<double>(5) / 2 << endl;//无参实例化模板函数，
	cout << "----------------------" << endl; //模板也可以重载但不可以进行类型的自动转换
	map(a, a + 5, c, square);
	for (int i = 0; i < 5; i++)
	{
		cout << c[i]<<" ";
	}
	cout << endl;
	map(b, b + 5, d, cube);
	for (int i = 0; i < 5; i++)
	{
		cout << d[i]<<" ";
	}
	cout << "\n";
	system("pause");              
	return 0;
}