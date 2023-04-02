#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1000000;

int n,m,s;

struct node
{
	int to,nxt,val;
} E[MAXN];

int head[MAXN];
int cnt;
inline void add(int from,int to,int val)
{
	cnt++;
	E[cnt].to=to;
	E[cnt].val=val;
	E[cnt].nxt=head[from];
	head[from]=cnt;
	return;
}

int INF=0x7fffffff;
int dis[MAXN];
inline void SPFA()
{
	for(int i=1;i<=n;i++)
	{
		bool flag=0;
		for(int u=1;u<=n;u++)
		{
			if(dis[u]==INF) continue;
			
		}
	}
	return;
}

int main()
{
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		add(u,v,w)
	}
	
	for(int i=1;i<=n;i++) dis[i]=INF;
	dis[s]=0;
	SPFA();
	
	for(int i=1;i<=n;i++)
	{
		cout<<dis[i]<<' ';
	}
	return 0;
}
