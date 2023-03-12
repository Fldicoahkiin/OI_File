//倍增做法
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 500001;

ll head[MAXN];
ll lg[MAXN];
ll deep[MAXN];
ll fa[MAXN][233];

struct
{
	ll to,nxt;
}E[MAXN*2];

ll cnt;
inline void add(ll from,ll to)
{
	E[cnt].to=to;
	E[cnt].nxt=head[from];
	head[from]=cnt++;
}

inline void LgDefine()
{
	lg[1]=0;
	for(ll i=2;i<=MAXN;i++)
	{
		lg[i]=lg[i/2]+1;
	}
}

inline void DFS(ll u,ll f)
{
	fa[u][0]=f;
	deep[u]=deep[fa[u][0]+1];
	for(ll i=1;i<lg[deep[u]];i++)
	{
		fa[u][i]=fa[fa[u][i-1]][i-1];
		
	}
	
}

ll LCA(ll x,ll y)
{
	if(deep[x]<deep[y]) swap(x,y);
	
	
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
	LgDefine();
	
	DFS(S,0);
	while(M--)
	{
		ll x,y;
		cin>>x>>y;
		cout<<LCA(x,y)<<endl;
	}
	return 0;
}

// Copy
// https://www.luogu.com.cn/blog/Otto-Apocalypse/solution-p3379