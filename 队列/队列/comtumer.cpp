#include"comtumer.h"
comtumer::comtumer(string name,int age)
{
	m_name = name;
	m_age = age;
}
void comtumer::printinfo()const
{
	cout <<"������"<< m_name << endl;
	cout <<"���䣺"<< m_age << endl;
}