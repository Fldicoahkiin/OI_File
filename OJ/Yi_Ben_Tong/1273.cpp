/**
 * 1273：【例9.17】货币系统
 *
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1273
 */
#include<iostream>
#include<cstdio>
using namespace std;
const int MAXN = 100000;
long long dp[MAXN];
long long n[MAXN],N,M;
int main()
{
	cin >>N>>M;
	for(int i=1;i<=N;i++)
	{
		cin >>n[i];
	}
	
	for(int i=1;i<=N;i++)
	{
		for(int j=n[i];j<=M;j++)
		{
			dp[i]=dp[i]+dp[i-n[i]];
		}
	}
	cout <<dp[M];
	return 0;
}