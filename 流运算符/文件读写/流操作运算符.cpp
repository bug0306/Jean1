#include<iostream>
using namespace std;
#include<cstdio>
#include<iomanip>
int main()
{
	//int x, y;
	//cin >> x >> y;
	//freopen("test.txt", "w", stdout);//内容输出到test.txt
	//if (y == 0)
	//{
	//	cerr << "y==o" << endl;
	//}
	//else
	//	cout << x / y << endl;
	//double a;
	//int b;
	//freopen("txt.txt", "r", stdin);//从txt.txt读写内容
	//cin >> a >> b;
	//cout << a << ";" << b << endl;//输出到test.txt中去了
	//cout << "---------------------" << endl;
	//int x1;
	//char buf[100];
	//cin >> x1;
	//cin.getline(buf, 90);//getline读到留在流中的“\n”就会返回
	//cout << buf << endl;
	cout << "流操纵算子--------------------------" << endl;
	int c = 10;
	cout << hex << c << endl;//十六进制
	cout << dec << c << endl;//十进制
	cout << oct << c << endl << endl;//八进制
	double x = 1234567.98, y = 12.34567;
	int m = 123456;
	int n = 12;
	cout << setprecision(6) << x << endl << y << endl<< m << endl << n<<endl<<endl;//保留6为有效数字
	cout <<setiosflags(ios::fixed)<< setprecision(6) << x << endl << y << endl 
		<< m << endl << n << endl<<endl;//保留六位小数
	cout <<scientific<< setprecision(6) << x << endl << y << endl << m << endl 
		<< n << endl<<endl;//科学计数法
	cout << showpos << fixed <<setw(12)<< setfill('*') << left << 12.1 << endl;
	cout << noshowpos << setw(12) << right << 12.1 << endl;
	cout << setw(12) << internal << -12.1 << endl;
	ostream &tab(ostream &osb)
	{
		return  osb << '\t';
	}
	cout << 23 << tab << 23<<endl;
	system("pause");
	return 0;
}