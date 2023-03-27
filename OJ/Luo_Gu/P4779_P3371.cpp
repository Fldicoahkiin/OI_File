#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 500001;

int head[MAXN];
struct
{
	ll to,nxt,val;
}E[MAXN];

int cnt;
inline void Eupdate(int u,int v,int val)
{
	cnt++;
	E[cnt].to=u;
	E[cnt].val=val;
	E[cnt].nxt=v;
	head[u]=cnt;
}

ll dis[MAXN];
bool vis[MAXN];
void dijkstra(int u,int n)
{
	ll INF=2147483647;
	for(int i=1;i<=n;i++) dis[i]=INF;
	dis[u]=0;
	
	for(int i=1;i<=n;i++)
	{
		// for(int j=1;j<=n;j++)
		// {
			// if(vis[j]==0 && dis[j]<INF)
			// {
				// INF=dis[j];
				// u=j;
			// }
		// }
		
		vis[u]=1;
		for(int i=head[u];i!=0;i=E[i].nxt)
		{
			if(vis[E[i].to]==0)
			{
				dis[E[i].to]=min(dis[E[i].to],dis[u]+E[i].val);
			}
		}
	}
	return;
}

int main()
{
	int n,m,s;
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		ll u,v,val;
		cin>>u>>v>>val;
		Eupdate(u,v,val);
	}
	
	dijkstra(s,n);
	
	for(int i=1;i<=n;i++)
	{
		cout<<dis[i]<<' ';
	}
	return 0;
}

//链式前向星
//https://www.luogu.com.cn/blog/_post/115781