/**
 * 2043：【例5.11】杨辉三角形
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=2043
 */
#include <iostream>
using namespace std;

int san[20][20]={{0,1},{1,1,1}};

int main()
{
	int n,x;
	cin >>n;

	for(int i=1;i<=n;i++)//赋值 
	{
		for(x=1;x<=i;x++)
		{
			san[x][i]=1;
			if((x>=2)&&(x!=i))
			{
				san[x][i]=san[x][i-1]+san[x-1][i-1];
			}
		}
	}

	for(int j=1;j<=n;j++)//输出
	{
		for(int k=1;k<=j;k++)
		{
			cout <<san[k][j]<<" ";
		}
		cout <<endl;
	}
	return 0;
}