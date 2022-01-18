/**
 * 2038：【例5.5】最大数位置
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=2038
 */
#include <iostream>
using namespace std;
const int MAXN = 1001;

int a[MAXN];

int main()
{
	int n,max,l;
	cin >>n;
	
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