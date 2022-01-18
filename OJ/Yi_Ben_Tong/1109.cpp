/**
 * 1109：开关灯
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1109
 */
#include <iostream>
#include <cstring>
using namespace std;

bool light[5001];

int main()
{
	int n,m;
	cin >>n>>m;
	for(int j=2;j<=m;j++)//套相反
	{
		for(int k=j;k<=n;k++)//循环检测倍数
		{
			if(k%j == 0)
			{
				light[k] =! light[k];
			}
		}
	}
	for(int i=1;i<=n;i++)//输出
	{
		if(light[i]== 0)
		{
			if(i == 1)
			{
				cout <<i;
			}
			else
			{
				cout <<","<<i;
			}
		}
	}
	return 0;
}