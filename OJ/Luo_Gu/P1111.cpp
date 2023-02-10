#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100000;

int fa[MAXN];

int find(int x)
{
	if(fa[x]==x) return fa[x];
	else return fa[x]=find(fa[x]);
}

void merge(int x,int y)
{
	
}

int main()
{
	int N,M;
	cin >>N>>M;
	
	for(int i=1;i<=N;i++)
	{
		fa[i]=i;
	}
	
	for(int i=1;i<=M;i++)
	{
		int tempx,tempy,
	}
	
	
	
	return 0;
}