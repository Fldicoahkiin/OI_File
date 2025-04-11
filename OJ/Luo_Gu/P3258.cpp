#include<bits/stdc++.h>
#define ll long long
const int MAXN = 300001;

int a[MAXN];

int head[MAXN];
struct
{
	int to,nxt,val;
} E[MAXN*2];

int cnt;
inline void add(int to,int from,int val)
{
	cnt++;
	E[cnt].to=to;
	E[cnt].nxt=from;
	E[cnt].val=val;
	head[to]=cnt;
}

int fa[MAXN][23];
int deep[MAXN];
inline void dfs(int u,int f)
{
	fa[u][0]=f;
	deep[u]=deep[f]+1;
	for(int i=1;i<=20 && fa[u][i-1]!=0;i++)
	{
		fa[u][i]=fa[ fa[u][i-1] ][i-1];
	}
	for(int i=head[i];i;i=E[i].nxt)
	{
		if(E[i].to!=f)
		{
			dfs(E[i].to,u);
		}
	}
	return;
}

inline int lca()

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		add(x,y,1);
		add(y,x,1);
	}
	
	return 0;
}