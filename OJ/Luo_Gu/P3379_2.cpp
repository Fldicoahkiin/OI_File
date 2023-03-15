//倍增做法
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 500001;

ll head[MAXN];
ll deep[MAXN];
ll fa[MAXN][233];

struct
{
	ll to,nxt;
}E[MAXN*2];

ll cnt;
inline void add(ll from,ll to)
{
	cnt++;
	E[cnt].to=to;
	E[cnt].nxt=head[from];
	head[from]=cnt;
}

void DFS(ll u,ll f)
{
	fa[u][0]=f;
	deep[u]=deep[f]+1;
	for(ll i=1;i<=20 && fa[u][i-1]!=0;i++)
	{
		fa[u][i]=fa[ fa[u][i-1] ][i-1];
	}
	for(ll i=head[u];i;i=E[i].nxt)
	{
		if(E[i].to!=f)
		{
			DFS(E[i].to,u);
		}
	}
	return;
}

ll LCA(ll x,ll y)
{
	if(deep[x]<deep[y]) swap(x,y);
	
	for(int i=20;i>=0;i--)
	{
		if(fa[x][i]!=0) x=fa[x][i];
	}
	
	if(x==y)
	{
		return x;
	}
	
	for(ll i=20;i>=0;i--)
	{
		if(fa[x][i]!=fa[y][i])
		{
			cout<<x<<":"<<y<<":"<<i<<endl;
			x=fa[x][i];
			y=fa[y][i];
			//cout<<x<<":"<<y<<endl;
		}
	}
	return fa[x][0];
}

int main()
{
	ll N,M,S;
	cin>>N>>M>>S;
	for(ll i=1;i<=N-1;i++)
	{
		ll x,y;
		cin>>x>>y;
		add(x,y);
		add(y,x);
	}
	

	DFS(S,0);
	while(M--)
	{
		ll x,y;
		cin>>x>>y;
		cout<<"("<<x<<":"<<y<<")"<<endl;
		cout<<LCA(x,y)<<endl;
	}
	return 0;
}

// Copy
// https://www.luogu.com.cn/blog/Otto-Apocalypse/solution-p3379
// https://www.luogu.com.cn/blog/user25029/solution-p3379