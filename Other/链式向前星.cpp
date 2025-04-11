#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20000;

int head[MAXN];
int vst[MAXN];

int fa[MAXN];
int c[MAXN];

struct ENode
{
	int v,val,nxt;
}E[MAXN];

void add(int num,int u,int v)
{
	E[num].v=v;
	E[num].val=1;
	E[num].nxt=head[u];
	head[u]=num++;
}

void delet()
{
	sum=0;
	memset(vst,0,sizeof(vst));
}

int dfs(int k,int fth)
{
	fa[k]=fth;
	vst[k]=1;
	for(int i=head[k];i>0;i=E[i].nxt)
	{
		if(E[i].to==0)
		{
			c[k]+=dfs(E[i].to,k);
		}
	}
	return c[k];
}

void dfs2(int k)
{
	for(int )
}

int main()
{
	int n,m;//n点m边
	cin>>n>>m;
	int num=0;
	for(int i=1;i<=n;i++)
	{
		int u,v;
		cin>>u>>v;
		add(num,u,v);
		add(num,v,u);
	}
	
	dfs(7,7);
	delet();
	dfs2()
	
	int ans=1;
	for(int i=2;i<=n;i++)
	{
		if(dsum[i]<dsum[ans])
		{
			ans=i;
		}
	}
	cout<<ans<<' '<<dsum[ans];
	return 0;
}

/*
in
5 7
1 2 8
2 3 5
1 3 9
1 4 4
4 5 7
5 1 3
5 3 2
*/

/*
7 6
7 6
1 6
1 3
1 2
2 5
2 4
*/