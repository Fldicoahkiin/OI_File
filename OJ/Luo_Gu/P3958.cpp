#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 10000;

int fa[MAXN];

int find(int x)
{
	if(fa[x]==x) return fa[x];
	else return fa[x]=find(fa[x]);
}

ll dist(ll x,ll y,ll z,ll x1,ll y1,ll z1)
{
    return (x-x1)*(x-x1)+(y-y1)*(y-y1)+(z-z1)*(z-z1);
}

struct holl
{
	ll x,y,z;
};
holl holl[MAXN];

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,h;
		ll r;
		cin>>n>>h>>r;
		
		//初始化
		for(int i=1;i<=n;i++)
		{
			fa[i]=i;
		}
		
		for(int i=1;i<=n;i++)
		{
			cin>>holl[i].x>>holl[i].y>>holl[i].z;
			if((holl[i].z-r)<=0)
			{
				if(find(i)!=find(0))
				{
					fa[find(i)]=find(0);
				}
			}
			if(holl[i].z+r>=h)
			{
				if(find(i)!=find(n+1))
				{
					fa[find(i)]=find(n+1);
				}
			}
			for(int j=1;j<i;j++)
			{
				if((2*r)*(2*r)>=dist(holl[i].x,holl[i].y,holl[i].z,holl[j].x,holl[j].y,holl[j].z))
				{
					if(find(i)!=find(j))
					{
						fa[find(i)]=find(j);
					}
				}
			}
		}
		if(find(0)==find(n+1))
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