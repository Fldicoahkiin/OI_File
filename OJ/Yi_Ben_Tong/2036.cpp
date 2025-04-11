/**
 * 2036：【例5.3】开关门
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=2036
 */
#include <iostream>
using namespace std;
const int MAXN = 1000;
int a[MAXN];
int main()
{
	int n;
	cin >>n;
	for(int i=0;i<=n;i++)//初始化数组
	{
		a[i]=1;
	}
	//for(int i=0;i<=(n-1);i++)//输出
	//{
	//	cout <<a[i]<<" ";
	//}
	//cout <<endl;
	for(int j=2;j<=n;j++)//套相反
	{
		for(int k=j;k<=n;k++)//循环检测倍数
		{
			if(k%j==0)
			{
				a[k]=!a[k];
			}
		}
	}
	for(int i=1;i<=n;i++)//输出
	{
		if(a[i]==1)
		{
			cout <<i<<" ";
		}
	}
	return 0;
}