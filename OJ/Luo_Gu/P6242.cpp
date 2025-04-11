#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 1000000;

ll a[MAXN];//原数组
ll b[MAXN];//辅助数组

struct TreeNode
{
	ll val;
	ll tag;
}t[MAXN*4];

void build(ll root,ll arr[],ll l,ll r)
{
	t[root].tag = 0;
	if(l==r)
	{
		t[root].val=arr[l];
	}
	else
	{
		int mid=(l+r)/2;
		build(root*2,arr,l,mid);
		build(root*2+1,arr,mid+1,r);
		t[root].val=min(t[root*2].val,t[root*2+1].val);
	}
}

int main()
{
	
	return 0;
}