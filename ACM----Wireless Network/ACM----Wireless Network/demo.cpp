#include<iostream>
#include<string>
#include<math.h>
using namespace std;
#define MAX 1005
int parent[MAX];
class Node
{
public:
	int x;
	int y;
	string statue;
};
Node node[MAX];
void intial(int n)
{
	for (int i = 0; i <= n; i++)
		parent[i] = i;
}
double distance(int m ,  int n)
{
	return sqrt((double)((node[m].x-node[n].x)*(node[m].x - node[n].x)+ 
		(node[m].y - node[n].y)*(node[m].y - node[n].y)));
}
int findroot(int x)
{
	if (x == parent[x])
		return x;
	parent[x] = findroot(parent[x]);
	return parent[x];
	//return parent[x] == x ? x : parent[parent[x]];
}
void unit(int x,int N,int d)
{
	int r2 = findroot(x);
	for (int i = 1; i <= N; i++)
	{
		int r1 = findroot(i);
		if (distance(x, i) <= d && node[i].statue == "SUCCESS")
				parent[r1] = r2;
	}
}
int main()
{
	//所有点从一开始
	int N, d;
	while (cin >> N >> d)
	{
		intial(N);
		for (int i = 1; i <= N; i++)
		{
			cin >> node[i].x >> node[i].y;
			node->statue == "FAIL";
		}
		char type;
		int p, q;//o或者s两种操作
		while (cin >> type)
		{
			if (type == 'o')
			{
				cin >> p;
				node[p].statue = "SUCCESS";
				unit(p,N,d);
			}
			else
			{
				cin >> p >> q;
				if (findroot(p) == findroot(q))
					
				{
					cout << "SUCCESS" << endl;
					for (int i = 1; i <= N; i++)
						cout << parent[i] << "   ";
				}
				else
					cout << "FAIL" << endl;
			}}}
	system("pause");
	return 0;
}
/*4 1
0 1
0 2
0 3
0 4
O 1
O 2
O 4
S 1 4
O 3
S 1 4*/