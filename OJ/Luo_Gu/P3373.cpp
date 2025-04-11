#include<bits/stdc++.h>
#define int long long
using  namespace std;
const int MAXN = 100000;

int p;
int a[MAXN];

struct TreeNode
{
	int val;
	int tag_add;
	int tag_mul;
}t[MAXN*4];

void build(int root,int arr[],int l,int r)
{
	t[root].tag_add=0;
	t[root].tag_mul=1;
	if(l==r)
	{
		t[root].val=arr[l];
	}
	else
	{
		int mid=(l+r)/2;
		build(root*2,arr,l,mid);//左子树
		build(root*2+1,arr,mid+1,r);//右子树
		t[root].val=t[root*2].val+t[root*2+1].val);
	}
}

void pushdown(int root)
{
	
}

void update1(int root,int nowl,int nowr,int l,int r,int x)//乘法
{
	if(r<nowl || nowr<l)
	{
		return;
	}
	if(l<=nowl && nowr<=r)
	{
		t[root].tag_add=(t[root].tag_add*x)%p;
		t[root].tag_mul=(t[root].tag_mul*x)%p;
		t[root].val=(t[root].val*x)%p;
		return;
	}
}

void update2(int root,int nowl,int nowr,int l,int r,int x)//加法
{
	if(r<nowl || nowr<l)
	{
		return;
	}
	if(l<=nowl && nowr<=r)
	{
		t[root].tag_add=(t[root].tag_add+x)%p;
		t[root].val=(t[root].val+x*(nowr-nowl+1))%p;
		return;
	}
}

void query(int l,int r)
{
	
}

int main()
{
	int n,m;
	cin>>n>>m>>p;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	build(1,a,1,n+1);
	
	for(int i=1;i<=m;i++)
	{
		int type;
		cin>>type;
		if(type==1)
		{
			int x,y,k;
			cin>>x>>y>>k;
			update1(1,1,n,x,y,k);
		}
		if(type==2)
		{
			int x,y,k;
			cin>>x>>y>>k;
			update2(1,1,n,x,y,k);
		}
		if(type==3)
		{
			int x,y;
			cin>>x>>y;
			query(x,y);
		}
	}
	return 0;
}