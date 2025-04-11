/**
 * 1105：数组逆序重存放
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1105
 */
#include <iostream>
using namespace std;

int a[101];

int main()
{
	int n;
	cin >>n;
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