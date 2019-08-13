#include"coordinate.h"
#include<iostream>
using namespace std;
coordinate::coordinate(int ix, int iy)
{
	cout << "coordinate" << endl;
	mx = ix;
	my = iy;
}
coordinate::~coordinate()
{
	cout << "~coordinate" << endl;
}