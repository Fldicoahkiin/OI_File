#include<bits/stdc++.h>
using namespace std;
const int MAXN =100000;

int fa[MAXN];

int find(int x)
{
	if(fa[x]==x)
	{
		return x;
	}
	else
	{
		return fa[x]=find(fa[x]);
	}
}

void merge(int x,int y)
{
	fa[find(y)]=find(x);
	return;
}

int main()
{
	//freopen("P1551_1.in","r",stdin);
	
	int n,m,p;
	cin >>n>>m>>p;
	
	//初始化
	for(int i=1;i<=n;i++)
	{
		fa[i]=i;
	}
	
	for(int i=1;i<=m;i++)
	{
		int tempx,tempy;
		cin>>tempx>>tempy;
		merge(tempx,tempy);
	}
	
	while(p--)
	{
		int tempx,tempy;
		cin>>tempx>>tempy;
		if(find(tempx)==find(tempy))
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}