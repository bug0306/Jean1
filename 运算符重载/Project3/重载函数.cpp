#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
public:
	complex() {};
	complex(int a, int b) :real(a), img(b) {};
	~complex() {};
	//+运算符
	friend complex operator+(const complex&A,const complex&B)
	{
		return complex(A.img + B.img, A.real + B.real);
	}
	//-运算符
	complex operator-(const complex&A)
	{
		return complex(this->real - A.real, this->img - A.img);
	}
	//相等运算符
	friend bool operator==(const complex&A, const complex&B)
	{
		if ((A.img == B.img) && (A.real == B.real))
			return true;
		else
			return false;
	}
	//左加运算符
	complex&operator+=(const complex &A);
	//左加运算符
	complex&operator++()
	{
		this->img++;
		this->real++;
		return*this;
	}
	//右加运算符
	complex operator++(int)
	{
		complex tem;
		this->img++;
		this->real++;
		return tem;
	}
	//输出运算符<<
	friend ostream&operator<<(ostream&os, complex&B)
	{
		os << B.img << "+" << B.real << "i" << endl;
		return os;
	}
	void display()
	{
		cout << real << "+" << img << "i" << endl;
	}
};
complex&complex::operator+=(const complex &A)
{
	this->img += A.img;
	this->real += A.real;
	return*this;
}
int main()
{
	complex A(13, 14);
	complex B(5, 6);
	B += A;
	B.display();
	B++;
	B.display();
	++B;
	//******重点：重载输出运算符
	cout << B << endl;
	if (A == B)
		cout << "A==B" << endl;
	else
		cout << "A!=B" << endl;
	complex c;
	c = A + B;
	c.display();
	complex d;
	d = A - B;
	d.display();
	system("pause");
	return 0;
}