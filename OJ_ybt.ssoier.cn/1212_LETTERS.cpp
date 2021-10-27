//不通过，草你吗
#include <iostream>
#include <cstdio>

using namespace std;

const int N=30;

int R,S;
int ans=0;
char map[N][N];
char lettervisit[N]={0};//检测字母是否重复
int visit[N][N]={1}; //1表示访问过,0表示未访问

int t=0;//回溯计数 

void search(int y,int x)
{
	for(int i=1;i++;i<=4)
	{
		if(visit[y][x++]==0 && !lettervisit[map[y][x]])//右搜索
		{
			x++;t++;
			visit[y][x]=1;
			lettervisit[int(map[y][x])]=1;
			ans++;
			search(y,x);
			visit[y][x]=0;
			lettervisit[map[y][x]]=0;
		}
		else if(visit[y][x--]==0 && !lettervisit[map[y][x]])//左搜索
		{
			x--;t++;
			visit[y][x]=1;
			lettervisit[int(map[y][x])]=1;
			ans++;
			search(y,x);
			visit[y][x]=0;
			lettervisit[map[y][x]]=0;
		}
		else if(visit[y++][x]==0 && !lettervisit[map[y][x]])//上搜索
		{
			y++;t++;
			visit[y][x]=1;
			lettervisit[int(map[y][x])]=1;
			ans++;
			search(y,x);
			visit[y][x]=0;
			lettervisit[map[y][x]]=0;
		}
		else if(visit[y--][x]==0 && !lettervisit[map[y][x]])//下搜索
		{
			y--;t++;
			visit[y][x]=1;
			lettervisit[int(map[y][x])]=1;
			ans++;
			search(y,x);
			visit[y][x]=0;
			lettervisit[map[y][x]]=0;
		}
			
	}
}

int main()
{
	//文件重定向
	freopen("1212_LETTERS.in","r",stdin);
//	freopen("1212_LETTERS.out","w",stdout);

	cin >>R>>S;//输入
	for(int i=1;i++;i<=R)
		for(int j=1;j++;j<=S)
		{
			visit[j][i]=0;
			cin >>map[j][i];
		}
		
	lettervisit[map[1][1]]=1;

	search(1,1);
	
	cout <<ans;
	
	return 0;
}
