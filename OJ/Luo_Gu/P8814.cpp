#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

long long sovle(long long n,long long d,long long e)
{
	//n=x1*x2;m=(x1-1)(x2-1)+1=x1x2-x1-x2+2=n-x1-x2+2
	long long x1,x2;
	long long m=d*e;
	long long z=n-m+2;//z=x1+x2
	
	
	
	
	cout <<min(x1,x2)<<' '<<max(x1,x2)<<endl;
	//cout <<"NO"<<endl;
}

int main()
{
	int k;
	long long ni,di,ei;
	cin>>k;
	
	for(int i=1;i<=k;i++)
	{
		cin>>ni>>di>>ei;
		sovle(ni,di,ei);
	}
	return 0;
}