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
	//+�����
	friend complex operator+(const complex&A,const complex&B)
	{
		return complex(A.img + B.img, A.real + B.real);
	}
	//-�����
	complex operator-(const complex&A)
	{
		return complex(this->real - A.real, this->img - A.img);
	}
	//��������
	friend bool operator==(const complex&A, const complex&B)
	{
		if ((A.img == B.img) && (A.real == B.real))
			return true;
		else
			return false;
	}
	//��������
	complex&operator+=(const complex &A);
	//��������
	complex&operator++()
	{
		this->img++;
		this->real++;
		return*this;
	}
	//�Ҽ������
	complex operator++(int)
	{
		complex tem;
		this->img++;
		this->real++;
		return tem;
	}
	//��������<<
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
	//******�ص㣺������������
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