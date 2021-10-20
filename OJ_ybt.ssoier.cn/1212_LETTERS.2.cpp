#include <iostream>
#include <cstdio>

using namespace std;

const int N=30;

char map[N][N];
int ans,R,S;
int visit[N][N]={0},lettervisit[N]={0};

int f[5][2]={{0,0},{0,1},{1,0},{-1,0},{0,-1}}; // 四个方向

void printmap()
{
	for(int i=0;i<=R;i++)
	{
		for(int j=0;j<=S;j++)
		{
			cout <<map[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
}

void printvisit()
{
	for(int i=0;i<=R;i++)
	{
		for(int j=0;j<=S;j++)
		{
			cout <<visit[i][j];
		}
		cout<<endl;
	}
	cout <<endl; 
}

void printlettervisit()
{
	for(int i=0;i<=R;i++)
	{
		cout <<lettervisit[i];
	}
	cout<<endl;
}

bool ifcan(int x,int y)
{
	return x>0 && y>0 && x<=R && y<=S && lettervisit[map[x][y]]==0 && visit[x][y]==0;  	
}

void dfs(int x,int y,int sum)
{
//	ans = max(ans,sum);
	if(ans<sum)
	{
		ans = sum;
	}
	for(int i=1;i<=4;i++)
	{
		int xx = x + f[i][0];
		int yy = y + f[i][1];
		if(ifcan(xx,yy))
		{
			printvisit();
			visit[xx][yy] = sum+1;
			lettervisit[map[xx][yy]] = true;
			dfs(xx,yy,sum+1);
			visit[xx][yy] = false;
			lettervisit[map[xx][yy]] = false;				
		}
	}
	return;
}

int main()
{
	freopen("1212_LETTERS.in","r",stdin);
//	freopen("1212_LETTERS.out","w",stdout);
	cin>>R>>S;
	
//	for(int i=0;i<=R;i++)
//		for(int j=0;j<=S;j++)
//			char tmp;
//			cin>>tmp;
//			map[i][j] = tmp - 'A';

	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=S;j++)
		{
			visit[i][j]=0;
			cin>>map[i][j];
		}
	}	
	
	lettervisit[map[1][1]] = true;
	visit[1][1] = true;
	dfs(1,1,1);
	
	cout<<ans;
	
	printmap();

	printvisit();
	
	printlettervisit();
	
	return 0;
}
