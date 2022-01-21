/**
 * P1141 01迷宫
 * 
 * https://www.luogu.com.cn/problem/P1141
 */
#include <iostream>
#include <cstdio>
using namespace std;

int map[1000][1000];
int n;
long long m;

int main()
{
	freopen("P1141.in","r",stdin);
	scanf("%d, %lld",&n, &m);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&map[j][i]);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout <<map[j][i];
		}
		cout <<endl;
	}
	
	return 0;
}