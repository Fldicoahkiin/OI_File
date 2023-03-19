#include<bits/stdc++.h>
#define ll long long
const int MAXN = 300001;

int a[MAXN];

int head[MAXN];
struct
{
	int to,nxt,val;
} E[MAXN];

int cnt;
inline void add(int to,int from,int val)
{
	cnt++;
	E[cnt].to=to;
	E[cnt].nxt=from;
	E[cnt].val=val;
	head[to]=cnt;
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		add(x,y,1);
		add(y,x,1);
	}
	
	return 0;
}