#include<iostream>
using namespace std;
#include<cstdio>
#include<iomanip>
int main()
{
	//int x, y;
	//cin >> x >> y;
	//freopen("test.txt", "w", stdout);//���������test.txt
	//if (y == 0)
	//{
	//	cerr << "y==o" << endl;
	//}
	//else
	//	cout << x / y << endl;
	//double a;
	//int b;
	//freopen("txt.txt", "r", stdin);//��txt.txt��д����
	//cin >> a >> b;
	//cout << a << ";" << b << endl;//�����test.txt��ȥ��
	//cout << "---------------------" << endl;
	//int x1;
	//char buf[100];
	//cin >> x1;
	//cin.getline(buf, 90);//getline�����������еġ�\n���ͻ᷵��
	//cout << buf << endl;
	cout << "����������--------------------------" << endl;
	int c = 10;
	cout << hex << c << endl;//ʮ������
	cout << dec << c << endl;//ʮ����
	cout << oct << c << endl << endl;//�˽���
	double x = 1234567.98, y = 12.34567;
	int m = 123456;
	int n = 12;
	cout << setprecision(6) << x << endl << y << endl<< m << endl << n<<endl<<endl;//����6Ϊ��Ч����
	cout <<setiosflags(ios::fixed)<< setprecision(6) << x << endl << y << endl 
		<< m << endl << n << endl<<endl;//������λС��
	cout <<scientific<< setprecision(6) << x << endl << y << endl << m << endl 
		<< n << endl<<endl;//��ѧ������
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