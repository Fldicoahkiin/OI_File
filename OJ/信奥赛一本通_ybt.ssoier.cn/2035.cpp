#include <iostream>

using namespace std;

int  main()
{
	int n;
	int a[50];
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		cin >>a[i];
	}
	a[n+1]=a[1];
	for (int j=0;j<=(n+1);j++)
	{
		a[j]=a[j+1];
	
	}
	
	for (int i=1;i<=n;i++)
	{
		cout <<a[i]<<" ";
	}
	return 0;
}	
