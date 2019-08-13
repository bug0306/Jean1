#include<iostream>
#include<string>
using namespace std;
template<class T,class P>//还可以有非类型参数
class pair1
{
public:
	T t1;
	P t2;
public:
	pair1(T t3, P t4)  ;
	bool operator<(const pair1<T, P>&p);
	template<class Tp>
	void fun(Tp a);
};
template<class T, class P>template<class Tp>
void pair1<T,P>::fun(Tp a)
{
	cout << a<< endl;
}
template<class T, class P>
pair1<T, P>::pair1(T t3,P t4)
{
	t1 = t3;
	t2 = t4;
	cout << t1 << " " << t2 << endl;
}

template<class T, class P>
bool pair1<T,P>::operator<(const pair1<T, P>&p)
{
	return t2 < p.t2;
}
int main()
{
	pair1<string,int> p1("liwanbo", 43);
	pair1<string,int> p2("luting~", 89);
	cout << p1.t1 << endl;
	cout << (p1<p2) << endl;
	p1.fun("helloworld");
	system("pause");
	return 0;
}