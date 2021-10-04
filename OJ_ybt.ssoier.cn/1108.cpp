#include <iostream>
using namespace std;
int main()
{
	int n,s=0;
	cin >>n;
	int a[n],b[n];
	for(int j=0;j<n;j++)
	{
		cin >>a[j];
	}
	for(int j=0;j<n;j++)
	{
		cin >>b[j];
	}
	for(int k=0;k<n;k++)
	{
		s=s+a[k]*b[k];
	}
	cout <<s<<endl;
	return 0;
}
