//Tarjan做法
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1000000;

int fa[MAXN];
bool vis[MAXN];
int ans[MAXN];
int query[MAXN][3];

struct Node
{
	int to,nxt,head;
};
Node E[MAXN];
Node QE[MAXN];

void add(int num,int u,int v)
{
	E[num].to=v;
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

/*
https://www.luogu.com.cn/discuss/532906
#include <iostream>
using namespace std;
namespace Answer {
    constexpr int MAXN(500005);
    int n, m, s,
        eto[MAXN << 1], enext[MAXN << 1], ehead[MAXN], par[MAXN],
        qto[MAXN << 1], qnext[MAXN << 1], qhead[MAXN], ans[MAXN];
    inline void newEdge(int src, int des) {
        static int cnt(1);
        ++ cnt;
        eto[cnt] = des;
        enext[cnt] = ehead[src];
        ehead[src] = cnt;
        ++ cnt;
        eto[cnt] = src;
        enext[cnt] = ehead[des];
        ehead[des] = cnt;
        return;
    }
    inline void newQuery(int src, int des) {
        static int cnt(1);
        ++ cnt;
        qto[cnt] = des;
        qnext[cnt] = qhead[src];
        qhead[src] = cnt;
        ++ cnt;
        qto[cnt] = src;
        qnext[cnt] = qhead[des];
        qhead[des] = cnt;
        return;
    }
    int findPar(const int x) {
        return (par[x] == x) ? (x) : (par[x] = findPar(par[x]));
    }
    void tarjan(int vert, int from) {
        par[vert] = vert;
        for (int i(ehead[vert]); i; i = enext[i])
            if (eto[i] != from)
                tarjan(eto[i], vert);
        for (int i(qhead[vert]); i; i = qnext[i])
            if (! ans[i >> 1])
                ans[i >> 1] = findPar(qto[i]);
        par[vert] = from;
        return;
    }
    void main() {
        scanf("%d%d%d", &n, &m, &s);
        for (int i(1); i < n; ++ i) {
            static int x, y;
            scanf("%d%d", &x, &y);
            newEdge(x, y);
        }
        for (int i(0); i < m; ++ i) {
            static int x, y;
            scanf("%d%d", &x, &y);
            newQuery(x, y);
        }
        tarjan(s, s);
        for (int i(1); i <= m; ++ i)
            printf("%d\n", ans[i]);
        return;
    }
}
int main() {
    Answer::main();
    return 0;
}
*/