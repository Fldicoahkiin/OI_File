#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 500001;

ll n,m;
ll a[MAXN];
ll c[MAXN];

ll lowbit(ll x)
{
	return x&-x;
}

void update(ll i,ll x)
{
	while(i<=n)
	{
		c[i]+=x;
		i+=lowbit(i);
	}
	return;
}

ll sum(ll i)
{
	ll s=0;
	while(i)
	{
		s+=c[i];
		i-=lowbit(i);
	}
	return s;
}

int main()
{
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		update(i,a[i]);
	}
	
	ll flag,x,k;
	for(ll i=1;i<=m;i++)
	{
		cin>>flag>>x>>k;
		if(flag==1)
		{
			update(x,k);
		}
		if(flag==2)
		{
			cout<<sum(k)-sum(x-1)<<endl;
		}
	}
	return 0;
}