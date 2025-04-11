//线段树做法
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 100000;

struct TreeNode
{
	ll val,tag;
}Tree[MAXN*4];
ll a[MAXN];

void build(ll root,ll arr[],ll istart,ll iend)
{
	if(istart==iend)
	{
		Tree[root].val=arr[istart];
	}
	else
	{
		ll mid=(istart+iend)/2;
		build(root*2,arr,istart,mid);
		build(root*2+1,arr,mid+1,iend);
		Tree[root].val=Tree[root*2].val+Tree[root*2+1].val;
	}
}

int  search(ll root,ll nl,ll nr,ll ql,ll qr)
{
	if(ql<=nl && qr>=nr)
	{
		return Tree[root].val;
	}
	int mid=(nl+nr)/2;
	return search(root*2,nl,mid,ql,qr)+search(root*2+1,mid+1,nr,ql,qr);
}

int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	build(1,a,1,n);
	
	return 0;
}