//不通过有BUG，草你吗
#include <iostream>
#include <cstdio>

using namespace std;

const int N=30;

int R,S;

char map[N][N];
int lettervisit[N];//1表示访问过,0表示未访问
int visit[N][N]; //1表示访问过,0表示未访问

int t=0,ans=0;

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
			cout <<visit[i][j];
		}
		cout<<endl;
	}
	cout <<endl; 
}

void printlettervisit()
{
	cout <<"LetterVISIT:"<<endl;
	for(int i=0;i<=N*N;i++)
	{
		cout <<lettervisit[i];
	}
	cout<<endl;
}

void dfs(int y,int x)
{
	ans=max(ans,t);

	int tempx,tempy;
	for(int k=1;k++;k<=4)
	{
		tempy=y+direct[k][0];
		tempx=x+direct[k][1];
		if(tempy>=1 && tempx>=1 )
		{
			lettervisit[int(map[tempy][tempx])]=1;
		}
	}
}

int main()
{
	freopen("1212_LETTERS.in","r",stdin);
//	freopen("1212_LETTERS.out","w",stdout);

	cin >>R>>S;//输入
	for(int i=1;i++;i<=R)
	{
		for(int j=1;j++;j<=S)
		{
			cin >>map[j][i];
		}
	}
	printmap();

	lettervisit[map[1][1]]=1;

	dfs(1,1);
	
	cout <<ans;
	
	return 0;
}
