#include<bits/stdc++.h>
using namespace std;
const int maxn = 100000;
 
struct edge
{
  int v, w;
};

struct node
{
  int dis, u;
  bool operator>(const node& a) const { return dis > a.dis; }
};

vector<edge> e[maxn];
int dis[maxn], vis[maxn];
priority_queue<node, vector<node>, greater<node> > q;

void dijkstra(int n, int s)
{
  memset(dis, 63, sizeof(dis));
  dis[s] = 0;
  q.push({0, s});
  while (!q.empty())
  {
    int u = q.top().u;
    q.pop();
    if (vis[u]) continue;
    vis[u] = 1;
    for (auto ed : e[u])
	{
      int v = ed.v, w = ed.w;
      if (dis[v] > dis[u] + w)
	  {
        dis[v] = dis[u] + w;
        q.push({dis[v], v});
      }
    }
  }
}

int main()
{
	int n,m,k,s,t;
	cin>>n>>m>>k;
	cin>>s>>t;
	
	int x,y,v;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y>>v;
		
	}
	return 0;
}
//noip.ybtoj.com.cn/contest/664/problem/5
