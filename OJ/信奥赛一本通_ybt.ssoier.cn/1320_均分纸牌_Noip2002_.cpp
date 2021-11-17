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
	for(int i=1;i<=n;i++)
	{
		cin >>a[i]; 
		sum += a[i];
	}

	average=sum/n;

//copy
	int i = 1, j = n;
	while (a[i] == 0 && i < n) i++;
	while (a[j] == 0 && j > 1) j--;
	while (i < j)
	{
		a[i + 1] += a[i];
		a[i] = 0; t++;
		i++; while (a[i] == 0 && i < j) i++;

	}
	
	cout <<t;
	return 0;
}
