/**
 * 1108：向量点积计算
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1108
 */
#include <iostream>
using namespace std;

int a[1001],b[1001];
int s=0;

int main()
{
	int n;
	cin >>n;
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