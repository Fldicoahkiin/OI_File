#include <iostream>

using namespace std;

int main()
{
	long long n,f[50]={1,2,3};
	cin >>n;
	for(int i=3;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	cout <<f[n-1]<<endl;
	return 0;
}
