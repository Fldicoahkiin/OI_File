//Kruskal
#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200001;
int n,m;

struct Edge
{
	int u,v,w;
}E[MAXN];

int fa[MAXN];
int find(int x)
{
	if(fa[x]!=x) fa[x]=find(fa[x]);
	return fa[x];
}
void merge(int x,int y)
{
	int a=find(x);
	int b=find(y);
	if(a!=b) fa[a]=b;
}

bool cmp(const Edge &a,const Edge &b)
{
	if(a.w<b.w) return true;
	else return false;
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		
		E[i].w=z;
		if(E[i].u==y && E[i].v==x)
		{
			cout<<"orz"<<endl;
		}
		else
		{
			E[i].u=x;
			E[i].v=y;
		}
	}
	
	for(int i=1;i<=m;i++) fa[i]=i;
	
	sort(E+1,E+m+1,cmp);
	
	int ans=0;
	int k=0;
	for(int i=1;i<=m;i++)
	{
		if(!fa[i])
		{
			cout<<"orz"<<endl;
		}
		
		if(find(E[i].u) != find(E[i].v))
		{
			merge(E[i].u,E[i].v);
			ans+=E[i].w;
			k++;
		}
		if(k==n-1)break;
	}
	cout <<ans;
	return 0;
}