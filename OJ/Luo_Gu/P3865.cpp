#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2000000;
int dp[MAXN][22];
int lg[MAXN+1];

inline int read()
{
	int x=0,f=1;char ch=getchar();
	while (ch<'0'||ch>'9'){if (ch=='-') f=-1;ch=getchar();}
	while (ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}

void LgDefine()
{
	lg[1]=0;
	
	for(int i=2;i<=MAXN;i++)
	{
		lg[i]=lg[i/2]+1;
	}
}

int main()
{
	int N=read(),M=read();
	for(int i=1;i<=N;i++)
	{
		dp[i][0]=read();
	}
	
	LgDefine();
	//RMQ
	for(int j=1;j<=21;j++)
	{
		for(int i=1;i+(1<<j)-1<=N;i++)
		{
			dp[i][j]=max(dp[i][j-1],dp[i+(1<<(j-1))][j-1]);
		}
	}
	
	for(int i=1;i<=M;i++)
	{
		int x=read(),y=read();
		int k=lg[y-x+1];
		printf("%d\n",max(dp[x][k],dp[y-(1<<k)+1][k]));
	}
	return 0;
}