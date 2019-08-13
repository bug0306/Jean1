#include"plane.h"
plane::plane(string code)
{
	m_code = code;
}
void plane::takeoff()
{
	cout << "plane--takeoff" << endl;
}
void plane::land()
{
	cout << "plane--land" << endl;
}
void plane::flyprint()
{
	cout << m_code << endl;
}