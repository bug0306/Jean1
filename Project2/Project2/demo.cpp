#include<iostream>
using namespace std;
int n,cur;
char aa[11];
char a[11] = {"ABCDEFGHIJ"};
void dfs(int cur)
{
	if (cur == n){
		cout << aa<<endl;
		return;
	}
	for (int j = 0; j < n; j++)
	{
		aa[cur] = a[j];
		dfs(cur + 1);
	}
}
int main()
{
	while (~scanf("%d", &n))
	{
		dfs(0);
	}
	return 0;
}