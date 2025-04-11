/**
 * P1616 疯狂的采药
 *
 * https://www.luogu.com.cn/problem/P1616
 */
#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN = 10000005;
long long v[MAXN];//价值
long long t[MAXN];//时间
long long dp[MAXN];
int main()
{
	int T,M;
	cin >>T>>M;
	for(int i=1;i<=M;i++)
	{
		cin >>t[i]>>v[i];
	}
	
	for(int i=1;i<=M;i++)
	{
		for(int j=t[i];j<=T;j++)
		{
			dp[j]=max(dp[j],dp[j-t[i]]+v[i]);
		}
	}
	
	/*
	错误的
	for(int i=1;i<=M;i++)
	{
		for(int j=T;j>=0;j--)
		{
			dp[j]=max(dp[j],dp[j-t[i]]+v[i]);
		}
	}
	*/
	cout <<dp[T];
	
	return 0;
}