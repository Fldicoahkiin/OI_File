/**
 * 1215：迷宫
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1215
 * 未通过/提交
 * 抄的
 */
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

const int maxn=100+10;

int k,n,ha,la,hb,lb;
char a[maxn][maxn]={};
int da[5]={0,1,0,-1};
int db[5]={1,0,-1,0};
bool b[maxn][maxn]={};
int flag=0;

bool dfs(int x,int y)
{
	if(x==hb&&y==lb)
	{
		flag=1;
		return true;
	}
	for(int i=0;i<4;i++)
	{	
		int p=x+da[i];
		int q=y+db[i];
		if(a[p][q]=='.'&&b[p][q]==0&&p>=0&&q>=0&&p<n&&q<n)
		{
			b[p][q]=1;
			dfs(p,q);
		}
	}
	return false;	
}

int main()
{
	cin>>k;
	while(k!=0)
	{
		k--;
		cin>>n;
		flag=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		cin>>ha>>la>>hb>>lb;
		if(a[ha][la]=='#'||a[hb][lb]=='#')
		{
			cout<<"NO"<<endl;
			continue;
		}
		b[ha][la]=1;
		dfs(ha,la);
		if(flag==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}