/**
 * P1018 [NOIP2000 提高组] 乘积最大
 *
 * https://www.luogu.com.cn/problem/P1018
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;
const int MAXN = 10000;
int n,k;
int nm[MAXN],nmq[MAXN][MAXN];
int dp[MAXN][MAXN];

inline void print_nmq()
{
	cout <<"nmq:"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout <<setw(5)<<nmq[i][j];
		}
		cout <<"\n";
	}
	return;
}
inline void print_dp()
{
	cout <<"dp:"<<endl;
	for(int i=0;i<k;i++)
	{
		cout <<"i:"<<i<<' ';
		for(int j=1;j<=n;j++)
		{
			cout <<setw(5)<<dp[i][j];
		}
		cout <<"\n";
	}
	return;
}

int main()
{
	cin >>n>>k;
	char ch;
	for(int i=1;i<=n;i++)
	{
		cin >>ch;
		nm[i]=ch-'0';
		nmq[i][i]=nm[i];
	}
	
	
	//初始化
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			nmq[i][i+j]=nmq[i][i+j-1]*10+nmq[i+j][i+j];
		}
	}
	//print_nmq();
	
	for(int i=1;i<=n;i++) dp[0][i]=nmq[1][i];
	for(int i=1;i<=k;i++)//i为乘号个数
	{
		for(int j=i+1;j<=n;j++)//j为区间
		{
			for(int m=i+1;m<=j;m++)//m为分割线递推
            {
                dp[i][j]=max(dp[i][j],dp[i-1][m-1]*nmq[m][j]);
                //cout <<"i:"<<i<<';'<<"j:"<<j<<';'<<"m:"<<m<<";\n";
                //print_dp();
            }
		}
	}
	//print_dp();
	cout <<dp[k][n];
	return 0;
}