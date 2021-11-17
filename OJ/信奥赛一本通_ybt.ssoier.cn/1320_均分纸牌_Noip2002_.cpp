#include <iostream>
#include <cstdio>

using namespace std;

int n;
int a[101];
int sum=0,average;
int t=0;

int main()
{
//	freopen("1320.in", "r" , stdin); 
//	freopen("1320.out", "w" , stdout); 

	cin >>n;
	for(int i=0;i<=n;i++)
	{
		cin >>a[i]; 
		sum += a[i];
	}
	average=sum/n;

	for(int i=1;i<=n;i++)
	{
		a[i]-=average;
		if(a[i]<0)
		{
			t++;
		}
	}
	
/*	for(int i=1;i<=n;i++)
	{
		cout <<a[i]<<endl;
	}*/
	cout <<t;
	return 0;
}
