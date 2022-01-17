/**
 * 1212：LETTERS
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1212
 * 通过80%
 */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

const int N=30;

char map[N][N];
int ans,R,S;
int visit[N][N];
int lettervisit[N];

int f[5][2]={{0,0},{0,1},{1,0},{-1,0},{0,-1}}; // 四个方向

void printmap()
{
	cout <<"MAP:"<<endl;
	for(int i=0;i<=R+1;i++)
	{
		for(int j=0;j<=S+1;j++)
		{
			cout <<setw(2)<<map[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
}

void printvisit()
{
	cout <<"VISIT:"<<endl;
	for(int i=0;i<=R+1;i++)
	{
		for(int j=0;j<=S+1;j++)
		{
			cout <<setw(2)<<visit[i][j];
		}
		cout<<endl;
	}
	cout <<endl;
}

void printlettervisit()
{
	cout <<"LetterVISIT:"<<endl;
	for(int i=0;i<=N;i++)
	{
		cout <<lettervisit[i];
	}
	cout<<endl;
}

void dfs(int x,int y,int sum)
{
	ans = max(ans,sum);
	for(int i=1;i<=4;i++)
	{
		int xx = x + f[i][0];
		int yy = y + f[i][1];
		if(xx>0 && yy>0 && xx<=R && yy<=S && lettervisit[map[xx][yy]]==0 && visit[xx][yy]==0)
		{
//			printvisit();
			visit[xx][yy] = sum+1;
			lettervisit[map[xx][yy]] = 1;
			dfs(xx,yy,sum+1);
			visit[xx][yy] = 0;
			lettervisit[map[xx][yy]] = 0;
		}
	}
}

int main()
{
//	freopen("1212_LETTERS.in","r",stdin);
//	freopen("1212_LETTERS.out","w",stdout);

	cin>>R>>S;
	
	/**
	for(int i=0;i<=R;i++)
		for(int j=0;j<=S;j++)
			char tmp;
			cin>>tmp;
			map[i][j] = tmp - 'A';
	*/

	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=S;j++)
		{
			visit[i][j]=0;
			cin>>map[i][j];
		}
	}

	lettervisit[map[1][1]] = true;
	visit[1][1] = 1;
	dfs(1,1,1);

	cout <<ans<<endl;

	return 0;
}