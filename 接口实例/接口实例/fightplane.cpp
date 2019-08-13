#include"fightplane.h"
using namespace std;
fightplane::fightplane(string code):plane(code)
{}
void fightplane::takeoff()
{
	cout << "fightplane takeoff" << endl;
}
void fightplane::land()
{
	cout << "fightplane land" << endl;
}