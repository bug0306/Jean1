#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define MAX 100
struct Edge//±£´æ±ß
{
public:
	int start;
	int end;
	int weight;
	bool operator < ( const Edge&edge)const
	{
		return edge.weight < weight;
	}
};
priority_queue<Edge> p;
int find(int parent[], int m)
{
	while (parent[m] > 0)
		m = parent[m];
	return m;
}
void kruskal()
{
	int parent[MAX],sum=0;
	memset(parent, 0, MAX * sizeof(int));
	while(!p.empty())
	{
		int m = find(parent,p.top().start);
		int n = find(parent, p.top().end);
		if (m != n)
		{
			parent[m] = n;
			sum += p.top().weight;
			cout << p.top().start << "----------->" << p.top().end << endl;
		}
		p.pop();
	}
	cout << sum << endl;									
}
int main()
{
	Edge edge1;
	int N;//±ßÊý
	cin >> N;
	while (N--)
	{
		cin >> edge1.start >> edge1.end >> edge1.weight;
		p.push(edge1);
	}
	kruskal();
	system("pause");
	return 0;
}