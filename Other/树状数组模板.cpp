#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100000;

int a[MAXN];
int c[MAXN];
int n =100;


//补码运算
int lowbit(int x)
{
	return x&-x;
}
/*int lowbit(int i)
{
	int a=1;
	while(i&a==0)
	{
		a<<=1;
	}
	return a;
}*/


void update(int i,int x)
{
	while(i<=n)
	{
		c[i]=c[i]+x;
		i=i+lowbit(i);
	}
}

void build(int k)
{
	for(int i=1;i<=n;i++)
	{
		a[i]=k;
		update(i,a[i]);
	}
}

int sum(int x)
{
	int ans=0;
	while(x)
	{
		ans+=c[x];
		x=x-lowbit(x);
	}
	return ans;
}

int main()
{
	int temp;cin>>temp;
	build(temp);
	
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<c[i]<<' ';
	}
	cout<<endl;
	
	int l,r;
	cin>>l>>r;
	cout<<sum(r)-sum(l-1)<<endl;
	
	return 0;
}