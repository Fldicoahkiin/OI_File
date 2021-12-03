/**
 * 1325：【例7.4】 循环比赛日程表
 * 解法:跟题目没有半毛钱关系,就是单纯的找规律
 */
#include <iostream>

#define MAXN 1000

using namespace std;

int matchlist[MAXN][MAXN];

int main()
{
	int M;
	cin >>M;
	int n=1<<M;//即n为2的M次方
	
	matchlist[1][1]=1;
	
	int k=1;//k即为2的i次方
	for(int i=1;i<=M;i++)
	{
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=k;j++)
			{
				matchlist[i][j+k]=matchlist[i][j]+k;
			}	
		}
			
		
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=k;j++)
			{
				matchlist[i+k][j]=matchlist[i][j+k];
				matchlist[i+k][j+k]=matchlist[i][j];
			}
		}
			
//		k=k*2;
		k=1<<i;
	}
	for(int i=1;i<=n;i++)//输出
	{
		for(int j=1;j<=n;j++)
		{
			cout <<matchlist[i][j]<<" ";
		}
		cout <<endl;
	}

	return 0;
}
