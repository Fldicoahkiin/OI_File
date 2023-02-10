#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2000000;

int dpmax[MAXN][22];
int dpmin[MAXN][22];
int lg[MAXN+1];

void LogDefine()
{
	lg[1]=0;
	for(int i=2;i<=MAXN;i++)
	{
		lg[i]=lg[i/2]+1;
	}
}

int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>dpmax[i][0];
		dpmin[i][0]=dpmax[i][0];
	}
	
	LogDefine();
	//RMB
	for(int j=1;j<=22;j++)
	{
		for(int i=1;i+(1<<j)-1<=n;i++)
		{
			dpmax[i][j]=max(dpmax[i][j-1],dpmax[i+(1<<(j-1))][j-1]);
			dpmin[i][j]=min(dpmin[i][j-1],dpmin[i+(1<<(j-1))][j-1]);
		}
	}
	
	for(int i=1;i<=q;i++)
	{
		int a,b,ans;
		cin >>a>>b;
		int k=lg[b-a+1];
		ans=max(dpmax[a][k],dpmax[b-(1<<k)+1][k])-min(dpmin[a][k],dpmin[b-(1<<k)+1][k]);
		cout<<ans<<endl;
	}
	
	return 0;
}