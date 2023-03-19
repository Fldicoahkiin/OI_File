#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100000;

struct Node
{
	int u,v;
	int val;
} road[MAXN];

int find(int x)
{
	if(road[x].u==x) return road[x].fa;
	else return road[x].fa=find(road[x].fa);
}

void merge(int x,int y)
{
	road[x].fa=find(road[y].fa);
	return;
}

int main()
{
	int N,M;
	cin >>N>>M;
	
	for(int i=1;i<=N;i++)
	{
		road[i].fa=i;
	}
	
	int ans=0;
	for(int i=1;i<=M;i++)
	{
		int x,y,t;
		cin>>x>>y>>t;
		if(t<find(road[x].val))
		{
			road[x].val=t;
			ans=ans+road[x].val;
		}
	}
	
	if(road[1].fa==find(road[1].fa))
	{
		cout<<ans;
	}
	else
	{
		cout<<-1;
	}
	return 0;
}