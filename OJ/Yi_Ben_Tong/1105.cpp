#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >>n;
	int a[n];
	for(int i=(n-1);i>=0;i--)
	{
		cin >>a[i];
	}
	for (int j=0;j<n;j++)
	{
		cout <<a[j]<<" ";
	} 
	return 0;
}
