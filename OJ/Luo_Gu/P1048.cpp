/**
 * P1048 [NOIP2005 普及组] 采药
 *
 * https://www.luogu.com.cn/problem/P1048
 */
#include <iostream>
#include <cstdio>
using namespace std;

const int MAXN = 2000;

int T,M;
int timecost[MAXN];
int worth[MAXN];
int dp2[MAXN][MAXN];
int dp1[MAXN];

int main()
{
    //freopen("P1048.in","r",stdin);
    
	/*
    scanf("%d %d",&T,&M);
	for(int i=1;i<=M;i++)
	{
		scanf("%d %d",&Time[i],&worth[i]);
	}
	*/
	cin>>T>>M;
	for(int i=1;i<=M;i++)
	{
		cin >>timecost[i]>>worth[i];
		//cout <<timecost[i]<<' '<<worth[i]<<endl;
	}
	
	/*
	二维数组
	for(int i=1;i<=M;i++)
	{
		for(int j=1;j<=T;j++)
		{
			if(j>=timecost[i])
            {
                dp2[i][j]=max(dp2[i-1][j],dp[i-1][j-timecost[i]]+worth[i]);
            }  
            else
            {
                dp2[i][j]=dp2[i-1][j];
            }  
			//cout <<dp[i][j]<<' ';
		}
		//cout <<endl;
	}
	cout <<dp2[M][T];
	*/
	
	for(int i=1;i<=M;i++)
    {
        for(int j=T;j>=0;j--)//倒着dp
        {
            if(j>=timecost[i])
            {
                dp1[j]=max(dp1[j],dp1[j-timecost[i]]+worth[i]);
            }
        }
    }
    cout <<dp1[T];
	
    return 0;
}