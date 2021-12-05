/**
 * 1326：【例7.5】 取余运算（mod）
 */
#include <iostream>
#include <cstdio>

using namespace std;

#

int main()
{
	long long b,p,k,ans;
	cin >>b>>p>>k;
	cout <<b<<"^"<<p<<" mod "<<k<<"=";

//快速取模
	long long t=b;
	ans=1;
	while(p)
	{
		if(p&1)
		{
			ans=ans*t%k;
		}
		t=t*t%k;
		p=p>>1;
	}


	cout <<ans;
	return 0;
}
