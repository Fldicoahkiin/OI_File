#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1000000;

int a[MAXN],d[MAXN];

int main()
{
	int n,m;
	cin >>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	//差分数组
	for(int i=1;i<=n;i++)
	{
		d[i]=a[i]-a[i-1];
	}
	
	//修改
	for(int i=1;i<=m;i++)
	{
		int l,r,c;
		cin >>l>>r>>c;
		d[l]+=c;
		d[r+1]-=c;
	}
	
	for(int i=1;i<=n;i++)
	{
		a[i]=a[i-1]+d[i];
		cout <<a[i]<<' ';
	}
	return 0;
}
/*
in:
6 3
1 2 2 1 2 1
1 3 1 
3 5 1
1 6 1
*/