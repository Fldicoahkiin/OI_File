#include<bits/stdc++.h>
using namespace std;
const int MAXN = 10001;

int ans;
int a[MAXN][MAXN];

int main()
{
	int n,m,limit;
	cin >>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x,y,v;
		cin >>x>>y>>v;
		a[x+1][y+1]+=v;
		limit=max(limit,max(x+1,y+1));
	}
	
	for(int i=1;i<=5001;i++)
	{
		for(int j=1;j<=5001;j++)
		{
			a[i][j]=a[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
		}
	}
	
	int temp;
	for(int i=m;i<=limit;i++)
	{
		for(int j=m;j<=limit;j++)
		{
			temp = a[i][j]-a[i-m][j]-a[i][j-m]+a[i-m][j-m];
			//cout<<"temp:"<<temp<<endl;
			ans=max(ans,temp); 
		}
	}
	cout<<ans;
	return 0;
}
