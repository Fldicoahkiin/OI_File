#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN = 1000;

int map[MAXN][MAXN];
char temp[MAXN][MAXN];

int main()
{
	//freopen("mine.in","r",stdin);
	
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>temp[i][j];
			if(temp[i][j]=='*')
			{
				map[i-1][j]++;//左
				map[i+1][j]++;//右
				map[i][j-1]++;//下
				map[i][j+1]++;//上
				map[i-1][j+1]++;//左上
				map[i+1][j-1]++;//右下
				map[i+1][j+1]++;//右上
				map[i-1][j-1]++;//左下
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(temp[i][j]=='*') cout<<'*';
			else cout<<map[i][j];
		}
		cout<<endl;
	}
	return 0;
}