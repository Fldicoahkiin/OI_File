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
	for(int i=1;i<n;i++)
	{
		cin >>a[i]; 
		sum += a[i];
	}

	average=sum/n;

//copy
	for(int i=1;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[i+1]=a[i]+a[i+1];
			a[i]==0;
			t++;
		}
		else
		{
			continue;
		}
	}

	cout <<t;
	return 0;
}
