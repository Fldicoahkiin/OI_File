#include <iostream>
#include<cstring>
#include<algorithm>
#include <cstdio>
using namespace std;
const int MAXN = 100000;

int T,temp,a[MAXN];
int dp[MAXN];

int main()
{
	cin >>T;
	while(T--)
	{
		memset(dp,0,sizeof(dp));
		memset(a,0,sizeof(a));
		
		cin >>temp;
		int ans=temp;
		
		for(int i=1;i<=temp;i++)
		{
			cin >>a[i];
		}
		sort(a+1,a+temp+1);
		//cout <<a[temp]<<endl;
		
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		
		for(int i=1;i<=temp;i++)
		{
			
			if(dp[a[i]])
			{
				ans--;
				continue;
			}
			for(int j=a[i];j<=a[temp];j++)
			{
				dp[j]=max(dp[j],dp[j-a[i]]);
				//cout <<"dp["<<j<<"]="<<dp[j]<<endl;
			}
			
		}
		cout <<ans<<endl;
	}
	return 0;
}