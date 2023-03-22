#include<bits/stdc++>
#define ll long long
using namespace std;
const int MAXN = 100000;

int head[MAXN];
struct
{
	int to,nxt,val;
}E[MAXN];

int cnt;
void add(int u,int v,int val)
{
	cnt++;
	E[cnt].to=u;
	E[cnt].val=val;
	E[cnt].nxt=v;
	head[u]=cnt;
}

void dfs(s,n)
{
	
}

int main()
{
	int n,m,s;
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		int u,v,val;
		cin>>u>>v>>val;
		add(u,v,val);
	}
	
	
	return 0;
}