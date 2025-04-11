#include<bits/stdc++.h>
using namespace std;

long long a,b,p;

long long kmp(long long a,long long b,long long mod)
{
	long long s=1LL;
	while(b)
	{
		if(b&1LL)
		{
			s=s*a%mod;
		}
		a=a*a%mod;//自增
		b=b>>1;
	}
	return s%mod;
}

int main()
{
	cin>>a>>b>>p;
	cout<<a<<'^'<<b<<" mod "<<p<<'='<<kmp(a,b,p);
	return 0;
}