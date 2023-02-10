#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1000000;

int fa[MAXN];
bool vis[MAXN];
int ans[MAXN];
int query[MAXN][3];

int head[MAXN];
struct Node
{
	int to,val,nxt;
} E[MAXN];

void add(int num,int u,int v)
{
	E[num].to=v;
	E[num].val=1;
	E[num].nxt=head[u];
	head[u]=num++;
}

int find(int x)
{
	if(fa[x]==x) return fa[x];
	else return fa[x]=find(fa[x]);
}

void Tarjan(int u,int M)
{
	vis[u]=true;
	for(int i=head[u];i>0;i=E[i].nxt)
	{
		if(vis[E[i].to]==false)
		{
			Tarjan(E[i].to,M);
			fa[E[i].to]=u;
		}
	}
	
	for(int i=1;i<=M;i++)
	{
		ans[query[i][1]]=find(query[i][2]);
	}
}

int main()
{
	int N,M,S;
	cin >>N>>M>>S;
	
	int num=0;
	for(int i=1;i<=N-1;i++)
	{
		int x,y;
		cin>>x>>y;
		add(num,x,y);
		add(num,y,x);
	}
	
	for(int i=1;i<=M;i++)
	{
		cin>>query[i][1]>>query[i][2];
	}
	
	Tarjan(S,M);
	
	for(int i=1;i<=M;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}