#include<bits/stdc++.h>
using namespace std;
const int MAXN = 10000;

int a[MAXN][MAXN];

int main()
{
	int n,m;cin >>n>>m;
	
	//差分读入
	int x1,y1,x2,y2;
	for(int i=1;i<=m;i++)
	{
		cin>>x1>>y1>>x2>>y2;
		a[x1][y1]++;
		a[x2+1][y1]--;
		a[x1][y2+1]--;
		a[x2+1][y2+1]++;
	}
	
	//差分转原数组
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]=a[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
			cout <<a[i][j]<<' ';
		}
		cout <<endl;
	}
	return 0;
}