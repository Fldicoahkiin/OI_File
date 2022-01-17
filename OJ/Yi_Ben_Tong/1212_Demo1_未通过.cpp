/**
 * 1212：LETTERS
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1212
 * 通过10%,草你吗,不写了
 */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

#define N 30

int R,S;

char map[N][N];
int lettervisit[N];//1表示访问过,0表示未访问
int visit[N][N]; //1表示访问过,0表示未访问

int t=1;
int ans;

int direct[5][2]={//direct[k][0]表示上下变化，direct[k][1]表示左右变化
	{0,0},{-1,0},{1,0},{0,-1},{0,1}//分别对应原地，上，下，左，右
};

void printmap()
{
	cout <<"MAP:"<<endl;
	for(int i=0;i<=R+1;i++)
	{
		for(int j=0;j<=S+1;j++)
		{
			cout <<map[i][j];
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
		cout <<setw(2)<<lettervisit[i];
	}
	cout<<endl;
}

void dfs(int y,int x)
{
	ans=max(ans,t);

	for(int k=1;k<=4;k++)
	{
		int tempy=y+direct[k][0];
		int tempx=x+direct[k][1];

//		if(tempy>=1 && tempx>=1 && tempy<=R && tempx<=S && lettervisit[int(map[tempy][tempx])]==0 && visit[tempy][tempx]==0)
		if(lettervisit[map[tempy][tempx]-64]==0 && visit[tempy][tempx]==0)
		{
			lettervisit[map[tempy][tempx]-64]=1;
			visit[tempy][tempx]=++t;
			printvisit();
			printlettervisit();
			dfs(tempy,tempx);
			lettervisit[map[tempy][tempx]]=0;
			visit[tempy][tempx]=0;
		}
	}
}

int main()
{
	freopen("1212_LETTERS.in","r",stdin);
//	freopen("1212_LETTERS.out","w",stdout);

	memset(visit,-1,sizeof(visit));
	memset(map,'#',sizeof(map));
	cin >>R>>S;//输入
	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=S;j++)
		{
			visit[i][j]=0;
			cin>>map[i][j];
		}
	}
	
	lettervisit[map[1][1]-64]=1;
	visit[1][1]=1;
//	printmap();
//	printvisit();

	dfs(1,1);

	cout <<ans<<endl;

	return 0;
}