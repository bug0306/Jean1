#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	char date[100];
	ofstream outfile;
	outfile.open("afile.dat");
	cout << "wrinting to the file" << endl;
	cout << "enter your name" << endl;
	cin.getline(date, 100);
	outfile << date << endl;
	cout << "enter your age" << endl;
	cin >> date;
	cin.ignore();
	outfile << date << endl;
	ifstream intfile;
	intfile.open("afile.dat");
	cout << "reading from the date" << endl;
	intfile >> date;
	cout << date << endl;
	intfile >> date;
	cout << date << endl;
	intfile.close();
	intfile.open("afile.dat");
	outfile.open("afile.dat1");
	while (!intfile.eof())
	{
		intfile >> date;
		cout << date << endl;
		outfile << date << endl;
	}
	intfile.close();
	outfile.close();
	system("pause");
	return 0;
}