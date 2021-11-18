//1320：【例6.2】均分纸牌(Noip2002)
#include <iostream>
#include <cstdio>

using namespace std;

int n;
int a[102];
int sum=0,average;
int t=0;

int main()
{
	freopen("1320.in", "r" , stdin); 
//	freopen("1320.out", "w" , stdout); 

	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >>a[i]; 
		sum += a[i];
	}

	average=sum/n;

	for(int i=0;i<n;i++)
	{
		a[i]-=average;
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==0)
		{
			continue;
		}
		else
		{
			a[i+1]+=a[i];
			t++;
		}
	}

	cout <<t;
	return 0;
}
