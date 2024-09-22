#include<bits/stdc++.h>
using namespace std;
const int MAXN = 200001;
#define ll long long

ll n;
int a[MAXN];
int s=0;

void work()
{
	for(ll i=1;i<n;i++)
	{
		s+=a[i]*i;
		a[i]
	}
	cout<<s<<endl;
}

int main()
{
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	work();
	return 0;
}