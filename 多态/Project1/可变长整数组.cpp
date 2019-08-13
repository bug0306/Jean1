#include<iostream>
#include<cstring>
using namespace std;
class carry
{
	int size;
	int *ptr;
public:
	carry(int s = 0);
	carry(carry&a);
	~carry();
	void push_back(int v);
	carry&operator=(const carry&a);
	int length() { return size; }
    int&operator[](int i)
	{
		return ptr[i];
	}
};
carry::carry(int s) :size(s)
{
	if (s == 0)
		ptr = NULL;
	else
		ptr = new int[s];
}
carry::carry(carry&a)
{
	if (!a.ptr) {
		ptr = NULL;
		size = 0;
		return;
	}
	ptr = new int[a.size];
	memcpy(ptr, a.ptr, sizeof(int)*a.size);
	size = a.size;
}
carry::~carry()
{
	if (ptr)delete[]ptr;
}
carry&carry::operator=(const carry&a)
{
	if (ptr == a.ptr)
		return *this;
	if (a.ptr == NULL)
	{
		if (ptr)delete[]ptr;
		ptr = NULL;
		size = 0;
		return*this;
	}
	if (size < a.size)
	
		{
			if (ptr) {
				delete[]ptr;
			}
			ptr = new int[a.size];
		}
		memcpy(ptr, a.ptr, sizeof(int)*a.size);
		size = a.size;
		return *this;
}
void carry::push_back(int v)
{
	if (ptr) {
		int *temptr = new int[size + 1];
		memcpy(temptr, ptr, sizeof(int)*size);
		delete[]ptr;
		ptr = temptr;
	}
	else
		ptr = new int[1];
	ptr[size++] = v;
}
int main()
{
	carry a;
	for (int i = 0; i < 5; ++i)
	{
		a.push_back(i);
	}
	carry a2, a3;
	a2 = a;
	for (int i = 0; i < a.length(); ++i)
	{
		cout << a2[i]<<" ";
	}
	cout << endl;
	a2 = a3;
	for (int i = 0; i < a2.length(); i++)
	{
		cout << a2[i] << " ";
	}
	cout << endl;
	a[3] = 100;
	carry a4(a);
	for (int i = 0; i < a.length(); i++)
	{
		cout << a4[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}