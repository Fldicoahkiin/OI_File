#include <iostream>

using namespace std;

int main()
{
	int n,max,l;
	cin >>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin >>a[i];
		max =a[i];
	}
	for(int j=1;j<=n;j++)
	{
		if(a[j]>max)
		{
			max =a[j];
			l =j;
		}
	}
	cout <<l;
	return 0;
	
}
