#include<bits/stdc++.h>
using namespace std;
const int MAXN = 40000;

int x,y;
int fa[MAXN];
int front[MAXN];
int num[MAXN];

int find(int x)
{
	if(fa[x]==x)
	{
		return fa[x];
	}
	int root=find(fa[x]);
	front[x]=front[x]+front[fa[x]];//回溯
	return fa[x]=root;
}

int main()
{
	int T;
	cin>>T;
	
	//初始化
	for(int i=1;i<=MAXN-1;i++)
	{
		fa[i]=i;
		num[i]=1;
	}
	
	for(int i=1;i<=T;i++)
	{
		char type;
		cin>>type>>x>>y;
		
		int rootx=find(x);
		int rooty=find(y);
		
		if(type=='M')//合并
		{
			front[rootx]=front[rootx]+num[rooty];
			
			fa[rootx]=rooty;
			
			num[rooty]+=num[rootx];
			num[rootx]=0;
		}
		if(type=='C')//查询
		{
			if(rootx!=rooty)
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<abs(front[x]-front[y])-1<<endl;
			}
		}
	}
	return 0;
}