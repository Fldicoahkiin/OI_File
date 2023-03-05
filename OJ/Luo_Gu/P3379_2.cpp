//倍增做法
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN = 1000000;

int lg[MAXN];
int depth[MAXN];
int fa[MAXN][233];
struct Node
{
	int to,nxt,head;
}E[MAXN];

int cnt;
void add(int u,int v)
{
	E[cnt].to=to;
	E[cnt].nxt=nxt;
	E[u].head=cnt++;
}

inline void LgDefine()
{
	lg[1]=0;
	for(int i=2;i<=MAXN;i++)
	{
		lg[i]=lg[i/2]+1;
	}
}

void DFS(int u,int f)
{
	depth[u]=depth[f]+1;
	for(int i=1;i<=lg[depth[u]];i++)
	{
		
	}
}

int LCA(int x,int y)
{
	
}

int main()
{
	int N,M,S;
	cin>>N>>M>>S;
	for(int i=1;i<=N-1;i++)
	{
		int x,y;
		cin>>x>>y;
		add(x,y);
		add(y,x);
	}
	LgDefine();
	DFS(S,0);
	while(M--)
	{
		int x,y;
		cin>>x>>y;
		cout<<LCA(x,y)<<endl;
	}
	return 0;
}

// Copy
// https://www.luogu.com.cn/blog/Otto-Apocalypse/solution-p3379