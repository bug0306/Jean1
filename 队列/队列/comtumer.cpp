#include"comtumer.h"
comtumer::comtumer(string name,int age)
{
	m_name = name;
	m_age = age;
}
void comtumer::printinfo()const
{
	cout <<"ÐÕÃû£º"<< m_name << endl;
	cout <<"ÄêÁä£º"<< m_age << endl;
}