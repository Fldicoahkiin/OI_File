//树状数组做法
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 100000;

int a[MAXN];//原
int d[MAXN];//差分
ll c[MAXN];//树状
ll c2[MAXN];//d[i]*i的前缀和

int lowbit(int i)
{
	return i&-i;
}

/*void update(int i,int x)
{
	while(i<=MAXN)
	{
		c[i]+=x;
		i+=lowbit(i);
	}
}*/

void update2(int x,int y)
{
	for(int i=x;i<=MAXN;i+=lowbit(i))
	{
		c[i]+=y;
		c2[i]+=x*y;
	}
}

/*ll sum(ll x)
{
	ll ans=0;
	while(x)
	{
		ans+=c[x];
		x-=lowbit(x);
	}
	return ans;
}*/

ll sum2(ll x)
{
	ll ans1=0;
	ll ans2=0;
	for(int i=x;i>0;i-=lowbit(i))
	{
		ans1+=(x+1)*c[i];
		ans2+=c2[i];
	}
	return ans1-ans2;
}

int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		d[i]=a[i]-a[i-1];//转化为差分
		update2(i,d[i]);//转化为树状
	}

	for(int i=1;i<=m;i++)
	{
		int temp;
		cin>>temp;
		if(temp==1)
		{
			int x,y,k;
			cin>>x>>y>>k;
			update2(x,k);
			update2(y+1,-k);
		}
		if(temp==2)
		{
			ll x,y;
			cin>>x>>y;
			
			/*ll s1=0,s2=0;
			for(int i=1;i<=y;i++)
			{
				s1+=sum(i);
			}
			for(int i=1;i<=x-1;i++)
			{
				s2+=sum(i);
			}
			cout<<s1-s2<<endl;*/
			
			cout<<sum2(y)-sum2(x-1)<<endl;
		}
	}
	return 0;
}